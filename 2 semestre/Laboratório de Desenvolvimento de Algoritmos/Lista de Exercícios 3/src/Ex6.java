//Importando Scanner
import java.util.Scanner;

public class Ex6{
	
	public static void main(String[] args){
		
		//Instanciando Scanner
		Scanner input = new Scanner(System.in);
		
		System.out.println("N�mero Perfeito\n\n");
		
		//vars
		int num, divisor, soma=0;
		
		//Entrada
		System.out.print("Insira um n�mero inteiro: ");
		num = input.nextInt();
		
		//Processamento
		for( divisor=1; divisor<num; divisor++ )
		{
			if( num%divisor == 0 )
			{
				soma += divisor;
			}
			
		}
		
		//Sa�da
		if( soma == num )
			System.out.println(num + " � perfeito!");
		else
			System.out.println(num + " N�O � perfeito!");
		
	}
}