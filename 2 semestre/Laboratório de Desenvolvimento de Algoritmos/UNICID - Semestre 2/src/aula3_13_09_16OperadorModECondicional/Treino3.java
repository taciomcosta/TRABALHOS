//Indicando pacote
package aula3_13_09_16;

//Importando Scanner
import java.util.Scanner;

public class Treino3{
	public static void main(String[] args){
		
//		Instanciando Scanner
		Scanner input = new Scanner(System.in);
		
//		vars
		int lado1, lado2, lado3;
		
		System.out.println("Insira o tamanho do 1° lado: ");
		lado1 = input.nextInt();
		
		System.out.println("Insira o tamanho do 2° lado: ");
		lado2 = input.nextInt();
		
		System.out.println("Insira o tamanho do 3° lado: ");
		lado3 = input.nextInt();
		
		if( ( lado1 < lado2+lado3 ) && ( lado2 < lado1+lado3 ) && ( lado3 < lado1+lado2 ) )
			if ( lado1==lado2 && lado2==lado3 )
				System.out.println("Triângulo equilátero");
			else if ( (lado1==lado2 && lado2!=lado3) ||
					(lado1!=lado2 && lado2==lado3)|| lado1==lado3 && lado3!=lado2 )
				System.out.println("Triângulo isóceles");
			else
				System.out.println("Triângulo escaleno");
				
		
		else
			System.out.println("Não é um triângulo válido");
		
		
	}
}