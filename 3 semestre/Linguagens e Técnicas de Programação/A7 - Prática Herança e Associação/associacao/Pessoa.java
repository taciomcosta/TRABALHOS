package associacao;

public class Pessoa 
{
	//atributos
	private String nome;
	private int idade;
	private Telefone telefone;
	private Endereco endereco;
	
	//métodos especiais
	public String getNome() 
	{
		return nome;
	}
	
	public void setNome(String nome) 
	{
		this.nome = nome;
	}
	
	public int getIdade() 
	{
		return idade;
	}
	
	public void setIdade(int idade) 
	{
		this.idade = idade;
	}
	
	public Telefone getTelefone() 
	{
		return telefone;
	}
	
	public void setTelefone(Telefone telefone) 
	{
		this.telefone = telefone;
	}
	
	public Endereco getEndereco() 
	{
		return endereco;
	}
	
	public void setEndereco(Endereco endereco) 
	{
		this.endereco = endereco;
	}
	
	//Sobrescrição do método da classe Object
	@Override	
	public String toString()
	{
		String dados = "\nNome: " + this.nome +
				"\nIdade: " + this.idade +
				this.endereco +
				this.telefone;
		return dados;
	}
	
}
