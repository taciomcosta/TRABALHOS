package aula3_13_09_16;

//Importando Scanner
import java.util.Scanner;

public class ParImpar{
	public static void main(String[] args){
		
//		Instanciando Scanner
		Scanner ent = new Scanner(System.in);
		
//		vars
		int num;
		
		System.out.println("\t\tN�mero par ou �mpar?\n\n");
		
//		Entrada
		System.out.print("Insira um n�mero inteiro: ");
		num = ent.nextInt();
		
//		Processamento e sa�da
		if ( num % 2 == 0 )
			System.out.print(num + " � par");
		else
			System.out.print(num + " � �mpar");
		
	}
	
}