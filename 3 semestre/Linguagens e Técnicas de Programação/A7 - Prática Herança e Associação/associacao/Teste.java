//Associação - Relacionamento "Tem um"
/*
 * Pessoa tem um Endereço
 * Pessoa tem um Telefone
 * 
 * */

package associacao;

public class Teste 
{
	public static void main(String[] args)
	{
		//vars
		Pessoa pessoa = new Pessoa();
		Telefone telPessoa = new Telefone();
		Endereco endPessoa = new Endereco();
		
		//setando Telefone
		telPessoa.setTipo("Celular");
		telPessoa.setCodigo("11");
		telPessoa.setNumero("98765-4321");
		telPessoa.setObs("Falar com a secretária");
		
		//setando Endereço
		endPessoa.setNome("Rua");
		endPessoa.setEstado("SP");
		endPessoa.setCidade("Guarulhos");
		endPessoa.setBairro("Centro");
		endPessoa.setNumero("29A");
		endPessoa.setCep("000000-10");
		endPessoa.setComplemento("1313");
		
		//setando Pessoa
		pessoa.setNome("Alícia");
		pessoa.setIdade(25);
		pessoa.setTelefone(telPessoa);
		pessoa.setEndereco(endPessoa);
		
		//O java chama o método toString() de pessoa automaticamente		
		System.out.println(pessoa);
		
	}
}
