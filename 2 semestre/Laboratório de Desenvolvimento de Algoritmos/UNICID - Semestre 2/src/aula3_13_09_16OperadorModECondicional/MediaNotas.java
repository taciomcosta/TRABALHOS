package aula3_13_09_16;

//Importando Scanner
import java.util.Scanner;

public class MediaNotas{
	public static void main(String[] args){
		
//		Instanciando Scanner
		Scanner input = new Scanner(System.in);
		
//		vars
		float media, n1, n2, n3, n4;
		
		System.out.println("\t\tM�dia Notas\n\n");
		
//		Entradas
		System.out.print("Insira a 1� nota: ");
		n1 = input.nextFloat();
		
		System.out.print("Insira a 2� nota: ");
		n2 = input.nextFloat();
		
		System.out.print("Insira a 3� nota: ");
		n3 = input.nextFloat();
		
		System.out.print("Insira a 4� nota: ");
		n4 = input.nextFloat();
		
//		Processamento
		media = ( n1 + n2 + n3 + n4 ) / 4;
		
//		Sa�da
		System.out.println("M�dia = " + media);
		if ( media >= 7 )
			System.out.println("Aluno APROVADO!");
		else
			System.out.println("Aluno REPROVADO");
		
	}
}