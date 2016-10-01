<?php
 
//  Incluindo conexão
 include_once (conexao.php);

//  Consultando usuários
$query = "SELECT nome_usuario FROM usuarios";
$sql = mysqli_query($conn,$query);
while ($row = mysqli_fetch_array())

    
?>
