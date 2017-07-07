import java.util.Scanner;

public class Exe08 {
	public static void main(String[] args)
	{
		/* VARS */
		Scanner ent = new Scanner(System.in);
		double custo, convite, qtdConv;
		/* ENTRADA */
		System.out.println("\tQUANTIDADE DE CONVITES");
		System.out.print("Insira o custo do espetaculo: R$ ");
		custo = ent.nextDouble();
		System.out.print("Insira o custo do convite: R$ ");
		convite = ent.nextDouble();
		/* PROCESSAMENTO */
		qtdConv = custo / convite;
		/* SAÍDA */
		System.out.println("Quantidade de convites: " + qtdConv);
	}
}