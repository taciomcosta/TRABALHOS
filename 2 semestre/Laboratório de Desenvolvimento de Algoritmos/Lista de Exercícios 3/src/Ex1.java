//Importando Scanner
import java.util.Scanner;

public class Ex1{
	
	public static void main(String[] args){
		
		//Instanciando Scanner
		Scanner ent = new Scanner(System.in);
		
		System.out.println("Maior e menor entre 15 valores\n\n");
		
		//vars
		float maior, menor, num;
		int i;
		
		//Entrada
		System.out.print("Insira o  1� n�mero: ");
		num = ent.nextFloat();
		
		maior = num;
		menor = num;
		
		for( i=2; i<=15; i++ )
		{
			//Entrada
			System.out.print("Insira o " + i + "� n�mero: ");
			num = ent.nextFloat();

			//Processamento
			if( num > maior )
				maior = num;
			else if ( num < menor )
				menor = num;

		}
		
		//Sa�da
		System.out.println("Maior n�mero: " + maior);
		System.out.println("Menor n�mero: " + menor);
		
		
		
	}
}