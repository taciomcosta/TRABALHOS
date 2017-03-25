//Importando Scanner
import java.util.Scanner;

public class Ex6 {

	public static void main(String[] args){
		
		//Instanciando Scanner
		Scanner input = new Scanner(System.in);
		
		System.out.println("Anulando Valores Negativos\n\n");
		
		//vars
		int v[] = new int[40];
		int i;
		
		//Entrada
		for( i=0; i<40; i++)
		{
			System.out.print("Digite v[" + i + "]: ");
			v[i] = input.nextInt();
		}
		
		//Processamento
		for( i=0; i<40; i++)
		{
			if( v[i] < 0)
			{
				v[i] = 0;
			}
		}
		
		//Saída
		System.out.println("\nVetor resultatante: ");
		for( i=0; i<40; i++)
		{
			System.out.printf("%d  ", v[i]);
		}
		
	}
}
