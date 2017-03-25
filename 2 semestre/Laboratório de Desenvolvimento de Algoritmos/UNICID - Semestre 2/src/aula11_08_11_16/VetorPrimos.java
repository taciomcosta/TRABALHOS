//Importando Scanner
import java.util.Scanner;

public class VetorPrimos {

	public static void main(String[] args){
		
		//Instanciando Scanner
		Scanner input = new Scanner(System.in);
		
		//vars
		int v[] = new int[8];
		int vPrimo[] = new int[8];
		int i, j, k=0, cont;
		
		//Entrada
		for( i=0; i<8; i++ )
		{
			System.out.printf("Digite v[%d]: ", i);
			v[i] = input.nextInt();
		}
		
		//Processamento
		for( i=0; i<8; i++ )
		{
			//Calculando se v[i] é primo
			cont = 0;
			for( j=1; j<=v[i]; j++ )
			{
				if( v[i]%j == 0 )
					cont++;
			}
			
			//Atribuindo valores primos ao vPrimo
			if( cont == 2 )
			{
				vPrimo[k] = v[i];
				//k é contador do vPrimo
				k++;
			}
		}
		
		//Saída
		System.out.println("\nVetor dos números primos: ");
		if( k > 0)
		{
			for( i=0; vPrimo[i]>0; i++ )
			{
				System.out.printf("%d  ", vPrimo[i]);
			}	
		}
		else
		System.out.println("\nNão há primos!");
		
		
	}
}
