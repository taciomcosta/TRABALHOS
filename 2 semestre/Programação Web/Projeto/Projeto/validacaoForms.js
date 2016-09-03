function validaUsuarioComum(){
	
	if( document.formUsuarioComum.senha.value != document.formUsuarioComum.confirmeSenha.value )
	{
		alert('Senhas não conferem!');
		return false;
	}
	else
	{
		return true;
	}
	
}