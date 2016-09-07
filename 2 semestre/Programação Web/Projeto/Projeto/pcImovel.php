<!DOCTYPE html>
<html>
  <head>
        <title>Empire Estate - Im�veis</title>
        <meta charset="utf-8">
        <meta name="viewport" content="width=device-width, initial-scale=1">
        <script type="text/javascript" src="http://cdnjs.cloudflare.com/ajax/libs/jquery/2.0.3/jquery.min.js"></script>
        <script type="text/javascript" src="http://netdna.bootstrapcdn.com/bootstrap/3.3.4/js/bootstrap.min.js"></script>
        <script type="text/javascript" src="validacaoForms.js"></script>
        <link href="http://cdnjs.cloudflare.com/ajax/libs/font-awesome/4.3.0/css/font-awesome.min.css" rel="stylesheet" type="text/css">
        <link href="estilos/estiloGeral.css" rel="stylesheet" type="text/css">
        <link href="estilos/style.css" rel="stylesheet" type="text/css">
        <link href="estilos/estiloPainelControle.css" rel="stylesheet" type="text/css">
        <link href="imgs/inicio.png" rel="icon">
        <style type="text/css">

        /*Classe para aparecer somente a 1� parte do formul�rio inicialmente*/
        .invisivel{

            display:none;
        }

        /*Linhas que cont�m 2 campos */
        .doisCamposEsq{
            padding-left: 0;
            margin-left:0;
        }

        .doisCamposDir{
            padding-right: 0;
            margin-right:0;
        }
        
        /*Faz com que os elementos se distanciem mais, pois os inputs est�o com a class form-check-input, que � utilizada para p�r dois inputs na mesma linha*/
        #tela3 .form-group{
            overflow:auto;
        }

        /*Divs das imagens*/
        #div1, #div2, #div3{
            border:1px dashed #337CBB;
            width: 100px;
            height: 100px;
            color:#337CBB;
            font-size:40px;
            text-align:center;
            line-height:100px;
            cursor:pointer;
            margin-left: 50px;
            float:left;
        }

        .botaoImg{
            float:left;
            margin-left:20px;
        }

        #tela4 input[type="file"]{
            display:none;
        }

        </style>
    </head> 
    <body">

        <!-- Importando o Menu Principal  -->
        <?php
            include_once("menuPrincipal.php");
        ?>
        
        

        <div class="section">

            <div class="container">

                <div class="row">
                 <!-- ABAS DO PAINEL DE CONTROLE -->
                    <div class="col-md-12">
                        <h3>
                        &nbsp;&nbsp;&nbsp;<a href="painelControle.php">Painel de Controle</a> &nbsp;&nbsp;&nbsp;-&nbsp;&nbsp;&nbsp; <a href="">Im�veis</a>
                        </h3><br>


                        <div class="tabs-container">
        
                            <!-- ABA 1 - PESQUISAR-->
                            <input type="radio" name="tabs" class="tabs" id="tab1" checked>
                            <label for="tab1">Pesquisar</label>
                            <div class="row aba">

                                <div id="colFormPesquisa" class="col-md-6">

                                    <form>

                                        <h3 style="text-align:center">Pesquisa - Im�vel</h3><br>
                                       <div class="form-group" style="width:420px;margin:0 auto">

                                             <input type="text" class="formPesquisaUsuario" placeholder="Pesquise por c�digo,  t�tulo ou e-mail do cliente" style="width:330px">
                                              <button type="submit" class="btn btn-primary" onClick="validaUsuarioComum()" style="margin:0">
                                            Pesquisar
                                            </button>
                                
                                        </div>
                                        
                                    </form>

                                </div>

                            </div><!-- fim da aba 1 -->
                            
                            <!-- ABA 2 - CADASTRO USU�RIO-->
                            <input type="radio" name="tabs" class="tabs" id="tab2">
                            <label for="tab2">Cadastrar</label>
                            <div class="row aba">
                                <div id="colFormCadastro" class="col-md-4">
                                

                                    <form name="formImovel" role="form" method="POST" action="gravaUsuario.php" onSubmit="return validaUsuarioComum();">

                                    <!-- tela1 - Dados Pesoais-->
                                    <div id="tela1">
                                    <h3 style="text-align:center">Dados Pessoais</h3><br>
                                        <div class="form-group">
                                            <label class="control-label">E-mail</label>
                                            <input name="emailUsuario" class="form-control" type="email" maxlength="60" required>
                                            <button class="btn btn-success" type="button" style="margin-top:5px; margin-bottom:20px;">Pesquisar usu�rio</button>
                                        </div>
                                        <div class="form-group">
                                            <label class="control-label">Nome</label>
                                            <input name="nomeUsuario" class="form-control" type="text" readonly>
                                        </div>
                                    </div><!-- fim tela1 -->

                                    <!-- tela2 - Dados de Negocia��o-->
                                    <div id="tela2" class="invisivel">
                                    <h3 style="text-align:center">Dados de Negocia��o</h3><br>
                                        <div class="form-group">
                                            <label class="control-label">T�tulo do An�ncio</label>
                                            <input name="tituloImovel" class="form-control" type="text" required>
                                        </div>
                                        <div class="form-group">
                                            <label class="control-label">Tipo de Im�vel</label>
                                            <select name="tipoImovel" class="form-control" required>

                                                <option disabled>---------- Residencial ----------</option>
                                                <option selected>Apartamento</option>
                                                <option>Casa</option>
                                                <option>Casa de Praia</option>
                                                <option>Casa de Condom�nio</option>
                                                <option>Comercial</option>
                                                <br>
                                                <option disabled>---------- Comercial ----------</option>
                                                <option>Galp�o/Armaz�m</option>
                                                <option>Loja/Sal�o</option>
                                                <option disabled>---------- Rural ----------</option>
                                                <option>S�tio</option>
                                                <option>Ch�cara</option>
                                                <option>Fazenda</option>

                                            </select>
                                        </div>
                                        <div class="form-group">
                                            <label class="control-label">Tipo de Neg�cio</label>
                                            <select name="tipoNegocio" class="form-control" required>

                                                <option selected> Venda </option>
                                                <option selected>Loca��o </option>
                                                <option selected> Venda e Loca��o </option>
                                                <option selected>Troca</option>
                                                <option selected>Im�vel na planta</option>

                                                
                                            </select>
                                        </div>
                                        <div class="form-group">
                                            <label class="control-label">Valor R$</label>
                                            <input name="valorImovel" class="form-control" type="text" required>
                                        </div>
                                    </div><!-- fim tela2 -->

                                    <!-- tela3 - Localiza��o-->
                                    <div id="tela3" class="invisivel">
                                    <h3 style="text-align:center">Localiza��o</h3><br>

                                        <!-- linha 1 (Cidade,UF) -->
                                        <div class="form-group">
                                            
                                            <div class="col-xs-8 doisCamposEsq">
                                                <label class="control-label">Cidade</label>
                                                <input name="cidadeImovel" class="form-control form-check-input" type="text" required>    
                                            </div>
                                            
                                            <div class="col-xs-4 doisCamposDir">
                                                <label class="control-label">UF</label>
                                                <select name="estadoImovel" class="form-control form-check-input" required>

                                                    <option> ES </option>
                                                    <option>MG </option>
                                                    <option> RJ </option>
                                                    <option selected>SP</option>
                                                
                                                </select>  
                                            </div><!-- fim linha 1 -->
                                            
                                            
                                        </div>

                                        <!-- linha 2 (Logradouro, Endere�o) -->
                                        <div class="form-group">
                                            
                                            <div class="col-xs-4 doisCamposEsq">
                                                
                                                <label class="control-label">Logradouro</label>
                                                <select name="logradouroImovel" class="form-control form-check-input" required>

                                                    <option> Alameda </option>
                                                    <option>Avenida </option>
                                                    <option> Beco </option>
                                                    <option>Pra�a </option>
                                                    <option selected> Rua </option>
                                                    <option>Travessa </option>
                                                
                                                </select>   

                                            </div>
                                            
                                            <div class="col-xs-8 doisCamposDir">
                                                <label class="control-label">Endere�o</label>
                                                <input name="enderecoImovel" class="form-control form-check-input" type="text" required>
                                                
                                            </div>

                                        </div><!-- fim linha 2 -->

                                        <!-- linha 3 (N�mero, Complemento) -->
                                        <div class="form-group">
                                            
                                            <div class="col-xs-4 doisCamposEsq">
                                                
                                                <label class="control-label">N�mero</label>
                                                <input name="numeroImovel" class="form-control form-check-input" type="number" required min="1">
                                                

                                            </div>
                                            
                                            <div class="col-xs-8 doisCamposDir">
                                                <label class="control-label">Complemento</label>
                                                <input name="cidadeImovel" class="form-control form-check-input" type="text" required>
                                                
                                            </div>

                                        </div><!-- fim linha 2 -->

                                        <!-- linha 4 (Bairro) -->
                                        <div class="form-group">
                                            <label class="control-label">Bairro</label>
                                            <input name="bairroImovel" class="form-control" type="text" style="width:100%" required>
                                        </div>
                                    </div><!-- fim tela3 -->

                                    <!-- tela4 - Imagens-->
                                    <div id="tela4" class="invisivel">
                                    <h3 style="text-align:center">Imagens</h3><br>

                                       <!-- Divs Imagens  -->
                                        
                                           <input type="file" name="myimage" id="img1" >
                                            <label for="img1">
                                                <div tabindex="0" onFocus="carregaImg('img1','div1', 'botao1')" name="div1" id="div1">+</div>
                                            </label>

                                            <input type="file" name="myimage2" id="img2" >
                                            <label for="img2">
                                                <div tabindex="0" onFocus="carregaImg('img2','div2','botao2')" name="div2" id="div2">+</div>
                                            </label>
                                            <input type="file" name="myimage3" id="img3" >
                                            <label for="img3">
                                                <div tabindex="0" onFocus="carregaImg('img3','div3','botao3')" name="div3" id="div3">+</div>
                                            </label>
                                           
                                        

                                        <!-- Bot�es de Cancelar -->
                                        <div class="form-group" style="overflow:auto">   
                                            <button type="button" class="btn btn-success botaoImg" style="display:none" id="botao1" onClick="apaga('img1', 'div1','botao1')">Cancelar imagem 1</button>

                                            <button type="button" class="btn btn-success botaoImg" style="display:none" id="botao2" onClick="apaga('img2', 'div2','botao2')">Cancelar imagem 2</
                                            button>
                                            <button type="button" class="btn btn-success botaoImg" style="display:none" id="botao3" onClick="apaga('img3', 'div3','botao3')">Cancelar imagem 3</button>
                                        </div>
                                        

                        

                                    </div><!-- fim tela4 -->



                                    

                                    <!-- Bot�o Voltar e Pr�ximo -->
                                    <button type="button" class="btn btn-primary" onClick="voltar( 'tela1' , 'tela2', 'tela3','tela4' )">
                                    Voltar
                                    </button>
                                    <button type="button" class="btn btn-primary" onClick="proximo( 'tela1' , 'tela2', 'tela3','tela4' , 'colFormCadastro')">
                                    Pr�ximo
                                    </button>

                                    </form>

                                </div>
                            </div>
                
               
                        </div>

                    </div><!-- fim col-md-12 -->
                
                   
                </div><!-- row -->
            
            </div><!-- container -->
        </div><!-- section -->


        <!-- Importando o rodape  -->
       <?php include_once("rodape.php"); ?>

    </body>
</html>
