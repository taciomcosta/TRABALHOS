import java.util.Scanner;

public class Exe07 {
	public static void main(String[] args)
	{
		/* VARS */
		double peso;
		Scanner ent = new Scanner(System.in);
		/* ENTRADA */
		System.out.println("\tCALCULO DE PESO");
		System.out.print("Insira seu peso: ");
		peso = ent.nextDouble();
		/* PROCESSAMENTO E SAÍDA*/
		System.out.println("Peso se engordar 15%: " + (peso*1.15));
		System.out.println("Peso se emagrecer 20%: " + (peso*0.8));
	}
}