import java.util.Scanner;

public class Exe04 {
	public static void main(String[] args)
	{
		/* VARS */
		Scanner ent = new Scanner(System.in);
		double base, altura, area;
		/* ENTRADA */
		System.out.println("\tAREA DE UM TRIANGULO");
		System.out.print("Insira a base do triangulo: ");
		base = ent.nextDouble();
		System.out.print("Insira a altura do triangulo: ");
		altura = ent.nextDouble();
		/* PROCESSAMENTO */
		area = base * altura / 2;
		/* SAÍDA */
		System.out.print("Area do triangulo: " + area);
		
	}
}