//Importando Scanner
import java.util.Scanner;

public class NumeroPerfeito{
	
	public static void main(String[] args){
		
		//Instanciando Scanner
		Scanner ent = new Scanner(System.in);
		
		System.out.println("N�mero Perfeito\n\n");
		
		//vars
		int num, i, soma = 0;
		
		//Entrada
		System.out.print("Insira um n�mero inteiro: ");
		num = ent.nextInt();
		
		//Processamento
		for ( i=1; i<num; i++ )
		{
			if( num%i == 0 )
				soma += i;
		}
		
		//Sa�da
		if ( num == soma )
			System.out.println(num + " � perfeito!");
		else
			System.out.println(num + " N�O � perfeito!");
	
	}
	

}