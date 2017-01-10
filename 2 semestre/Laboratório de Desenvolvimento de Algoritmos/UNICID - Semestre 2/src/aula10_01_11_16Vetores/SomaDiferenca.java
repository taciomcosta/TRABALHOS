//Importando Scanner
import java.util.Scanner;

public class SomaDiferenca {

	public static void main(String[] args){
		
		//Instanciando Scanner
		Scanner input = new Scanner(System.in);
		
		System.out.println("Soma e Diferença de Vetores\n");
		
		//vars
		int a[] = new int[6];
		int b[] = new int[6];
		int soma[] = new int[6];
		int dif[] = new int[6];
		int i;
		
		//Entradas
		//a
		for( i=0; i<6; i++)
		{
			System.out.print("Digite A[" + i+ "]: ");
			a[i] = input.nextInt();
		}
		
		//b
		for( i=0; i<6; i++)
		{
			System.out.print("Digite B[" + i + "]: ");
			b[i] = input.nextInt();
		}
		
		//Processamento
		for( i=0; i<6; i++)
		{
			soma[i] = a[i] + b[i];
			dif[i] = a[i] - b[i];
		}
		
		//Saída
		System.out.println("\nVetores:");
		
		//A
		System.out.println("\nA:");
		for(i=0; i<6; i++)
		{
			System.out.print(a[i]+", ");
		}
		
		//B
		System.out.println("\nB:");
		for(i=0; i<6; i++)
		{
			System.out.print(b[i]+", ");
		}
		
		//Soma
		System.out.println("\nSoma:");
		for(i=0; i<6; i++)
		{
			System.out.print(soma[i]+", ");
		}
		
		//Diferença
		System.out.println("\nDiferença:");
		for(i=0; i<6; i++)
		{
			System.out.print(dif[i]+", ");
		}
		
		
	}
	
}
