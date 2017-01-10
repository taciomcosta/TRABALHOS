//Importando Scanner
import java.util.Scanner;

public class Ex14 {

	public static void main(String[] args){
		
		//Instanciando Scanner
		Scanner input = new Scanner(System.in);
		
		System.out.println("Zeros no Final do Vetor\n\n");
		
		//vars
		int v[] = new int[5];
		int i, j, aux;
		
		//Entrada
		for( i=0; i<5; i++)
		{
			System.out.print("Digite v[" + i + "]:");
			v[i] = input.nextInt();
		}
		
		//Processamento
		for(i=0; i<5; i++)
		{
			if( v[i] == 0)
			{
				for(j=i; j<4; j++)
				{
					aux = v[j];
					v[j] = v[j+1];
					v[j+1] = aux;
				}
			}
		}
			
			//Saída
			System.out.println("\n\nVetor Resultante: ");
			for( i=0; i<5; i++)
			{
				System.out.printf("%d  ", v[i]);
			}
		
		
	}
}
