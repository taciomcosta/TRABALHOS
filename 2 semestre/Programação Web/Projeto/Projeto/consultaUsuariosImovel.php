<?php
/*
FUN��O:
    Esta p�gina recebe dados da p�gina pcImovel para verificar se o usu�rio est� cadastro e retorna os dados do usu�rio para a mesma 
    p�gina (pcIm�vel) 
*/  

//  Incluindo conex�o
 include_once ("conexao.php");


//  Consultando usu�rios
$email = $_POST['email'];
$query = "SELECT * FROM usuarios WHERE email_usuario = '$email' ";
$result = mysqli_query($conn, $query);
if($row = mysqli_fetch_array($result))
{
    $nomeUsuario = $row['nome_usuario'];
    $codUsuario = $row['cod_usuario'];
?>
    <html>
    <head>
    
    
    
    </head>
    <body onload="document.enviarEmail.submit()">
    <form name="enviarEmail" action="pcImovel.php" method="POST">
        <input type="hidden" name="codigo" id="email" value="<?php echo $codUsuario ?>" />
        <input type="hidden" name="email" id="email" value="<?php echo $email ?>" />
        <input type="hidden" name="nome" id="email" value="<?php echo $nomeUsuario ?>" />
    </form>
    </body>
    </html>
<?php
}
else
{
?>

    <script type="text/javascript">
        window.history.back();
        alert('Usu�rio n�o cadastrado');
    </script>

<?php
}

    
?>
