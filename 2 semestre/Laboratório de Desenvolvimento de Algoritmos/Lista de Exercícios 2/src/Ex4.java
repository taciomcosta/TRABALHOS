//Importando Scanner
import java.util.Scanner;

public class Ex4{
	
	public static void main(String[] args){
		
	//Instanciando Scanner
	Scanner input = new Scanner(System.in);
	
	System.out.println("Maior número entre três\n\n");
	
	//vars
	int n1, n2, n3;
	
	//Entradas
	System.out.print("Insira o 1° número: ");
	n1 = input.nextInt();
	
	System.out.print("Insira o 2° número: ");
	n2 = input.nextInt();
	
	System.out.print("Insira o 3° número: ");
	n3 = input.nextInt();
	
	//Processamento e Saída
	if ( n1>n2 && n1>n3 )
		System.out.println(n1 + " é o maior número");
	else if ( n2>n1 && n2>n3 )
		System.out.println(n2 + " é o maior número");
	else if ( n3>n1 && n3>n2 )
		System.out.println(n3 + " é o maior número");
	
	
		
	}
}