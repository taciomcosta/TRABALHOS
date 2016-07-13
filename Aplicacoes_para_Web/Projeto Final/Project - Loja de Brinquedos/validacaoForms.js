/*NewToy Script*/

function validacao(){
	if((document.form.codigo.value=="") || (document.form.codigo.value.length < 8)){
		alert("Preencha o campo código corretamente");
		document.form.codigo.focus();
		return false;
	}

	if(document.form.descricao.value==""){
		alert("Preencha o campo descrição");
		return false;
	}

	if(document.form.categoria.value==""){
		alert("Preencha o campo categoria");
		return false;
	}

	if(document.form.marca.value==""){
		alert("Preencha o campo marca");
		return false;
	}

	if((document.form.imagem.value=="") || (document.form.imagem.value.indexOf('.com') == -1)){
		alert("Preencha o campo imagem corretamente.");
		return false;
	}

	if(document.form.preco.value==""){
		alert("Preencha o campo preco");
		return false;
	}

	if(document.form.detalhes.value==""){
		alert("Preencha o campo detalhes");
		return false;
	}
}


function caps(){
	var x = document.getElementById("categoria");
	x.value = x.value.toUpperCase();
	
}