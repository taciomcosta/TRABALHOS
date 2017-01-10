//Importando Scanner
import java.util.Scanner;

public class Ex4 {

	public static void main(String[] args){
		
		//Instanciando Scanner
		Scanner input = new Scanner(System.in);
		
		System.out.println("Busca de um valor em um vetor\n\n");
		
		//vars
		int v[] = new int[20];
		int i, x, posicao=-1;
		
		//Entrada
		for( i=0; i<20; i++)
		{
			System.out.print("Digite v["+i+"]: ");
			v[i] = input.nextInt();
		}
		
		System.out.print("Digite um valor X: ");
		x = input.nextInt();
		
		//Processamento
		for( i=0; i<20; i++)
		{
			if( v[i] == x)
			{
				posicao = i;
			}
		}
		
		//Saída
		if( posicao >= 0 )
		{
			System.out.println("\nValor encontrado na posição "+ posicao);
		}
		else
		{
			System.out.println("Nenhum valor encontrado");
		}
		
	}
}
