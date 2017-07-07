import java.util.Scanner;

public class Exe05 {
	public static void main(String[] args)
	{
		/* VARS */
		Scanner ent = new Scanner(System.in);
		double raio, area;
		/* ENTRADA */
		System.out.print("Insira a raio do circulo: ");
		raio = ent.nextDouble();
		/* PROCESSAMENTO */
		area = Math.PI * Math.pow(raio, 2);
		/* SAÍDA */
		System.out.println("Area do circulo: " + area);
	}
}