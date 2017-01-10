package exercicios;
import java.util.Scanner;

public class Vetor {
	
	public static void main(String[] args){
		
		Scanner ent = new Scanner(System.in);

		// int[] <-- tipo de dado 
		//new int[x] <-- instanciando um objeto de vetor para atribuí-lo ao variável
		int[] v = new int[5];
		int i;
		
		for( i=0; i<5; i++)
		{
			System.out.print("Insira o valor de v[" + i + "]: ");
			v[i] = ent.nextInt();
		}
		
		for( i=0; i<5; i++)
			System.out.println(v[i]);
		
		
	}
}
