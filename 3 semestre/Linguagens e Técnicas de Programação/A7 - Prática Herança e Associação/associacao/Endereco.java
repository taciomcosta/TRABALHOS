package associacao;

public class Endereco 
{
	//atributos
	private String nome;
	private String numero;
	private String complemento;
	private String bairro;
	private String cidade;
	private String estado;
	private String cep;
	
	//métodos especiais
	public String getNome()
	{
		return nome;
	}
	
	public void setNome(String nome)
	{
		this.nome = nome;
	}
	
	public String getNumero()
	{
		return numero;
	}
	
	public void setNumero(String numero)
	{
		this.numero = numero;
	}
	
	public String getComplemento()
	{
		return complemento;
	}
	
	public void setComplemento(String complemento)
	{
		this.complemento = complemento;
	}
	
	public String getBairro()
	{
		return bairro;
	}
	
	public void setBairro(String bairro)
	{
		this.bairro = bairro;
	}
	
	public String getCidade()
	{
		return cidade;
	}
	
	public void setCidade(String cidade)
	{
		this.cidade = cidade;
	}
	
	public String getEstado()
	{
		return estado;
	}
	
	public void setEstado(String estado) 
	{
		this.estado = estado;
	}
	
	public String getCep()
	{
		return cep;
	}
	
	public void setCep(String cep)
	{
		this.cep = cep;
	}
	
	public String toString()
	{
		String dados = 
				"\n\nEndereço: " + this.nome + ", " + this.numero +
				"\n Complemento: " + this.complemento +
				"\n Bairro: " + this.bairro + 
				" \n Local: " + this.cidade + " - " + this.estado + ", " + this.cep;
		return dados;
	}
}
