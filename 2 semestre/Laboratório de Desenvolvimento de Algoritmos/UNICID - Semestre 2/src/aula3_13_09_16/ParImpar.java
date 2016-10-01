//Importando Scanner
import java.util.Scanner;

public class ParImpar{
	public static void main(String[] args){
		
//		Instanciando Scanner
		Scanner ent = new Scanner(System.in);
		
//		vars
		int num;
		
		System.out.println("\t\tNúmero par ou ímpar?\n\n");
		
//		Entrada
		System.out.print("Insira um número inteiro: ");
		num = ent.nextInt();
		
//		Processamento e saída
		if ( num % 2 == 0 )
			System.out.print(num + " é par");
		else
			System.out.print(num + " é ímpar");
		
	}
	
}