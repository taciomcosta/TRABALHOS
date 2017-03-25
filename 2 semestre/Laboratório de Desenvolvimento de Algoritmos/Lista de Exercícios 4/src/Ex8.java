//Importando Scanner
import java.util.Scanner;

public class Ex8 {

	public static void main(String[] args){
		
		//Instanciando Scanner
		Scanner input = new Scanner(System.in);
		
		System.out.println("Soma de um elemento com seu anterior\n\n");
		
		//vars
		int v[] =  new int[40];
		int i;
		
		//Entrada
		for( i=0 ; i<40; i++)
		{
			System.out.print("Digite v[" + i + "]: ");
			v[i] = input.nextInt();
		}
		
		//Processamento
		for( i=1; i<40; i++)
		{
			v[i] += v[i-1];
		}
		
		//Saída
		System.out.println("\nVetor resultante: ");
		for( i=0; i<40; i++ )
		{
			System.out.printf("%d  ", v[i]);
		}
		
		
	}
}
