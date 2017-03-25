//Importando Scanner
import java.util.Scanner;

public class NumeroPerfeito{
	
	public static void main(String[] args){
		
		//Instanciando Scanner
		Scanner ent = new Scanner(System.in);
		
		System.out.println("Número Perfeito\n\n");
		
		//vars
		int num, i, soma = 0;
		
		//Entrada
		System.out.print("Insira um número inteiro: ");
		num = ent.nextInt();
		
		//Processamento
		for ( i=1; i<num; i++ )
		{
			if( num%i == 0 )
				soma += i;
		}
		
		//Saída
		if ( num == soma )
			System.out.println(num + " é perfeito!");
		else
			System.out.println(num + " NÃO é perfeito!");
	
	}
	

}