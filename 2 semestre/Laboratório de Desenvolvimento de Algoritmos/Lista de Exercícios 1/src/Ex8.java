//Importando Scanner
import java.util.Scanner;

public class Ex8{
	public static void main(String[] args){
		
	//Instanciando Scanner
	Scanner input = new Scanner(System.in);
	
	//vars	
	float pesoK, pesoG;
	
	System.out.print("Peso Kg --> g\n\n");
	
	//Entrada
	System.out.print("Insira o peso em Kg: ");
	pesoK = input.nextFloat();
	
	//Processamento
	pesoG = pesoK * 1000;
	
	//Saída
	System.out.println("Peso em gramas: " + pesoG + " g");
		
	}
}