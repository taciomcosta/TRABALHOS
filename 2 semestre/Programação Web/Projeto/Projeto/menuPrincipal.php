<div class="navbar navbar-default navbar-fixed-top">

            <div class="container">

                <div class="navbar-header">

                    <button type="button" class="navbar-toggle" data-toggle="collapse" data-target="#navbar-ex-collapse">
                        <span class="sr-only">Toggle navigation</span>
                        <span class="icon-bar"></span>
                        <span class="icon-bar"></span>
                        <span class="icon-bar"></span>
                    </button>
                    <a class="espacologo logostyle navbar-brand" href="index.php"><img id="logo" height="20" alt="Brand" src="logo/logo2.jpg"></a>

                </div><!-- navbar-header -->

                <!-- Formulário de Pesquisa -->
                <form class="navbar-collapse navbar-form navbar-left" role="search" name="pesquisa" id="formPesquisa" action="http://www.google.com">

                    <div class="form-group">

                        <input type="text" class="form-control fa fa-search" placeholder="Pesquise por local, tipo ou código do imóvel">
                        <button type="submit" class="btn btn-default hidden-xs" value="Pesquisar">
                            <img src="imgs/lupa.png">
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
                                    <form class="navbar-form navbar-left" role="search" name="login" id="login" method="post" action="verificaLogin.php">
                                        <div class="form-group entrar">
                                            <h4>Entre ou
                                                <a href="cadastroUsuario.php">Cadastre-se</a>
                                            </h4>
                                            <input type="text" class="form-control" placeholder="Email">
                                            <input type="password" class="form-control" placeholder="Senha">
                                        </div>
                                        <input type="submit" class="btn btn-default" value="Entrar">
                                    </form>
                                </li>
                            </ul>
                        </li>
                        <li class="menuPrincipal">
                            <a href="index.php">Início<br></a>
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
                            <a href="quemSomos.php">Quem Somos<br></a>
                        </li>
                        <li class="menuPrincipal">
                            <a href="contato.php">Contato<br></a>
                        </li>
                    </ul>

                </div>

        </div><!-- container -->

</div><!-- navbar principal -->
