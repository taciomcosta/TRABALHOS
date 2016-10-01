//Importando Scanner
import java.util.Scanner;

public class Ex3{
	
	public static void main(String[] args){
		
	//Instanciando Scanner
	Scanner ent = new Scanner(System.in);
	
	System.out.println("Menor número\n\n");
	
	//vars
	float n1, n2;
	
	//Entradas
	System.out.print("Insira o 1° número: ");
	n1 = ent.nextFloat();
	
	System.out.print("Insira o 2° número: ");
	n2 = ent.nextFloat();
	
	//Processamento e Saída
	if ( n1 > n2 )
		System.out.println(n2 + " < " + n1);
	else if ( n2 > n1 )
		System.out.println(n1 + " < " + n2);
	else
		System.out.printf("%f = %f", n1, n2);
		
	}
}