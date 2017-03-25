//Importando Scanner
import java.util.Scanner;

public class Ex16 {

	public static void main(String[] args){
		
		//Instanciando Scanner
		Scanner input = new Scanner(System.in);
		
		System.out.println("Números Primos\n\n");
		
		//vars
		int n=2, num, divisor, contPrimo, contTermos=1;
		
		//Entrada
		System.out.print("Digite a quantidade de números primos: ");
		num = input.nextInt();
		
		//Processamento
		while(  contTermos<=num )
		{
			contPrimo = 0;
			for( divisor=1; divisor<=n; divisor++ )
			{
				if( n%divisor == 0 )
					contPrimo++;
			}
			
			if( contPrimo == 2 )
			{
				contTermos++;
				System.out.println(n);
			}
			
			n++;
			
		}
		
	}
}
