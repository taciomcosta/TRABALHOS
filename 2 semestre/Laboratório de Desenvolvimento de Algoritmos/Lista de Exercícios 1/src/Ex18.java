//Importando Scanner
import java.util.Scanner;

public class Ex18 {
	
	public static void main(String[] args){
		
	//Instanciando Scanner
	Scanner ent = new Scanner(System.in);
	
	//vars
	float tempC, tempF;
	
	System.out.println("Temperatura °C --> °F \n\n");
	
	//Entrada
	System.out.print("Insira a tempratura em °C: ");
	tempC = ent.nextFloat();
	
	//Processamento
	tempF = (tempC * 9 / 5) + 32;
	
	//Saída
	System.out.printf("Temperatura °F: %.1f", tempF);
		
	}
}
