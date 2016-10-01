//Indicando o package
package aula2_06_09_16;

//Importando a classe Scanner
import java.util.Scanner;

public class Treino2{
	public static void main(String[] args){
		
//		Instanciando Scanner
		Scanner ent = new Scanner(System.in);
		
//		vars
		double delta,a,b,c,x1,x2;
		
//		Entrada
		System.out.print("Insira o coeficiente A: ");
		a = ent.nextFloat();
		
		System.out.print("Insira o coeficiente B: ");
		b = ent.nextFloat();
		
		System.out.print("Insira o coeficiente C :");
		c = ent.nextFloat();
		
//		Processamento
		delta = Math.pow(b, 2) - 4 * a * c;
		
		x1 = ( -b - Math.sqrt(delta) ) / ( 2 * a );
		x2 = ( -b + Math.sqrt(delta) ) / ( 2 * a );
		
//		Saída
		System.out.printf("x1 = %.2f\nx2 = %.2f", x1,x2);
	}
}