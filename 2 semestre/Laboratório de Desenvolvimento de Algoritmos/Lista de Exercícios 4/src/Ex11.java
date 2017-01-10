//Importando Scanner
import java.util.Scanner;

public class Ex11 {

	public static void main(String[] args){
		
		//Instanciando Scanner
		Scanner input = new Scanner(System.in);
		
		System.out.println("Anagrama\n\n");
		
		//vars
		char p1[] = new char[4];
		char p2[] = new char[4];
		int i, anagrama = 0, j;
		
		//Entrada
		System.out.println("Insira a 1° palavra: ");
		for(i=0; i<4; i++)
		{
			p1[i] = input.next(".").charAt(0);	
		}
		
		System.out.println("Insira a 2° palavra: ");
		for(i=0; i<4; i++)
		{
			p2[i] = input.next(".").charAt(0);	
		}
		
		//Processamento
		for( i=0; i<4; i++)
		{
			for( j=0; j<4; j++)
			{
				if( p1[i] == p2[j])
				{
					anagrama++;
					j=4;
				}
			}
		}
		
		//Saída
		for(i=0; i<4; i++)
		{
			System.out.printf("%c", p1[i]);
		}
		
		System.out.print(" e ");
		
		for(i=0; i<4; i++)
		{
			System.out.printf("%c", p2[i]);
		}
		
		if( anagrama != 4)
		{
			System.out.println(" NÃO são anagramas!");
		}
		else
		{
			System.out.println(" são anagramas!");
		}
		
		
	}
}
