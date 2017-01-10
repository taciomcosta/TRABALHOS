//Importando Scanner
import java.util.Scanner;

public class Ex4 {

	public static void main(String[] args){
		
		//Instanciando Scanner
		Scanner input = new Scanner(System.in);
		
		System.out.println("Soma = 1/1 + 3/2 + 5/3 + 7/4 + ... + 99/50\n\n");
		
		//vars
		double numerador=1, denominador=1, soma=0;
		
		while( numerador <= 99 )
		{
			System.out.printf("%.0f/%.0f + ", numerador, denominador);
			
			//Processamento
			soma += numerador/denominador;
			numerador += 2;
			denominador++;
			
		}
		
		//Saída
		System.out.println("\n\nSoma = " + soma);
		
	}
}
