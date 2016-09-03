<html><head>
        <title>Empire Estate - Início</title>
        <meta charset="utf-8">
        <meta name="viewport" content="width=device-width, initial-scale=1">
        <script type="text/javascript" src="http://cdnjs.cloudflare.com/ajax/libs/jquery/2.0.3/jquery.min.js"></script>
        <script type="text/javascript" src="http://netdna.bootstrapcdn.com/bootstrap/3.3.4/js/bootstrap.min.js"></script>
        <link href="http://cdnjs.cloudflare.com/ajax/libs/font-awesome/4.3.0/css/font-awesome.min.css" rel="stylesheet" type="text/css">
        <link href="style.css" rel="stylesheet" type="text/css">
        <link href="estilo.css" rel="stylesheet" type="text/css">
        <link href="imgs/inicio.png" rel="icon">
    </head><body>
        <div class="navbar navbar-default navbar-fixed-top">
            <div class="container">
                <div class="navbar-header">
                    <button type="button" class="navbar-toggle" data-toggle="collapse" data-target="#navbar-ex-collapse">
                        <span class="sr-only">Toggle navigation</span>
                        <span class="icon-bar"></span>
                        <span class="icon-bar"></span>
                        <span class="icon-bar"></span>
                    </button>
                    <a class="espacologo logostyle navbar-brand"><img id="logo" height="20" alt="Brand" src="logo/logo2.jpg"></a>
                </div>
                <!-- Formulário de Pesquisa -->
                <form class="navbar-collapse navbar-form navbar-left" role="search" name="pesquisa" id="formPesquisa">
                    <div class="form-group">
                        <input type="text" class="form-control fa fa-search" placeholder="Pesquise por local ou tipo de imóvel">
                        <button type="submit" class="btn btn-default hidden-xs" value="Pesquisar" style="">
                            <img src="imgs/pesquisa.png">
                        </button>
                    </div>
                </form>
                <!--MENU PRINCIPAL-->
                <div class="collapse navbar-collapse" id="navbar-ex-collapse">
                    <ul class="nav navbar-nav navbar-right botoesmenup">
                        <!-- Entrar -->
                        <li class="dropdown">
                            <a href="#" class="dropdown-toggle" data-toggle="dropdown" role="button" aria-expanded="false">Entrar&nbsp;<i class="fa fa-caret-down"></i></a>
                            <ul class="dropdown-menu" role="menu">
                                <li>
                                    <form class="navbar-form navbar-left" role="search" name="login" id="login" method="post">
                                        <div class="form-group entrar">
                                            <h4>Entre ou
                                                <a href="#">Cadastre-se</a>
                                            </h4>
                                            <input type="text" class="form-control" placeholder="Usuário">
                                            <input type="password" class="form-control" placeholder="Senha">
                                        </div>
                                        <input type="submit" class="btn btn-default" value="Entrar">
                                    </form>
                                </li>
                            </ul>
                        </li>
                        <li class="menuPrincipal">
                            <a>Início<br></a>
                        </li>
                        <li class="dropdown menuPrincipal">
                            <a href="#" class="dropdown-toggle" data-toggle="dropdown" role="button" aria-expanded="false">
                            Imóveis&nbsp;<i class="fa fa-caret-down"></i></a>
                            <ul class="dropdown-menu" role="menu">
                                <li>
                                    <a href="#">Residencial</a>
                                </li>
                                <li class="divider"></li>
                                <li>
                                    <a href="#">Comercial</a>
                                </li>
                                <li class="divider"></li>
                                <li>
                                    <a href="#">Rural</a>
                                </li>
                            </ul>
                        </li>
                        <li class="menuPrincipal botoesmenup">
                            <a href="#">Quem Somos<br></a>
                        </li>
                        <li class="menuPrincipal">
                            <a href="#">Contato<br></a>
                        </li>
                    </ul>
                </div>
            </div>
        </div>
        <!-- Carousel -->
        <div id="carousel-example" data-interval="5000" class="carousel slide" data-ride="carousel" style="margin:0 auto">
            <div class="carousel-inner">
                <div class="item active">
                    <img src="imgs/carousel/casa2.jpg">
                    <div class="carousel-caption">
                        <h2>Apartamento Ville de France</h2>
                        <p>Jardins - SP</p>
                    </div>
                </div>
                <div class="item">
                    <img src="imgs/carousel/casa3.jpg">
                    <div class="carousel-caption">
                        <h2>Fazenda Santa Clara</h2>
                        <p>Rio Preto - MG</p>
                    </div>
                </div>
                <div class="item">
                    <img src="imgs/carousel/casa1.jpg">
                    <div class="carousel-caption">
                        <h2>Galpão industrial</h2>
                        <p>Valinhos - SP</p>
                    </div>
                </div>
            </div>
            <a class="left carousel-control" href="#carousel-example" data-slide="prev"><i class="icon-prev  fa fa-angle-left"></i></a>
            <a class="right carousel-control" href="#carousel-example" data-slide="next"><i class="icon-next fa fa-angle-right"></i></a>
        </div>
        <!-- MENU LATERAL -->
        <div class="section" >
            <div class="container ctMenuLateral">
                <div class="row" >
                    <div class="col-md-3">
                        <ul class="nav nav-pills nav-stacked menuLateral">
                            <h4 class="text-center text-primary">Tipos de Imóveis</h4>
                            <li class="active">
                                <a>Residencial</a>
                            </li>
                            <li>
                                <a href="">Apartamento</a>
                                <a href="#">Casas</a>
                                <a href="#">Casas de Condomínio</a>
                                <a href="#">Casas de Condomínio</a>
                            </li>
                            <li class="active">
                                <a>Comercial<br></a>
                            </li>
                            <li>
                                <a href="">Galpão/Armazém</a>
                                <a href="#">Loja/Salão</a>
                            </li>
                            <li class="active">
                                <a>Rural<br></a>
                            </li>
                            <li>
                                <a href="">Sítio</a>
                                <a href="#">Chácara</a>
                                <a href="#">Fazenda</a>
                            </li>
                        </ul>
                    </div>
                
                    <!-- Resultados -->
                    <h2 class="text-justify text-primary" id="destaque">Em Destaque</h2>

                    <?php 
                    for($n=0;$n<=10;$n++) 
                        echo '<div class="col-md-9 resultado">
                    <img src="imgs/carousel/casa1.jpg" class="img-responsive img-thumbnail">
                    <h3 class="text-justify text-primary">A title</h3>
                    <p class="text-justify">Lorem ipsum dolor sit amet, consectetuer adipiscing elit. Aenean commodo
                        ligula eget dolor. Aenean massa. Cum sociis natoque penatibus et magnis
                        dis parturient montes, nascetur ridiculus mus. Donec quam felis, ultricies
                        nec, pellentesque eu, pretium quis, sem. Nulla consequat massa quis enim.
                        Donec pede justo, fringilla vel, aliquet nec, vulputate eget, arcu. In
                        enim justo, rhoncus ut, imperdiet a, venenatis vitae, justo. Nullam dictum
                        felis eu pede mollis pretium. Integer tincidunt. Cras dapibus. Vivamus
                        elementum semper nisi. Aenean vulputate eleifend tellus. Aenean leo ligula,
                        porttitor eu, consequat vitae, eleifend ac, enim. Aliquam lorem ante, dapibus
                        in, viverra quis, feugiat a, tellus. Phasellus viverra nulla ut metus varius
                        laoreet.</p>
                </div>'; //resultado 
                ?>
                
                </div><!-- row -->
            
            </div><!-- container -->
            </div><!-- section -->

        <!-- RODAPÉ -->
        <footer class="section rodape">
            <div class="container">
                <div class="row">
                    <div class="col-sm-6">
                        <h3>
                            <i class="fa fa-fw fa-location-arrow"></i>Visite a Empire State!</h3>
                        <p>&nbsp; &nbsp; &nbsp; &nbsp; &nbsp;&nbsp;&nbsp; Rua Cesário Galeno, n° 353,
                            <br>&nbsp; &nbsp; &nbsp; &nbsp; &nbsp; &nbsp; Próximo ao Metrô Carrão - SP
                            <br>&nbsp; &nbsp; &nbsp; &nbsp; &nbsp; &nbsp; Tel: (11) 1111-1111</p>
                    </div>
                    <div class="col-sm-6">
                        <p class="text-info text-right">
                            <br>
                            <br>
                        </p>
                        <div class="row">
                            <div class="col-md-12 hidden-lg hidden-md hidden-sm text-left">
                                <a href="#"><i class="fa fa-2x fa-fw fa-instagram text-inverse"></i></a>
                                <a href="#"><i class="fa fa-2x fa-fw fa-twitter text-inverse"></i></a>
                                <a href="#"><i class="fa fa-2x fa-fw fa-facebook text-inverse"></i></a>
                                <a href="#"><i class="fa fa-2x fa-fw fa-github text-inverse"></i></a>
                            </div>
                        </div>
                        <div class="row">
                            <div class="col-md-12 hidden-xs text-right">
                                <a href="#"><i class="fa fa-2x fa-fw fa-instagram text-inverse"></i></a>
                                <a href="#"><i class="fa fa-2x fa-fw fa-twitter text-inverse"></i></a>
                                <a href="#"><i class="fa fa-2x fa-fw fa-facebook text-inverse"></i></a>
                                <a href="#"><i class="fa fa-2x fa-fw fa-github text-inverse"></i></a>
                            </div>
                        </div>
                    </div>
                </div>
            </div>
        </footer>
    

</body></html>