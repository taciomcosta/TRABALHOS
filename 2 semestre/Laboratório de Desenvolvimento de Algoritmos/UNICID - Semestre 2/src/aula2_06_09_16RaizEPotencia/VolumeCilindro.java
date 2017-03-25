package aula2_06_09_16;


/*
 * Math.pow(x,y); -> x^y
 * Math.sqrt(x); Vx
 * 
 * */


//Importando a classe Scanner
import java.util.Scanner;

public class VolumeCilindro{
	
	public static void main(String[] args){
		
//		Instanciando Scanner
		Scanner input = new Scanner(System.in);
		
		System.out.println("\t\t�rea e Volume de um Cilindro\n\n");
		
//		vars
		double raio, altura, volume, area;
		
		
//		Entrada
		System.out.print("Insira o raio do cilindro: ");
		raio = input.nextFloat();
		
		System.out.print("Insira a altura do cilindro: ");
		altura = input.nextFloat();
		
//		Processamento
		volume = 3.14 * Math.pow(raio, 2) * altura;
		area = 2 * 3.14 * raio * ( altura + raio );
		
//		Sa�da
		System.out.printf("Volume = %.2f\n", volume);
		System.out.printf("�rea = %.2f", area);
		
		
		
		
		
	}
}