//Importando Scanner
import java.util.Scanner;

public class Ex11 {
	
	public static void main(String[] args){
		
		//Instanciando Scanner
		Scanner ent = new Scanner(System.in);
		
		System.out.println("Soma de pares e �mpares\n\n");
		
		//vars
		int somaPar=0, somaImpar=0, num;
		
		//Entrada
		System.out.print("Digite um n�mero menor ou igual a 1000, ou 1000 para terminar: ");
		num = ent.nextInt();
		
		while ( num <= 1000 )
		{
			//Processamento
			if ( num%2 ==0 )
				somaPar += num;
			else
				somaImpar += num;
			
			//Entrada
			System.out.print("Digite um n�mero menor ou igual a 1000, ou 1000 para terminar: ");
			num = ent.nextInt();
			
		}
		
		//Sa�da
		System.out.println("\nSoma dos pares: " + somaPar);
		System.out.println("Soma dos �mpares: " + somaImpar);
		
		
	}
}
