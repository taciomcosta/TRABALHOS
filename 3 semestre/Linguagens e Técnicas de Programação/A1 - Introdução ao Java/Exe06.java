import java.util.Scanner;

public class Exe06 {
	public static void main(String[] args)
	{
		/* VARS */
		Scanner ent = new Scanner(System.in);
		int anoNasc, anoAtual;
		/* ENTRADA */
		System.out.println("\tCALCULO DE IDADE");
		System.out.print("Insira o ano de nascimento: ");
		anoNasc = ent.nextInt();
		System.out.print("Insira o ano atual: ");
		anoAtual = ent.nextInt();
		/* PROCESSAMENTO E SAÍDA*/
		System.out.println("Idade atual: " + (anoAtual - anoNasc));
		System.out.println("Idade atual: " + (2050 - anoNasc));
		
	}
}