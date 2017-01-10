//Importando Scanner
import java.util.Scanner;

public class Ex2 {

	public static void main(String[] args){
		
		//Instanciando Scanner
		Scanner input = new Scanner(System.in);
		
		System.out.println("Vetor dos 10 primeiros ímpares\n\n");
		
		//vars
		int impares[] = new int[10];
		int i=0,  num=1;
		
		//Entrada 
		while( i < 10)
		{
			//Processamento
			if( num%2 == 1)
			{
				impares[i] = num;
				i++;
			}
			num++;
		}
		
		//Saída
		System.out.println("Vetor:");
		for(i=0; i<10; i++)
		{
			System.out.print(impares[i] + "  ");
		}
		
		
		
	}
}
