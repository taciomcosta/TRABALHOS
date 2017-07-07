import java.util.Scanner;

public class Exe03 {
	public static void main(String[] args)
	{
		/* VARS */
		Scanner ent = new Scanner(System.in);
		double rendimento, total, deposito;
		int juros;
		/* ENTRADA */
		System.out.println("\tRENDIMENTO");
		System.out.print("Digite o valor do deposito: ");
		deposito = ent.nextDouble();
		System.out.print("Digite a porcentagem de juros: ");
		juros = ent.nextInt();
		/* PROCESSAMENTO */
		rendimento = deposito * juros / 100;
		total = rendimento + deposito;
		/* SAÍDA */
		System.out.println("Rendimento: R$" + rendimento);
		System.out.println("Total: R$" + total);
	}
}
