//Importando Scanner
import java.util.Scanner;

public class Ex15 {

	public static void main(String[] args){
		
		//Instanciando Scanner
		Scanner ent = new Scanner(System.in);
		
		System.out.println("N�mero Primo\n\n");
		
		//vars
		int n, divisor, cont=0;
		
		//Entrada
		System.out.print("Digite um n�mero positivo: ");
		n = ent.nextInt();
		
		//Processamento
		for ( divisor=1; divisor<=n; divisor++ )
		{
			if( n%divisor == 0 )
				cont++;
		}
		
		//Sa�da
		if ( cont == 2 )
			System.out.println(n + " � primo!");
		else
			System.out.println(n + " N�O � primo!");
		
	}
}
