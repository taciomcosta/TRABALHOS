//Importando Scanner
import java.util.Scanner;

public class Ex17 {

	public static void main(String[] args){
		
		//Instanciando Scanner
		Scanner ent = new Scanner(System.in);
		
		System.out.println("Soma dos Ímpares entre 1 e N\n\n");
		
		//vars
		int n, i, soma=0;
		
		//Entrada
		System.out.print("Digite um número N: ");
		n = ent.nextInt();
		
		//Processamento
		for( i=1; i<=n; i++ )
		{
			if( i%2 == 1 )
			{
				soma += i;
			}
		}
		
		//Saída
		System.out.println("Soma dos ímpares = " + soma);
		
	}
}
