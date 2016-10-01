<?php
    // Pegando dados do usuário para preencher no cadastro de imóvel *ver consultaUsuarioImovel.php
        $codigo = $_POST['codigo'];
        $email = $_POST['email'];
        $nome = $_POST['nome'];

    // Obtendo tipos de imóveis do BD
        include_once("conexao.php");
        $queryRes = "SELECT * FROM tipoImovel WHERE categoria_tipoImovel = 'Residencial' ";
        $queryCom = "SELECT * FROM tipoImovel WHERE categoria_tipoImovel = 'Comercial' ";
        $queryRur = "SELECT * FROM tipoImovel WHERE categoria_tipoImovel = 'Rural' ";

        $resultResidencial = mysqli_query($conn, $queryRes);
        $resultComercial = mysqli_query($conn, $queryCom);
        $resultRural = mysqli_query($conn, $queryRur);
    
?>

<!DOCTYPE html>
<html>
    <head>
        <title>Empire Estate - Imóveis</title>
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

            #pesquisarUsuario{
                margin-top:5px; 
                margin-bottom:20px;
            }

            /*Classe para aparecer somente a 1° parte do formulário inicialmente*/
            .invisivel{

                display:none;
            }

            /*Linhas que contém 2 campos */
            .doisCamposEsq{
                padding-left: 0;
                margin-left:0;
            }

            .doisCamposDir{
                padding-right: 0;
                margin-right:0;
            }
            
            /*Faz com que os elementos se distanciem mais, pois os inputs estão com a class form-check-input, que é utilizada para pôr dois inputs na mesma linha*/
            #tela3 .form-group, #tela4 .form-group{
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

            #tela5 input[type="file"]{
                display:none;
            }

        </style>
    </head> 
    <body>

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
                        &nbsp;&nbsp;&nbsp;<a href="painelControle.php">Painel de Controle</a> &nbsp;&nbsp;&nbsp;-&nbsp;&nbsp;&nbsp; <a href="">Imóveis</a>
                        </h3><br>


                        <div class="tabs-container">
        
                            <!-- ABA 1 - PESQUISAR-->
                            <input type="radio" name="tabs" class="tabs" id="tab1">
                            <label for="tab1">Pesquisar</label>
                            <div class="row aba">

                                <div id="colFormPesquisa" class="col-md-6">

                                    <form>

                                        <h3 style="text-align:center">Pesquisa - Imóvel</h3><br>
                                       <div class="form-group" style="width:420px;margin:0 auto">

                                            <input type="text" id="pesquisaImovel" class="formPesquisaUsuario" placeholder="Pesquise por código,  título ou e-mail do cliente" style="width:330px">
                                            <button type="submit" class="btn btn-primary" onClick="return validaPesquisaImovel();" style="margin:0">Pesquisar</button>
                                
                                        </div>
                                        
                                    </form>

                                </div>

                            </div><!-- fim da aba 1 -->
                            
                            <!-- ABA 2 - CADASTRO USUÁRIO-->
                            <input type="radio" name="tabs" class="tabs" id="tab2" checked>
                            <label for="tab2">Cadastrar imóvel</label>
                            <div class="row aba">
                                <div id="colFormCadastro" class="col-md-4">
                                

                                    <form name="formPesquisaUsuario" role="form" method="POST" action="consultaUsuariosImovel.php">

                                        <!-- tela1 - Dados Pesoais-->
                                        <div id="tela1" >
                                            <h3 style="text-align:center">Dados Pessoais</h3><br>
                                            <div class="form-group">
                                                <label class="control-label">E-mail</label>
                                                <input name="email" id="emailUsuario" class="form-control" type="email" maxlength="60" value='<?php echo "$email" ?>' required>
                                                <button class="btn btn-success" id="pesquisarUsuario" type="submit">Pesquisar usuário</button>
                                        </div>
                                    </form>
                                    <form name="formImovel" role="form" method="POST" action="gravaImovel.php" enctype="multipart/form-data">
                                            <!--Campo oculto que será utilizado para preencher o codUsuario no cadastro de imóveis-->
                                            <input type="hidden" name="codUsuario" value="<?php echo $codigo ?>" />
                                            <div class="form-group">
                                                <label class="control-label">Nome</label>
                                                <input name="nome" id="nomeUsuario" class="form-control" type="text" value='<?php echo "$nome" ?>' placeholder="Preenchimento automático" readonly>
                                            </div>
                                        </div><!-- fim tela1 -->

                                    


                                    
                                        <!-- tela2 - Dados de Negociação-->
                                        <div id="tela2" class="invisivel" style="display:none">
                                            <h3 style="text-align:center">Dados de Negociação</h3><br>
                                            <div class="form-group">
                                                <label class="control-label">Título do Anúncio</label>
                                                <input name="tituloImovel" id="tituloImovel" class="form-control" type="text" maxlength="80" required>
                                            </div>
                                            <div class="form-group">
                                                <label class="control-label">Tipo de Imóvel</label>
                                                <select name="tipoImovel" class="form-control" required>

                                                    <option disabled>---------- Residencial ----------</option>
                                                    <!-- Exibindo os tipos de imóveisdo BD-->
                                                    <?php 
                                                        while( $row = mysqli_fetch_array($resultResidencial) )
                                                        {
                                                            $option = $row['nome_tipoImovel'];
                                                            $option = strtoupper(substr($option,0,1)) . substr($option,1) ;
                                                            echo "<option>$option</option>";
                                                        }
                                                            
                                                    ?>
                                                    <option disabled>---------- Comercial ----------</option>
                                                    <?php 
                                                        while( $row = mysqli_fetch_array($resultComercial) )
                                                            $option = $row['nome_tipoImovel'];
                                                            $option = strtoupper(substr($option,0,1)) . substr($option,1) ;
                                                            echo "<option>$option</option>";
                                                    ?>
                                                    <option disabled>---------- Rural ----------</option>
                                                    <?php 
                                                        while( $row = mysqli_fetch_array($resultRural) )
                                                            $option = $row['nome_tipoImovel'];
                                                            $option = strtoupper(substr($option,0,1)) . substr($option,1) ;
                                                            echo "<option>$option</option>";
                                                    ?>

                                                </select>
                                            </div>
                                            <div class="form-group">
                                                <label class="control-label">Tipo de Negócio</label>
                                                <select name="tipoNegocio" class="form-control" required>

                                                    <option selected> Venda </option>
                                                    <option selected>Locação </option>
                                                    <option selected> Venda e Locação </option>
                                                    <option selected>Troca</option>
                                                    <option selected>Imóvel na planta</option>

                                                    
                                                </select>
                                            </div>
                                            <div class="form-group">
                                                <label class="control-label">Valor R$</label>
                                                <input name="valorImovel" id="valorImovel" class="form-control" type="text" maxlength="20" required>
                                            </div>
                                        </div><!-- fim tela2 -->

                                        <!-- tela3 - Localização-->
                                        <div id="tela3" class="invisivel" style="display:none">
                                            <h3 style="text-align:center">Localização</h3><br>

                                            <!-- linha 1 (Cidade,UF) -->
                                            <div class="form-group">
                                                
                                                <div class="col-xs-8 doisCamposEsq">
                                                    <label class="control-label">Cidade</label>
                                                    <input name="cidadeImovel" id="cidadeImovel" class="form-control form-check-input" type="text" maxlength="40" required>    
                                                </div>
                                                
                                                <div class="col-xs-4 doisCamposDir">
                                                    <label class="control-label">UF</label>
                                                    <select name="ufImovel" class="form-control form-check-input" required>

                                                        <option> ES </option>
                                                        <option>MG </option>
                                                        <option> RJ </option>
                                                        <option selected>SP</option>
                                                    
                                                    </select>  
                                                </div>
                                                
                                                
                                            </div><!-- fim linha 1 -->

                                            <!-- linha 2 (Logradouro, Endereço) -->
                                            <div class="form-group">
                                                
                                                <div class="col-xs-4 doisCamposEsq">
                                                    
                                                    <label class="control-label">Logradouro</label>
                                                    <select name="logradouroImovel" class="form-control form-check-input" required>

                                                        <option> Alameda </option>
                                                        <option>Avenida </option>
                                                        <option> Beco </option>
                                                        <option>Praça </option>
                                                        <option selected> Rua </option>
                                                        <option>Travessa </option>
                                                    
                                                    </select>   

                                                </div>
                                                
                                                <div class="col-xs-8 doisCamposDir">
                                                    <label class="control-label">Endereço</label>
                                                    <input name="enderecoImovel" id="enderecoImovel" class="form-control form-check-input" type="text" maxlength="80" required>
                                                    
                                                </div>

                                            </div><!-- fim linha 2 -->

                                            <!-- linha 3 (Número, Complemento) -->
                                            <div class="form-group">
                                                
                                                <div class="col-xs-4 doisCamposEsq">
                                                    
                                                    <label class="control-label">Número</label>
                                                    <input name="numeroImovel" id="numeroImovel" class="form-control form-check-input" type="number" required min="1">
                                                    

                                                </div>
                                                
                                                <div class="col-xs-8 doisCamposDir">
                                                    <label class="control-label">Complemento</label>
                                                    <input name="complementoImovel" id="complementoImovel" class="form-control form-check-input" type="text" maxlength="50" required>
                                                    
                                                </div>

                                            </div><!-- fim linha 3 -->

                                            <!-- linha 4 (Bairro) -->
                                            <div class="form-group">
                                                <label class="control-label">Bairro</label>
                                                <input name="bairroImovel" id="bairroImovel" class="form-control" type="text" style="width:100%" maxlength="50" required>
                                            </div>
                                        </div><!-- fim tela3 -->

                                        <!-- tela4 - Dados do Imóvel-->
                                        <div id="tela4" class="invisivel" style="display:none">
                                            <h3 style="text-align:center">Dados do Imóvel</h3><br>

                                            <!-- Área Total, Útil -->
                                            <div class="form-group">
                                                
                                                <div class="col-xs-6 doisCamposEsq">
                                                    <label class="control-label">Área Total</label>
                                                    <input name="areaTotalImovel" id="areaTotalImovel" class="form-control form-check-input" type="text" placeholder="m²" maxlength="10" required>    
                                                </div>
                                                
                                                <div class="col-xs-6 doisCamposDir">
                                                    <label class="control-label">Área Útil</label>
                                                    <input name="areaUtilImovel" id="areaUtilImovel" type="text" class="form-control form-check-input" placeholder="m²" maxlength="10" required>

                                                        
                                                </div>                                            
                                                
                                            </div><!-- fim área total, útil -->

                                            <!-- Dormitórios, Banheiros e Garagens -->
                                            <div class="form-group">
                                                
                                                <div class="col-xs-4 doisCamposEsq">
                                                    <label class="control-label">Dormitórios</label>
                                                    <input name="dormitoriosImovel" id="dormitoriosImovel" class="form-control form-check-input" type="number" min="1" required>    
                                                </div>
                                                
                                                <div class="col-xs-4">
                                                    <label class="control-label">Banheiros</label>
                                                    <input name="banheirosImovel" id="banheirosImovel" type="number" class="form-control form-check-input" min="1" required>     
                                                </div>

                                                <div class="col-xs-4 doisCamposDir">
                                                    <label class="control-label">Garagem</label>
                                                    <input name="garagemImovel" id="garagemImovel" type="number" class="form-control form-check-input" min="1" required>     
                                                </div>
                                                
                                                
                                            </div><!-- fim dormitórios, banheiros e garagens -->

                                            <!-- Descrição, Situação -->
                                            <div class="form-group">
                                                
                                                
                                                    <label class="control-label">Descrição</label>
                                                    <textarea name="descricaoImovel" id="descricaoImovel" class="form-control form-check-input" placeholder="Liste itens ou informações adicionais. Máximo de 500 caracteres" maxlength="500" required></textarea>    
                                                
                                            </div><!-- fim descrição,situação -->


                                        </div><!-- fim tela4 -->

                                        <!-- tela5 - Imagens-->
                                        <div id="tela5" class="invisivel" style="display:none">
                                            <h3 style="text-align:center">Imagens</h3><br>

                                        <!-- Divs Imagens  -->
                                            
                                            <input type="file" name="myimage1" id="img1" >
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
                                            
                                            

                                            <!-- Botões de Cancelar -->
                                            <div class="form-group" style="overflow:auto">   
                                                <button type="button" class="btn btn-success botaoImg" style="display:none" id="botao1" onClick="apaga('img1', 'div1','botao1')">Cancelar imagem 1</button>

                                                <button type="button" class="btn btn-success botaoImg" style="display:none" id="botao2" onClick="apaga('img2', 'div2','botao2')">Cancelar imagem 2</button>
                                                <button type="button" class="btn btn-success botaoImg" style="display:none" id="botao3" onClick="apaga('img3', 'div3','botao3')">Cancelar imagem 3</button>
                                            </div>
                                            
                            

                                        </div><!-- fim tela5 -->



                                        

                                        <!-- Botão Voltar, Próximo  e Cadastrar-->
                                        <button type="button" class="btn btn-primary" onClick="voltar( 'tela1' , 'tela2', 'tela3', 'tela4', 'tela5', 'colFormCadastro' )">
                                        Voltar
                                        </button>
                                        <button type="button" class="btn btn-primary" onClick="proximo( 'tela1' , 'tela2', 'tela3', 'tela4', 'tela5', 'colFormCadastro' )">
                                        Próximo
                                        </button>
                                        <button type="submit" name="btCadastrar" id="btCadastrar" class="btn btn-primary disabled">
                                        Cadastrar
                                        </button>

                                    </form>

                                </div>
                            </div><!--fim aba 2-->

                            <!-- ABA 3 - CADASTRO TIPO IMÓVEL-->
                            <input type="radio" name="tabs" class="tabs" id="tab3">
                            <label for="tab3" name="lbltb3" id="lbltab3">Cadastrar Tipo de Imóvel</label>
                            <div class="row aba">

                                <div id="colFormCadastroTipoImovel" class="col-md-4">

                                    <form name="cadastroTipoImovel" method="POST" action="gravaTipoImovel.php">

                                        <h3 style="text-align:center">Cadastro - Tipo de Imóvel</h3><br>
                                            
                                        <div class="form-group">
                                            <label class="control-label">Subcategoria</label>
                                            <input name="subcategoria" id="subcategoria" class="form-control" type="text" placeholder="Ex: Casa, Apartamento, Fazenda, Sítio..." maxlength="30" required>
                                        </div>

                                        <div class="form-group">
                                            <div class="radio">
                                                <label class="radio-inline" for="residencial">
                                                <input name="categoriaTipoImovel" id="residencial" type="radio" value="Residencial" checked>
                                                Residencial
                                                </label>

                                                <label class="radio-inline" for="comercial">
                                                <input name="categoriaTipoImovel" id="comercial"type="radio" value="Comercial">
                                                Comercial
                                                </label>

                                                <label class="radio-inline" for="rural">
                                                <input name="categoriaTipoImovel" id="rural" type="radio" value="Rural">
                                                Rural
                                                </label>
                                            </div>
                                        </div>

                                        <div class="form-group">
                                            <button class="btn btn-primary" id="pesquisarUsuario" type="submit" onClick="return validaTipoImovel();">Cadastrar</button>
                                        </div>
                                        
                                    </form>

                                </div>

                            </div><!-- fim da aba 3 -->
                
               
                        </div>

                    </div><!-- fim col-md-12 -->
                
                   
                </div><!-- row -->
            
            </div><!-- container -->
        </div><!-- section -->


        <!-- Importando o rodape  -->
       <?php include_once("rodape.php"); ?>

    </body>
</html>
