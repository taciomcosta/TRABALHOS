//Importando Scanner
import java.util.Scanner;

public class Ex14 {

	public static void main(String[] args){
		
		//Instanciando Scanner
		Scanner input = new Scanner(System.in);
		
		System.out.println("N Pares e Ímpares\n\n");
		
		//vars
		int num, i, cont;
		
		//Entrada
		System.out.print("Digite a quantidade de termos: ");
		num = input.nextInt();
		
		
		//Saída
		System.out.println("\n" + num + " primeieros pares: ");
		cont=1;
		for( i=0; cont<=num; i++ )
		{
			if ( i%2 == 0 )
			{
				cont++;
				System.out.println(i);
			}
				
		}
		
		System.out.println("\n" + num + " primeieros pares: ");
		cont=1;
		for( i=1; cont<=num; i++ )
		{
			if ( i%2 == 1 )
			{
				cont++;
				System.out.println(i);
			}
				
		}
		
	}
}
