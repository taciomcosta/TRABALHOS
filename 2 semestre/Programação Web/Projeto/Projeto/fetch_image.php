<?php

$host = 'localhost';
$user = 'root';
$pass = '1234567';
$bd = 'empireEstate';

$conn = mysqli_connect($host, $user, $pass, $bd); //connect to database

$select_path="select * from tabela_imagens"; //providing image id

$var=mysqli_query($conn, $select_path);

// mysqli_fetch_array --> retorna uma array de 
while($row=mysqli_fetch_array($var))
{
    $image_name=$row["img_nome"];//image name 
    $image_path=$row["img_caminho"];//image path
    ?>d
<img src="<?php echo $image_path; ?><?php echo $image_name; ?>" alt="<?php echo $image_name; ?>" height="500" width="900">


<br><br>

<?php
}


?>


