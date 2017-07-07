package associacao;

public class Telefone 
{
	//atributos
	private String tipo;
	private String codigo;
	private String numero;
	private String obs;
	
	//métodos especiais
	public String getTipo()
	{
		return tipo;
	}
	
	public void setTipo(String tipo)
	{
		this.tipo = tipo;
	}
	
	public String getCodigo()
	{
		return codigo;
	}
	
	public void setCodigo(String codigo)
	{
		this.codigo = codigo;
	}
	
	public String getNumero()
	{
		return numero;
	}
	
	public void setNumero(String numero)
	{
		this.numero = numero;
	}
	
	public String getObs()
	{
		return obs;
	}
	
	public void setObs(String obs)
	{
		this.obs = obs;
	}
	
	public String toString()
	{
		String dados = "\n\nTipo: " + this.tipo + 
				"\n " + this.codigo + " " + this.numero +
				"\n Obs: " + this.obs;
		return dados;
	}
}
