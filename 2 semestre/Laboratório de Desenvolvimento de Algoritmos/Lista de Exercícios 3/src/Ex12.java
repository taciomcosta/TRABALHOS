//Importando Scanner
import java.util.Scanner;

public class Ex12{
	
	public static void main(String[] args){
		
		//Instanciando Scanner
		Scanner input = new Scanner(System.in);
		
		System.out.println("Soma, produto e média de um conjunto\n\n");
		
		//vars
		int n1, n2, n3, soma, produto, media;
		
		//Entradas
		System.out.print("\nDigite o 1° número do conjunto: ");
		n1 = input.nextInt();
		
		System.out.print("Digite o 2° número do conjunto: ");
		n2 = input.nextInt();
		
		System.out.print("Digite o 3° número do conjunto: ");
		n3 = input.nextInt();
		
		while ( n1<=n2 && n2<=n3 )
		{
			//Processamento
			soma = n1 + n2 + n3;
			produto = n1 * n2 * n3;
			media = soma / 3;
			
			//Saída
			System.out.println("\nSoma = " + soma);
			System.out.println("Produto = " + produto);
			System.out.println("Média = " + media);
			
			//Entradas
			System.out.print("\nDigite o 1° número do conjunto: ");
			n1 = input.nextInt();
			
			System.out.print("Digite o 2° número do conjunto: ");
			n2 = input.nextInt();
			
			System.out.print("Digite o 3° número do conjunto: ");
			n3 = input.nextInt();
		}
		
		System.out.println("\nFIM DA EXECUÇÃO");
		
	}
}