<?php

// Incluindo conexao
include_once ("conexao.php");

// Pegando dados
$codUsuario = $_POST['codUsuario'];
$tituloImovel = $_POST['tituloImovel'];
$tipoImovel = $_POST['tipoImovel'];
$tipoNegocio = $_POST['tipoNegocio'];
$valor = $_POST['valorImovel'];
$cidade = $_POST['cidadeImovel'];
$uf = $_POST['ufImovel'];
$logradouro = $_POST['logradouroImovel'];
$endereco = $_POST['enderecoImovel'];
$numero = $_POST['numeroImovel'];
$complemento = $_POST['complementoImovel'];
$bairro = $_POST['bairroImovel'];
$areaTotal = $_POST['areaTotalImovel'];
$areaUtil = $_POST['areaUtilImovel'];
$dormitorios = $_POST['dormitoriosImovel'];
$banheiros = $_POST['banheirosImovel'];
$garagem = $_POST['garagemImovel'];
$descricao = $_POST['descricaoImovel'];

// Selecionando o codigo do tipo de imóvel
$query = "SELECT * FROM tipoImovel WHERE nome_tipoImovel = '$tipoImovel'";
$result = mysqli_query($conn, $query) or die('Erro ao selecionar tipo de imóvel');
$row = mysqli_fetch_array($result);
$cod_tipoImovel = $row['cod_tipoImovel'];

// Inserindo no BD
$query = "INSERT INTO imoveis VALUES (NULL, $codUsuario, 
$cod_tipoImovel, '$tituloImovel', '$tipoNegocio', '$valor', 
'$cidade', '$uf', '$logradouro', '$endereco', $numero, '$complemento',
 '$bairro', '$areaTotal', '$areaUtil', $dormitorios, $banheiros, $garagem, '$descricao', 1 )";
$result = mysqli_query($conn, $query) or die("Erro ao cadastrar imóvel");

// Pegando código do Imóvel
$query = "SELECT * FROM imoveis WHERE cod_usuario = '$codUsuario' AND numero_imovel = '$numero'";
$result = mysqli_query($conn, $query);
$row = mysqli_fetch_array($result);
$codImovel = $row['cod_imovel'];


// Imagens
$arquivo1 = $_FILES['myimage1']['name'];


// Pasta onde serão salvas
$local = 'Fotos/';

// Tamanho máximo do arquivo
$_UP['tamanho'] = 1024*1024*100; //5mb

//Extensões permitidas
$_UP['extensoes'] = array('png', 'jpg', 'jpeg', 'gif');

//Renomeiar
$_UP['renomeia'] = false;

//Array com os tipos de erros de upload do PHP
$_UP['erros'][0] = 'Não houve erro';
$_UP['erros'][1] = 'O arquivo no upload é maior que o limite do PHP';
$_UP['erros'][2] = 'O arquivo ultrapassa o limite de tamanho especificado no HTML';
$_UP['erros'][3] = 'O upload do arquivo foi feito parcialmente';
$_UP['erros'][4] = 'Não foi feito o upload do arquivo';

//Verifica se houve algum erro com o upload. Se sim, exibe a mensagem do erro
if($_FILES['myimage1']['error'] != 0){

    die("<script type=\"text/javascript\">
            alert('Não foi possivel fazer o upload, erro:\\n". $_UP['erros'][$_FILES['myimage1']['error']]."');
            window.history.back();
        </script>");
    exit; 
    
}

// Verificação da extensão
$extensao = strtolower( end ( explode('.', $_FILES['myimage1']['name']) ) );
if( array_search($extensao, $_UP['extensoes'])=== false )
{		
    echo "
        
        <script type=\"text/javascript\">
            alert(\"A imagem não foi cadastrada extensão inválida.\");
            window.history.back();
        </script>
    ";
}

//Verifica o tamanaho
else if ($_UP['tamanho'] < $_FILES['myimage1']['size'])
{
    echo "
        
        <script type=\"text/javascript\">
            alert(\"Arquivo muito grande.\");
            window.history.back();
        </script>
    ";
}

//O arquivo passou em todas as verificações, hora de tentar move-lo para a pasta foto
			else
			{
				//Primeiro verifica se deve trocar o nome do arquivo
				if( $UP['renomeia'] == true ){
					//Cria um nome baseado no UNIX TIMESTAMP atual e com extensão .jpg
					$nome_final = time().'.jpg';
				}
				else
				{
					//mantem o nome original do arquivo
					$nome_final = $_FILES['myimage1']['name'];
				}
				//Verificar se é possivel mover o arquivo para a pasta escolhida
				if( move_uploaded_file($_FILES["myimage1"]["tmp_name"], "$local".$_FILES["myimage1"]["name"]) )
				{
					//Upload efetuado com sucesso, exibe a mensagem
					$query = "INSERT INTO tabela_imagens VALUES( NULL, $codImovel, '$nome_final', '$local' )";
					$result = mysqli_query($conn, $query) or die ("Erro ao cadastrar imagem no banco de dados");
					echo "
						<script type=\"text/javascript\">
							alert(\"Imagem cadastrada com sucesso.\");
						</script>
					";	
					header("refresh:0.5;pcImovel.php");
				}
				else
				{
					//Upload não efetuado com sucesso, exibe a mensagem
					echo "
						<script type=\"text/javascript\">
							alert(\"Imagem NÃO foi cadastrada com sucesso.\");
							window.history.back();
						</script>
					";
				}
			}
?>
