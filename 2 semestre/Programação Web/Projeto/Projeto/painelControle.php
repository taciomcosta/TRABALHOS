<!DOCTYPE html>
<html>
  head>
        <title>Empire Estate - Painel de Controle</title>
        <meta charset="utf-8">
        <meta name="viewport" content="width=device-width, initial-scale=1">
        <script type="text/javascript" src="http://cdnjs.cloudflare.com/ajax/libs/jquery/2.0.3/jquery.min.js"></script>
        <script type="text/javascript" src="http://netdna.bootstrapcdn.com/bootstrap/3.3.4/js/bootstrap.min.js"></script>
        <link href="http://cdnjs.cloudflare.com/ajax/libs/font-awesome/4.3.0/css/font-awesome.min.css" rel="stylesheet" type="text/css">
        <link href="estilos/estiloGeral.css" rel="stylesheet" type="text/css">
        <link href="estilos/style.css" rel="stylesheet" type="text/css">
        <link href="estilos/estiloPainelControle.css" rel="stylesheet" type="text/css">
        <link href="imgs/inicio.png" rel="icon">
    </head> 
  <body>
    <!-- Importando o Menu Principal-->
    <?php include_once( "menuPrincipal.php"); ?>

    <!-- Se��o das op��es -->

    <div class="section">
      <div class="container">
        <div class="row" ">
          <!-- ABAS DO PAINEL DE CONTROLE -->
          <div class="col-md-12">
            <h3>&nbsp;&nbsp;&nbsp;
              <a href="painelControle.php">Painel de Controle</a>
            </h3>
            <br><br>
          </div><!-- fim col-md-12 -->
        </div><!-- row -->

        <!-- style para o rodap� preencer o final da p�gina -->
        <div class="row" style="height:400px;">

          <a href="pcImoveis.php">
          <div class="col-md-4">
            <img src="imgs/casa.png" class="center-block img-circle img-responsive">
            <h3 class="text-center"><a href="#" id="imoveis">Im�veis</a></h3>
          </div>
          </a>
          
          <a href="pcUsuario.php">
          <div class="col-md-4">
            <img src="imgs/usuario.png" class="center-block img-circle img-responsive">
            <h3 class="text-center"><a href="pcUsuario.php">Usu�rios</a></h3>
          </div>
          </a>

          <a href="">
          <div class="col-md-4">
            <img src="imgs/sair.png" class="center-block img-circle img-responsive">
            <h3 class="text-center"><a href="#">Sair</a></h3>
          </div>
          </a>

        </div><!-- row -->
       
      </div><!-- container -->

    </div><!-- section -->

    <!-- Importando o rodape -->
    <?php include_once( "rodape.php"); ?>

  
  

  </body>
</html>