//Importando Scanner
import java.util.Scanner;

public class Ex22 {

	public static void main(String[] args){
		
	//Instanciando Scanner
	Scanner input = new Scanner(System.in);
	
	//vars
	int lados, diagonais;
	
	System.out.println("Número de diagonais de um polígono convexo\n\n");
	
	//Entradas	
	System.out.print("Insira o número de lados do polígono: ");
	lados = input.nextInt();
	
	//Processamento
	diagonais = lados * ( lados - 3 ) / 2;
	
	//Saída
	System.out.println("Número de diagonias: " + diagonais);
	
		
	}
}
