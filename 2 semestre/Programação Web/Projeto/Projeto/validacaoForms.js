// Fun��es de valida��o de formul�rio
function validaUsuarioComum(){
	
	if( document.getElementById('senha').value == document.getElementById('confirmesenha').value )
	{
		
		return true;
	}
	else
	{
		alert('Senhas n�o conferem!');
		return false;
	}
	
}


// Fun��es para abrir e fechar os modals
    function fechar(){

                document.getElementById("modal").style.display = "none";

    }


    function abrir(){

    	if( document.referrer == "http://localhost/Projeto/enviaContato.php")
    		document.getElementById("modal").style.display = "block";

    }

//Fun��es do formul�rio de Cadastro de Im�vel
    function proximo(e1, e2, e3, e4, col)
    {
        
        var display1 = document.getElementById(e1).style.display;
        var display2 = document.getElementById(e2).style.display;
        var display3 = document.getElementById(e3).style.display;
        var display4 = document.getElementById(e4).style.display;
        

        // Display da tela1 � undefined :/
        if( display1 != "none" )
        {
            document.getElementById(e1).style.display = "none";
            document.getElementById(e2).style.display = "block";
            

        }
        else if ( display2 != "none" )
        {
            document.getElementById(e2).style.display = "none";
            document.getElementById(e3).style.display = "block";

        }
        else if ( display3 != "none" )
        {
            document.getElementById(e3).style.display = "none";
            document.getElementById(e4).style.display = "block";
            document.getElementById(col).className = "col-md-6";

        }
        
        

    }

    function voltar(e1, e2, e3, e4)
    {
        
        var display1 = document.getElementById(e1).style.display;
        var display2 = document.getElementById(e2).style.display;
        var display3 = document.getElementById(e3).style.display;
        var display4 = document.getElementById(e4).style.display;
        

        // Display da tela1 � undefined :/
        if( display4 != "none" )
        {
            document.getElementById(e4).style.display = "none";
            document.getElementById(e3).style.display = "block"; 
        }
        else if( display3 != "none" )
        {
            document.getElementById(e3).style.display = "none";
            document.getElementById(e2).style.display = "block";
            

        }
        else if ( display2 != "none" )
        {
            document.getElementById(e2).style.display = "none";
            document.getElementById(e1).style.display = "block";

        } 

    }


// Fun��es de carregar e excluir imagens das divs
    function carregaImg(img, div, botao)
            {   
                
                    if(document.getElementById(img).value != '' )
                    {
                        document.getElementById(div).innerText = "OK!";
                        document.getElementById(botao).style.display = "block";

                    }
            }

    function apaga(img, div, botao)
    {
        document.getElementById(img).value = '' ;
        document.getElementById(div).innerText = "+";
        document.getElementById(botao).style.display = "none";


    }