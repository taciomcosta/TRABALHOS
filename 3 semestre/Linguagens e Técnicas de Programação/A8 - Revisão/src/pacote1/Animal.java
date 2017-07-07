package pacote1;

public class Animal
{
	//ATRIBUTOS
	private String nome;
	private String cor;
	
	//MÉTODOS
	
	//construtor vazio (sem entrada de parâmetros e implementação)
	public Animal(){}
	
	public Animal(String nome, String cor)
	{
		this.nome = nome;
		this.cor = cor;
	}

	//getters e setters
	public String getNome()
	{
		return nome;
	}

	public void setNome(String nome)
	{
		this.nome = nome;
	}

	public String getCor()
	{
		return cor;
	}

	public void setCor(String cor)
	{
		this.cor = cor;
	}
	
	public void falar()
	{
		System.out.println("Eu falo!");
	}
	
	public String toString()
	{
		String s = "Nome: " + this.nome +
				"\nCor: " + this.cor + "\n";
		
		return s;
	}
}
