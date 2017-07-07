import java.util.Scanner;
public class Exe01{
	public static void main(String[] args)
	{	
		/* VARS */
		Scanner ent = new Scanner(System.in);
		double salI, salF;
		
		System.out.println("\tSALARIO A RECEEBER");
		
		/* ENTRADA */
		System.out.println("Insira o salario: ");
		salI = ent.nextDouble();
		/* PROCESSAMENTO */
		salF = salI * 1.05 - salI * 0.07;
		/* SAÍDA */
		System.out.println("Salario a receber: R$" + salF);
		
		
	}
}