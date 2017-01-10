//Importando Scanner
import java.util.Scanner;

public class Multiplos2e3 {

	public static void main(String[] args){
		
		//Instancinado Scanner
		Scanner input = new Scanner(System.in);
		
		System.out.println("Múltiplos de 2 e 3");
		
		//vars
		int v[] = new int[7];
		int i;
		
		//Entradas
		for( i=0; i<7; i++)
		{
			System.out.print("Digite o " + (i+1) + "° número: ");
			v[i] = input.nextInt();
		}
		
		//Saídas
		System.out.println("\nMúltiplos de 2: ");
		for( i=0; i<7; i++)
		{
			if( v[i]%2 == 0 )
				System.out.print(v[i]+", ");
		}
		
		System.out.println("\nMúltiplos de 3: ");
		for( i=0; i<7; i++ )
		{
			if( v[i]%3 == 0)
				System.out.print(v[i]+", ");
		}
		
		System.out.println("\nMúltiplos de 2 e 3: ");
		for( i=0; i<7; i++)
		{
			if( v[i]%2==0 && v[i]%3==0 )
				System.out.print(v[i]+", ");
		}
		
	}
}
