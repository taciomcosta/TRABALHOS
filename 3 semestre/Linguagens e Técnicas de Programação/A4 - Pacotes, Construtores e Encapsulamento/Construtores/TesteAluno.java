package construtor;

public class TesteAluno 
{
	public static void main(String[] args)
	{
		Aluno a1 = new Aluno(12345, "Tácio", "taciomcosta@gmail.com");
		Aluno a2 = new Aluno(54321, "Aluno2");
		Aluno a3 = new Aluno();
		
		a1.imprimirDados();
		a2.imprimirDados();
		a3.imprimirDados();
	}
}
