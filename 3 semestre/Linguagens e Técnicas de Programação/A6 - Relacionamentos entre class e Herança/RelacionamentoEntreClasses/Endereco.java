package RelacionamentoClasses;

public class Endereco 
{
	//atributos
	private String logradouro;
	private String nome;
	private String numero;
	private String bairro;
	private String cep;
	private String cidade;
	
	//métodos
	 //setters
	public void setLogradouro(String logradouro)
	{
		this.logradouro = logradouro;
	}
	
	public void setNome(String nome)
	{
		this.nome = nome;
	}
	
	public void setNumero(String numero)
	{
		this.numero = numero;
	}
	
	public void setBairro(String bairro)
	{
		this.bairro = bairro;
	}
	
	public void setCidade(String cidade)
	{
		this.cidade = cidade;
	}
	
	public void setCep(String cep)
	{
		this.cep = cep;
	}
	
	//getters
	public String getLogradouro()
	{
		return this.logradouro;
	}
	
	public String getNome()
	{
		return this.nome;
	}
	
	public String getNumero()
	{
		return this.numero;
	}
	
	public String getBairro()
	{
		return this.bairro;
	}
	
	public String getCidade()
	{
		return this.cidade;
	}
	
	public String getCep()
	{
		return this.cep;
	}
	
	//toString()
	public String toString()
	{
		String dados = 
				this.logradouro + " " + this.nome +
				"\n n° " + this.numero + ", " + this.bairro;
		
		return dados;
	}
}