//Importando Scanner
import java.util.Scanner;

public class DivisoresNumero{
	
	public static void main(String[] args){
		
		//Instanciando Scanner
		Scanner input = new Scanner(System.in);
		
		System.out.println("Divisores de um Número\n\n");
		
		//vars
		int num, divisor = 1;
		
		//Entrada
		System.out.print("Insira um número inteiro: ");
		num = input.nextInt();
		
		//Processamento e Saída
		System.out.println("Divisores de " + num + ":\n");
		while ( divisor <= num )
		{
			if ( num%divisor == 0 )
				System.out.println(divisor);
			divisor++;
		}
			
		
	}
}