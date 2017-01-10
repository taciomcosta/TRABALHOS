//Importando Scanner
import java.util.Scanner;

public class MaiorMenorNumero{
	
	public static void main(String[] args){
		
		//Instanciando Scanner
		Scanner ent = new Scanner(System.in);
		
		System.out.println("Maior e menor número\n\n");
		
		//vars
		int num, maior, menor, i;
		
		//Entrada
		System.out.print("Insira o 1° número: ");
		num = ent.nextInt();
		maior = num;
		menor = num;
		
		for(i=2; i<=10; i++)
		{
			System.out.printf("Insira o %d° número: ", i);
			num = ent.nextInt();
			if( num < menor )
				menor = num;
			if ( num > maior )
				maior = num;
		}
		
		//Saída
		System.out.println("\n" + maior + " é o maior número!");
		System.out.println(menor + " é o menor número!");
	}
}