//Importando Scanner
import java.util.Scanner;

public class FatorialVetor {

	public static void main(String[] args){
		
		//Instanciando Scanner
		Scanner ent = new Scanner(System.in);
		
		System.out.println("Vetor de Fatoriais\n\n");
		
		//vars
		int v[] = new int[8];
		int res[] = new int[8];
		int i, fat, j;
		
		//Entrada
		for( i=0; i<8; i++ )
		{
			System.out.printf("Digite v[%d]: ", i);
			v[i] = ent.nextInt();
		}
		
		//Processamento
		for( i=0; i<8; i++ )
		{
			fat = v[i];
			//Calculando o Fatorial do Número
			for( j=fat-1; j>1; j-- )
			{
				fat*=j;
			}
			res[i] = fat;
		}
		
		//Saída
		System.out.println("\nVetor:");
		for( i=0; i<8; i++)
		{
			System.out.printf("%d ", v[i]);
		}
		
		System.out.println("\nVetor Resultante:");
		for( i=0; i<8; i++ )
		{
			System.out.printf("%d ", res[i]);
		}
		
	}
}
