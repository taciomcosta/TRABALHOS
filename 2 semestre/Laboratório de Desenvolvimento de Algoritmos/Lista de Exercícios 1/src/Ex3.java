//Importando Scanner
import java.util.Scanner;

public class Ex3{
	public static void main(String[] args){
		
	//Instanciando Scanner
	Scanner ent = new Scanner(System.in);
	
	//vars
	float n1, n2, res;
	
	System.out.println("Divisão entre dois números\n\n");
	
	//Entradas
	System.out.print("Insira o 1° número: ");
	n1 = ent.nextFloat();
	
	System.out.print("Insira o 2° número (diferente de zero): ");
	n2 = ent.nextFloat();
	
	//Processamento
	res = n1 / n2;
	
	//Saída
	System.out.println(n1 + " / " + n2 + " = " + res);
		
	}
}