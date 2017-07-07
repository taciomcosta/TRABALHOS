// RELACIONAMENTO HAS-A (TEM UM)
package RelacionamentoClasses;

public class Pessoa 
{
	//Atributos
	private String nome;
	private int idade;
	private double altura;
	private String rg;
	private String cpf;
	private Endereco endereco;
	
	//Métodos especiais
	 //setters
	public void setNome(String nome)
	{
		this.nome = nome;
	}
	
	public void setIdade(int idade)
	{
		this.idade = idade;
	}
	
	public void setAltura(double altura)
	{
		this.altura = altura;
	}
	
	public void setRg(String rg)
	{
		this.rg = rg;
	}
	
	public void setCpf(String cpf)
	{
		this.cpf = cpf;
	}
	
	 //getters
	public String getNome()
	{
		return this.nome;
	}
	
	public int getIdade()
	{
		return this.idade;
	}
	
	public double getAltura()
	{
		return this.altura;
	}
	
	public String getRg()
	{
		return this.rg;
	}
	
	public String getCpf()
	{
		return this.cpf;
	}
	
	public Endereco getEndereco()
	{
		return this.endereco;
	}
	
	public void setEndereco(Endereco endereco)
	{
		this.endereco = endereco;
	}
	
	//método toString retorna os dados de imprimirDados (é uma convenção)
	//Toda class tem o método toString() por herança
	public String toString()
	{
		String dados = 
				"\nNome: " + this.nome +
				"\nIdade: " + this.idade + 
				"\nCPF: " + this.cpf +
				"\nEndereço: " + endereco;
		
		return dados;
	}
	
	
}
