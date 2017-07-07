import java.util.Scanner;

public class Exe09 {
	public static void main(String[] args)
	{
		/* VARS */
		Scanner ent = new Scanner(System.in);
		double celsius, farenheit;
		/* ENTRADA */
		System.out.println("Celsius => Farenheit\t");
		System.out.print("Insira a temperatura em celsius: ");
		celsius = ent.nextDouble();
		/* PROCESSAMENTO */
		farenheit = celsius * 1.8 + 32;
		/* SAÍDA */
		System.out.println("Temperatura em farenheit: " + farenheit);
	}
}