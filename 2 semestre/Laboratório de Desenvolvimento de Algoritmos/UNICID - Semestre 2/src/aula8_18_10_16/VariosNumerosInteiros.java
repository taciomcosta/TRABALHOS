//Importando Scanner
import java.util.Scanner;

public class VariosNumerosInteiros{
	
	public static void main(String[] args){
		
		//Instanciando Scanner
		Scanner input = new Scanner(System.in);
		
		System.out.println("Soma dos pares e Produto dos Ímpares\n\n");
		
		//vars
		int n, somaPar = 0, produtoImpar = 1;
		
		//Entrada
		System.out.print("Insira um número inteiro positivo, ou um número <= 0 para finalizar:");
		n = input.nextInt();
		
		//Processamento
		while(n > 0)
		{
			if( n%2 == 0 )
				somaPar += n;
			else
				produtoImpar *= n;
			
			System.out.print("Insira um número inteiro positivo, ou um número <= 0 para finalizar:");
			n = input.nextInt();	
			
		}
		
		//Saída
		System.out.printf("Soma dos pares: %d\n", somaPar);
		System.out.printf("Produto dos ímpares: %d", produtoImpar);
		
	}
}