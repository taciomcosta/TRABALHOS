import java.util.Scanner;
public class LeituraString {
	public static void main(String[] args) 
	{
		Scanner ent = new Scanner(System.in);
		System.out.println("Insira seu nome: ");
		String nome = ent.nextLine();
		System.out.println("Olá, " + nome);
	}
}