// FunÁıes de validaÁ„o de formul·rio

// Valida Usu·rio Comum (cadastroUsuario, pcUsuario)
    function validaUsuarioComum() {

        if (document.getElementById('senha').value == document.getElementById('confirmesenha').value) {

            return true;
        }
        else {
            alert('Senhas nùo conferem!');
            return false;
        }

    }

// valida Pesquisa de ImÛvel
    function validaPesquisaImovel()
    {
        if(document.getElementById('pesquisaImovel').value == ''){
            alert('Por favor, preencha todos os campos');
            return false;
        }
        else
        {
            return true;
        }
    }

// As funÁıes abaixo validam as telas de cadastro de imÛvel
function validaImovel1()
{
    if( document.getElementById('emailUsuario').value == '' ||  document.getElementById('nomeUsuario').value == '' )
    {
        alert('Por favor, preencha todos os campos');
        return false
    }
    else
        return true;
        
}

function validaImovel2()
{
    if( document.getElementById('tituloImovel').value == '' || document.getElementById('valorImovel').value == '')
    {
        alert('Por favor, preencha todos os campos');
        return false
    }
    else
        return true;
        
}

function validaImovel3()
{
    if( document.getElementById('cidadeImovel').value == '' || document.getElementById('enderecoImovel').value == '' || document.getElementById('numeroImovel').value == '' || document.getElementById('complementoImovel').value == '' || document.getElementById('bairroImovel').value == '')
    {
        alert('Por favor, preencha todos os campos');
        return false;
    }
    else
        return true;
        
}

function validaImovel4()
{
    if( document.getElementById('areaTotalImovel').value == '' || document.getElementById('areaUtilImovel').value == '' || document.getElementById('dormitoriosImovel').value == '' || document.getElementById('banheirosImovel').value == '' || document.getElementById('garagemImovel').value == '' || document.getElementById('descricaoImovel').value == '')
    {
        alert('Por favor, preencha todos os campos');
        return false;
    }
    else
        return true;
        
}

// Valida Cadastro de tipo de imÛvel
function validaTipoImovel()
{
    if(document.getElementById('subcategoria').value == '')
    {
        alert('Por favor, preenche todos os campos');
        return false;
    }
    else
        return true;
}


// FunÁıes para abrir e fechar os modals
function fechar() {

    document.getElementById("modal").style.display = "none";

}


function abrir() {

    if (document.referrer == "http://localhost/Projeto/enviaContato.php")
        document.getElementById("modal").style.display = "block";

}


//FunÁıes dos botıes VOLTAR E PR”XIMO do Cadastro de ImÛvel
function proximo(e1, e2, e3, e4, e5, col) {

    var display1 = document.getElementById(e1).style.display;
    var display2 = document.getElementById(e2).style.display;
    var display3 = document.getElementById(e3).style.display;
    var display4 = document.getElementById(e4).style.display;
    
    // Display da tela1 È undefined :/
    if (display1 != "none" && validaImovel1()) 
    {
        document.getElementById(e1).style.display = "none";
        document.getElementById(e2).style.display = "block";
    }
    else if (display2 != "none" && validaImovel2()) 
    {
        document.getElementById(e2).style.display = "none";
        document.getElementById(e3).style.display = "block";
    }
    else if (display3 != "none" && validaImovel3()) 
    {
        document.getElementById(e3).style.display = "none";
        document.getElementById(e4).style.display = "block";
        
    }
    else if (display4 != "none" && validaImovel4()) 
    {
        document.getElementById(e4).style.display = "none";
        document.getElementById(e5).style.display = "block";
        document.formImovel.btCadastrar.className = "btn btn-primary";
        document.getElementById(col).className = "col-md-6";
    }



}

function voltar(e1, e2, e3, e4, e5, col) {

    var display1 = document.getElementById(e1).style.display;
    var display2 = document.getElementById(e2).style.display;
    var display3 = document.getElementById(e3).style.display;
    var display4 = document.getElementById(e4).style.display;
    var display5 = document.getElementById(e5).style.display;


    
    if (display1 != "none") 
    {
        document.getElementById(e5).style.display = "none";
        document.getElementById(e4).style.display = "none";
        document.getElementById(e3).style.display = "none";
        document.getElementById(e2).style.display = "none";
        document.getElementById(e1).style.display = "block";
    }
    else if (display5 != "none") 
    {
        document.getElementById(col).className = "col-md-4";
        document.getElementById(e5).style.display = "none";
        document.getElementById(e4).style.display = "block";
        document.getElementById(e3).style.display = "none";
        document.getElementById(e2).style.display = "none";
        document.getElementById(e1).style.display = "none";
        document.formImovel.btCadastrar.className = "btn btn-primary disabled";
        
    }
    else if (display4 != "none") 
    {
        document.getElementById(e5).style.display = "none";
        document.getElementById(e4).style.display = "none";
        document.getElementById(e3).style.display = "block";
        document.getElementById(e2).style.display = "none";
        document.getElementById(e1).style.display = "none";      
    }
    else if (display3 != "none") 
    {
        document.getElementById(e5).style.display = "none";
        document.getElementById(e4).style.display = "none";
        document.getElementById(e3).style.display = "none";
        document.getElementById(e2).style.display = "block";
        document.getElementById(e1).style.display = "none";
                
    }
    else if (display2 != "none") 
    {
        document.getElementById(e5).style.display = "none";
        document.getElementById(e4).style.display = "none";
        document.getElementById(e3).style.display = "none";
        document.getElementById(e2).style.display = "none";
        document.getElementById(e1).style.display = "block";
    }

}


// FunÁıes de carregar e excluir imagens das divs
function carregaImg(img, div, botao) {

    if (document.getElementById(img).value != '') {
        document.getElementById(div).innerText = "OK!";
        document.getElementById(botao).style.display = "block";

    }
}

function apaga(img, div, botao) {
    document.getElementById(img).value = '';
    document.getElementById(div).innerText = "+";
    document.getElementById(botao).style.display = "none";


}


function enviar()
{
   
}