//Importando Scanner
import java.util.Scanner;

public class Ex13 {

	public static void main(String[] args){
		
		//Instanciando Scanner
		Scanner ent = new Scanner(System.in);
		
		System.out.println("\n\n");
		
		//vars
		int v[] = new int[10];
		int i, j;
		
		//Entrada
		for(i=0; i<10; i++)
		{
			System.out.print("Digite v[" + i + "]: ");
			v[i] = ent.nextInt();
		}
		
		//Processamento e Saída
		System.out.println("\nValores iguais:");
		for(i=0; i<10; i++)
		{
			for(j=i+1; j<10; j++)
			{
				if(v[i] == v[j])
					System.out.println(v[i]);
			}
		}
		
		
	}
}
