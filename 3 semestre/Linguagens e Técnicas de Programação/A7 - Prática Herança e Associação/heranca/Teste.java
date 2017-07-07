package heranca;

import associacao.Endereco;
import associacao.Telefone;

public class Teste
{

	public static void main(String[] args)
	{
		//vars
		Aluno aluno = new Aluno();
		Telefone telAluno = new Telefone();
		Endereco endAluno = new Endereco();
				
		//setando Telefone
		telAluno.setTipo("Celular");
		telAluno.setCodigo("11");
		telAluno.setNumero("98765-4321");
		telAluno.setObs("Falar com a secretária");
				
		//setando Endereço
		endAluno.setNome("Rua");
		endAluno.setEstado("SP");
		endAluno.setCidade("Guarulhos");
		endAluno.setBairro("Centro");
		endAluno.setNumero("29A");
		endAluno.setCep("000000-10");
		endAluno.setComplemento("1313");
				
		//setando Pessoa
		aluno.setNome("Alícia");
		aluno.setIdade(25);
		aluno.setRgm("11111111");
		aluno.setNotas(7.5);
		aluno.setCurso("CC");
		aluno.setFaltas(2);
		aluno.setTelefone(telAluno);
		aluno.setEndereco(endAluno);
		
		//O java chama o método toString() de pessoa automaticamente		
		System.out.println(aluno);

	}

}
