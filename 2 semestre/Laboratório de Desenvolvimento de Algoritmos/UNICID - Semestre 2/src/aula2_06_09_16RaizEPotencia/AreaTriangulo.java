package aula2_06_09_16;

//Importando a classe Scanner
import java.util.Scanner;

public class AreaTriangulo{
	
	public static void main(String[] args){
		
//		Instanciando Scanner
		Scanner ent = new Scanner(System.in);
		
//		vars
		double l1, l2, l3, area, sp;
		
		System.out.println("\t\t�rea do Tri�ngulo (Her�o)\n\n");

//		Entrada
		System.out.print("Insira o comprimento do 1� lado: ");
		l1 = ent.nextDouble();
		
		System.out.print("Insira o comprimento do 2� lado: ");
		l2 = ent.nextDouble();
		
		System.out.print("Insira o comprimeno do 3� lado: ");
		l3 = ent.nextDouble();
		
//		Processamento
		sp = ( l1 + l2 + l3 ) / 2;
		area = Math.sqrt( sp * (sp-l1) * (sp-l2) * (sp-l3) );
		
//		Sa�da
		System.out.printf("�rea do tri�ngulo = %.2f", area);
		
	}
}