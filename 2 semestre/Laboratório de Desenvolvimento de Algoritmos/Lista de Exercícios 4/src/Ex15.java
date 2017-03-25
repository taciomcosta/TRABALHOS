//Importando Scanner
import java.util.Scanner;

public class Ex15 {

	public static void main(String[] args){
		
		//Instanciando Scanner
		Scanner ent = new Scanner(System.in);
		
		System.out.println("Valor do próximo elemento a ser lido\n\n");
		
		//vars
		int v[] = new int[9];
		int cont=0, i=0;
		
		
		while( cont<9)
		{
			//Entrada
			System.out.print("Digite v[" + i + "] (<9): ");
			v[i] = ent.nextInt();
			
			//Processamento
			i = v[i];
			cont++;
		}
		
		//Saída
		System.out.println("Vetor Resultante: ");
		for( i=0; i<9; i++)
		{
			System.out.printf("%d  ", v[i]);
		}
		
		
	}
}
