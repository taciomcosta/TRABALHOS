//Importando Scanner
import java.util.Scanner;

public class Ex6{
	
	public static void main(String[] args){
		
		//Instanciando Scanner
		Scanner input = new Scanner(System.in);
		
		System.out.println("Número Perfeito\n\n");
		
		//vars
		int num, divisor, soma=0;
		
		//Entrada
		System.out.print("Insira um número inteiro: ");
		num = input.nextInt();
		
		//Processamento
		for( divisor=1; divisor<num; divisor++ )
		{
			if( num%divisor == 0 )
			{
				soma += divisor;
			}
			
		}
		
		//Saída
		if( soma == num )
			System.out.println(num + " é perfeito!");
		else
			System.out.println(num + " NÃO é perfeito!");
		
	}
}