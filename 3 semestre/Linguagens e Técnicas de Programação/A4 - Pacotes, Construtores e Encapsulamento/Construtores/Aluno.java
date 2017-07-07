package construtor;

public class Aluno 
{
	//Atributos
	int rgm;
	String nome;
	String email;
	
	//Métodos 
	public Aluno(int rgm, String nome, String email)
	{
		//rgm da classe = rgm do método;
		this.rgm = rgm;
		this.nome = nome;
		this.email = email;
	}
	
	public Aluno(int rgm, String nome)
	{
		this.rgm = rgm;
		this.nome = nome;
	}
	
	//construtor vazio
	public Aluno()
	{
		
	}
	
	void imprimirDados()
	{
		System.out.println("\nRGM: " + rgm);
		System.out.println("Nome: " + nome);
		System.out.println("E-mail: " + email);
	}
}
