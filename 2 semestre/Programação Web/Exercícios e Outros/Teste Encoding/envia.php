<?php
	header('Content-Type: text/html; charset=utf-8');
	$conn = mysqli_connect('localhost','root','1234567');
	//Define o encoding que virá do cliente, para ser usado no mysql
	mysqli_set_charset($conn, 'utf8');
	mysqli_select_db($conn,'empireestate');


$local = "Fotos/";

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

$codImovel = 0;

if(isset($_FILES['myimage1']['name']))
{
	$arquivo1 = $_FILES['myimage1']['name'];
	$extensao = $_FILES['myimage1']['name'];
	$extensao = explode('.', $extensao);
	$extensao = end ( $extensao );
    $extensao = strtolower( $extensao );
    //Se a imagem não foi upada
    if( $_FILES['myimage1']['error'] == 4 )
    {
        $query = "INSERT INTO tabela_imagens VALUES( NULL, $codImovel, 'vazio', 'vazio' )";
    	$result = mysqli_query($conn, $query) or die ("Erro ao cadastrar imagem vazia");
        
    }
    //Caso a imagem tenha sido upada
    //Verifica se houve algum erro, extensão inválida, tamanho inválido
    else if( $_FILES['myimage1']['error'] != 0 || array_search($extensao, $_UP['extensoes'])=== false || $_UP['tamanho'] < $_FILES['myimage1']['size'] )
    {
        $erro = true;
        $query = "INSERT INTO tabela_imagens VALUES( NULL, $codImovel, 'vazio', 'vazio' )";
    	$result = mysqli_query($conn, $query) or die ("Erro ao cadastrar imagem vazia");
       	
        
    }

    //O arquivo passou em todas as verificações, hora de tentar move-lo para a pasta foto
	else
	{
		//Primeiro verifica se deve trocar o nome do arquivo
		if( $_UP['renomeia'] == true ){
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
			$result = mysqli_query($conn, $query) or die ("Erro ao cadastrar imagem no banco de dados<br>" . mysqli_error($conn));
			
		}
		else
		{
			$erro = true;
			$query = "INSERT INTO tabela_imagens VALUES( NULL, $codImovel, 'vazio', 'vazio' )";
			$result = mysqli_query($conn, $query) or die ("Erro ao cadastrar imagem vazia");
			
		}
	}
}
?>