//Importando Scanner
import java.util.Scanner;

public class Ex15 {

	public static void main(String[] args){
		
		//Instanciando Scanner
		Scanner ent = new Scanner(System.in);
		
		System.out.println("Número Primo\n\n");
		
		//vars
		int n, divisor, cont=0;
		
		//Entrada
		System.out.print("Digite um número positivo: ");
		n = ent.nextInt();
		
		//Processamento
		for ( divisor=1; divisor<=n; divisor++ )
		{
			if( n%divisor == 0 )
				cont++;
		}
		
		//Saída
		if ( cont == 2 )
			System.out.println(n + " é primo!");
		else
			System.out.println(n + " NÃO é primo!");
		
	}
}
