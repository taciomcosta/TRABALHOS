//Importando Scanner
import java.util.Scanner;

public class Ex1{
	
	public static void main(String[] args){
		
	//Instanciando Scanner
	Scanner ent = new Scanner(System.in);
	
	//vars
	double n1, n2, res;
	
	System.out.println("Subtração entre dois números\n\n");
	
	//Entradas
	System.out.print("Insira o 1° número: ");
	n1 = ent.nextDouble();
	
	System.out.print("Insira o 2° número: ");
	n2 = ent.nextDouble();
	
	//Processamento
	res = n1 - n2;
	
	//Saída
	System.out.println(n1 + " - " + n2 + " = " + res);
		
		
	}
}