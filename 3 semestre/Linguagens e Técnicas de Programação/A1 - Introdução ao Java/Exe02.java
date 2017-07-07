import java.util.Scanner;

public class Exe02 {
	public static void main(String[] args)
	{
		/* VARS */
		Scanner ent = new Scanner(System.in);
		double salI, salF;
		/* ENTRADA */
		System.out.println("\tSALARIO A RECEBER");
		System.out.print("Insira o salario: ");
		salI = ent.nextDouble();
		/* PROCESSAMENTO */
		salF = salI + 50 - salI * 0.1;
		/* SAÍDA */
		System.out.println("Salario a receber: R$ " + salF);
	}
}