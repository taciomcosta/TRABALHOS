//Importando Scanner
import java.util.Scanner;

public class MaiorMenorNumero{
	
	public static void main(String[] args){
		
		//Instanciando Scanner
		Scanner ent = new Scanner(System.in);
		
		System.out.println("Maior e menor n�mero\n\n");
		
		//vars
		int num, maior, menor, i;
		
		//Entrada
		System.out.print("Insira o 1� n�mero: ");
		num = ent.nextInt();
		maior = num;
		menor = num;
		
		for(i=2; i<=10; i++)
		{
			System.out.printf("Insira o %d� n�mero: ", i);
			num = ent.nextInt();
			if( num < menor )
				menor = num;
			if ( num > maior )
				maior = num;
		}
		
		//Sa�da
		System.out.println("\n" + maior + " � o maior n�mero!");
		System.out.println(menor + " � o menor n�mero!");
	}
}