package aula2_06_09_16;

//Importando Scanner
import java.util.Scanner;

public class Farenheit{
	
	public static void main(String[] args){
		
//		Instanciando Scanner
		Scanner input = new Scanner(System.in);
		
		System.out.println("\t\tConversor Farenheit em Celsius\n\n");
		
//		vars
		double celsius,farenheit;
		
//		Entrada
		System.out.print("Insira uma temperatura em �F: ");
		
		farenheit = input.nextDouble();
		
//		Processamento
		celsius = (farenheit-32)*5/9;
		
//		Sa�da
		System.out.println(farenheit + "�F = " + celsius + "� C");
		
		
		
	}
}