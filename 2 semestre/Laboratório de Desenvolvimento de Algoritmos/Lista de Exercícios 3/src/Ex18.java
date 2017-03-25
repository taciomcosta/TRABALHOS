//Importando Scanner
import java.util.Scanner;

public class Ex18 {

	public static void main(String[] args){
		
		//Instanciando Scanner
		Scanner input = new Scanner(System.in);
		
		System.out.println("S = 1 + 1/2 + 1/4 + 1/6 + ... + 1/E\n\n");
		
		//vars
		double soma=1, i, e;
		
		//Entrada
		System.out.print("Digite o valor de E: ");
		e = input.nextDouble();
		
		//Processamento
		for ( i=2; i<=e; i=i+2 )
		{
			soma += 1/i;
		}
		
		//Saída
		System.out.println("Soma = " + soma);
		
	}
}
