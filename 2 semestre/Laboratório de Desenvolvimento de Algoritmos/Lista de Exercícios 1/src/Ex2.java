//Importando a classe Scanner
import java.util.Scanner;

public class Ex2{
	
	public static void main(String[] args){
		
	//Instanciando Scanner
	Scanner input = new Scanner(System.in);
	
	//vars
	double n1, n2, n3, res;
	
	System.out.println("Multiplicação entre três números\n\n");
	
	//Entrada
	System.out.print("Insira o 1° número: ");
	n1 = input.nextDouble();
	
	System.out.print("Insira o 2° número: ");
	n2 = input.nextDouble();
		
	System.out.print("Insira o 3° número: ");
	n3 = input.nextDouble();
	
	//Processamento
	res = n1 * n2 * n3;
	
	//Saída
	System.out.printf("%.2f * %.2f * %.2f = %.2f", n1, n2, n3, res);
		
	}
}