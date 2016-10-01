//Importando Scanner
import java.util.Scanner;

public class Ex7{
	
	public static void main(String[] args){
		
	//Instanciando Scanner
	Scanner ent = new Scanner(System.in);
	
	//vars
	double pesoAtual, pesoGordo, pesoMagro;
	
	
	System.out.println("\n\n");
	
	//Entrada
	System.out.print("Insira o peso atual em Kg: ");
	pesoAtual = ent.nextDouble();
	
	//Processamento
	pesoGordo = pesoAtual * 1.15;
	pesoMagro = pesoAtual * 0.8;
	
	//Saída
	System.out.printf("Peso se engordar 15%%: %.1f Kg\n", pesoGordo);
	System.out.printf("Peso se emagrecer 20%%: %.1f Kg", pesoMagro);
		
	}
}