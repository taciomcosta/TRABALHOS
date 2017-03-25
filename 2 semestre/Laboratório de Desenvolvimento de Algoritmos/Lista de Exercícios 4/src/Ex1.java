//Importando Scanner
import java.util.Scanner;

public class Ex1 {

	public static void main(String[] args){
		
		//Instanciando Scanner
		Scanner ent = new Scanner(System.in);
		
		System.out.println("Soma de dois valores de um vetor\n\n");
		
		//vars
		int v[] = new int[12];
		int i, x, y, soma;
		
		//Entradas
		for( i=0; i<12; i++)
		{
			System.out.print("Digite v[" + i +"]: ");
			v[i] = ent.nextInt();
		}
		
		//Entrada
		System.out.println("\nDigite uma posição X (0 <= X < 12): ");
		x = ent.nextInt();
		System.out.println("Digite uma posição Y (0 <= Y < 12): ");
		y = ent.nextInt();
		
		//Processamento
		soma = v[x] + v[y];
		
		//Saída
		System.out.println("Soma: " + soma);
		
		
	}
}
