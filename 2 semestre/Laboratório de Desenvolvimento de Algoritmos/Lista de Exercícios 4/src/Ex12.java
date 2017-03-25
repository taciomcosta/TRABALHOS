//Importando Scanner
import java.util.Scanner;

public class Ex12 {

	public static void main(String[] args){
		
		//Instanciando Scanner
		Scanner input = new Scanner(System.in);
		
		System.out.println("Terços de 3 Vetores\n\n");
		
		//vars
		int a[] = new int[9];
		int b[] = new int[9];
		int c[] = new int[9];
		int res[] = new int[9];
		int i;
		
		//Entradas
		for( i=0; i<9; i++)
		{
			System.out.print("Digite a[" + i + "]: ");
			a[i] = input.nextInt();
		}
		
		for( i=0; i<9; i++)
		{
			System.out.print("Digite b[" + i + "]: ");
			b[i] = input.nextInt();
		}
		
		for( i=0; i<9; i++)
		{
			System.out.print("Digite c[" + i + "]: ");
			c[i] = input.nextInt();
		}
		
		//Processamento
		for(i=0; i<3; i++)
		{
			res[i] = a[i];
		}
		
		for(i=3; i<6; i++)
		{
			res[i] = b[i];
		}
		
		for(i=6; i<9; i++)
		{
			res[i] = c[i];
		}
		
		//Saída
		System.out.println("\n\nVetor Resultante: ");
		for( i=0; i<9; i++)
		{
			System.out.printf("%d  ", res[i]);
		}
		
	}
}
