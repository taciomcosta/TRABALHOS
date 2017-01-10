//Importando Scanner
import java.util.Scanner;

public class NumeroPrimo{
	
	public static void main(String[] args){
		
		//Instanciando Scanner
		Scanner ent = new Scanner(System.in);
		
		System.out.println("Número Primo\n\n");
		
		//vars
		int num, divisor, cont=0;
		
		//Entrada
		System.out.print("Insira um número inteiro: ");
		num = ent.nextInt();
		
		//Processamento
		for( divisor=1; divisor<=num; divisor++)
		{
			if( num%divisor == 0 )
				cont++;
		}
		
		//Saída
		if ( cont == 2 )
			System.out.println(num + " é primo ");
		else
			System.out.println(num + " NÃO é primo ");
		
	}
}