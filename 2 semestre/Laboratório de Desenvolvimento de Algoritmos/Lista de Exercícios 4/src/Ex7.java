//Importando Scanner
import java.util.Scanner;

public class Ex7 {

	public static void main(String[] args){
		
		//Instanciando Scanner
		Scanner ent = new Scanner(System.in);
		
		System.out.println("Vetores Intercalados\n\n");

		//vars
		int a[] = new int[20];
		int b[] = new int[20];
		int res[] = new int[40];
		int i, iA=0, iB=0;
		
		//Entrada
		for( i=0 ; i<20; i++)
		{
			System.out.print("Digite a[" + i + "]: ");
			a[i] = ent.nextInt();
		}
		
		for( i=0 ; i<20; i++)
		{
			System.out.print("Digite b[" + i + "]: ");
			b[i] = ent.nextInt();
		}
		
		//Processamento
		for (i=0; i<40; i++)
		{
			if( i%2 == 0)
			{
				res[i] = a[iA];
				iA++;
			}
			else
			{
				res[i] = b[iB];
				iB++;
			}
		}
		
		//Saída
		System.out.println("\nVetor resultante:");
		for( i=0; i<40; i++)
		{
			System.out.printf("%d  ", res[i]);
		}
		
	}
}
