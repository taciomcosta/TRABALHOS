package pacote1;

public class Cachorro extends Animal
{
	//ATRIBUTOS
	private String raca;
	private char sexo;
	
	//M�TODOS
	public Cachorro(){}
	
	public Cachorro(String raca, char sexo)
	{
		this.raca = raca;
		this.sexo = sexo;
	}
	
	//setters e getters
	public String getRaca()
	{
		return raca;
	}

	public void setRaca(String raca)
	{
		this.raca = raca;
	}

	public char getSexo()
	{
		return sexo;
	}

	public void setSexo(char sexo)
	{
		this.sexo = sexo;
	}
	
	public String toString()
	{
		String s = "Ra�a: " + this.raca +
				"\nSexo: " + this.sexo + "\n";
		
		return super.toString() + s;
	}
	
}
