<?php
 
//  Incluindo conex�o
 include_once (conexao.php);

//  Consultando usu�rios
$query = "SELECT nome_usuario FROM usuarios";
$sql = mysqli_query($conn,$query);
while ($row = mysqli_fetch_array())

    
?>
