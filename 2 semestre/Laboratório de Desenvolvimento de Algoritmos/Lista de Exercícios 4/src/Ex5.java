//Importando Scanner
import java.util.Scanner;

public class Ex5 {

	public static void main(String[] args){
		
		//Instanciando Scanner
		Scanner ent = new Scanner(System.in);
		
		System.out.println("Quantidade de Valores Pares\n\n");
		
		//vars
		int v[] = new int[40];
		int i, cont=0;
		
		//Entrada
		for( i=0; i<40; i++)
		{
			System.out.print("Digite v[" + i + "]: ");
			v[i] = ent.nextInt();
		}
		
		//Processamento
		for(i=0; i<40; i++)
		{
			if( v[i]%2 == 0 )
			{
				cont++;
			}
		}
		
		//Saída
		System.out.println("\nQuantidade de números pares: "+ cont);
		
		
	}
}
