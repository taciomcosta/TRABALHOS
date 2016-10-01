//Importando Scanner
import java.util.Scanner;

public class EngradadoCerveja {

	public static void main(String[] args) {
		
//		Instanciando Scanner
		Scanner input = new Scanner(System.in);
		
//		vars
		int engradados, garrafas, sobra;
		
		System.out.println("\t\tEngradados Cerveja\n\n");
		
//		Entrada
		System.out.println("Insira a quantidade de garrfas de cerveja: ");
		garrafas = input.nextInt();
		
//		Processamento
		engradados = garrafas / 24;
		sobra = garrafas % 24;
		
//		Saída
		System.out.println("Engradados: " + engradados);
		System.out.println("Sobra: " + sobra );

	}

}
