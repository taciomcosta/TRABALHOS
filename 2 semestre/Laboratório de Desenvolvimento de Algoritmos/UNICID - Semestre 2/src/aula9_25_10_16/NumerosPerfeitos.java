//Importando Scanner
import java.util.Scanner;

public class NumerosPerfeitos {

	public static void main(String[] args){
		
		//Instanciando Scanner
		Scanner ent = new Scanner(System.in);
		
		System.out.println("N�meros Perfeitos\n\n");
		
		//vars
		int divisor, soma, num;
		
		//Entrada
		System.out.print("Digite um n�mero positivo, ou <=0 para finalizar: ");
		num = ent.nextInt();
		
		while ( num > 0 )
		{
			//Processamento
			soma = 0;
			for( divisor=1; divisor<num; divisor++)
			{
				if( num%divisor == 0 )
					soma += divisor;
			}
			
			//Sa�da
			if( soma == num )
				System.out.println(num + " � perfeito!");
			else
				System.out.println(num + " N�O � perfeito!");
			
			//Entrada
			System.out.print("Digite um n�mero positivo, ou <=0 para finalizar: ");
			num = ent.nextInt();
		}
		
		System.out.println("\n\nFIM");
		
	}
}
