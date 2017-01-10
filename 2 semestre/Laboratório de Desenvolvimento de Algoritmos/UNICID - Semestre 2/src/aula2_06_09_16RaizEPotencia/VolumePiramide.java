package aula2_06_09_16;

//Importando a classe Scanner
import java.util.Scanner;


public class VolumePiramide {

	public static void main(String[] args) {

//		Instanciando Scanner
		Scanner input = new Scanner(System.in);
		
//		vars
		float base,altura,volume;
		
//		Entrada
		System.out.print("Insira a base da pir�mide: ");
		
		base = input.nextFloat();
		
		System.out.print("Insira a altura da pir�mide: ");
		
		altura = input.nextFloat();
		
//		Processamento
		
		volume = (base*altura)/3;
		
//		Sa�da
		
//		Sa�da com 2 casas decimais
		System.out.printf("Volume = %.2f", volume);
		
		

	}

}
