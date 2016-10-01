//Importando Scanner
import java.util.Scanner;

public class Ex13{
	
	public static void main(String[] args){
		
	//Instanciando Scanner
	Scanner ent = new Scanner(System.in);
	
	//vars
	int n1;
	
	System.out.println("Tabuada de um número\t\t");
	
	//Entrada
	System.out.print("Insira um número inteiro: ");
	n1 = ent.nextInt();
	
	//Processamento e saída
	System.out.println( "0 * " + n1 + " = " +  n1*0);
	System.out.println( "1 * " + n1 + " = " +  n1*1);
	System.out.println( "2 * " + n1 + " = " +  n1*2);
	System.out.println( "3 * " + n1 + " = " +  n1*3);
	System.out.println( "4 * " + n1 + " = " +  n1*4);
	System.out.println( "5 * " + n1 + " = " +  n1*5);
	System.out.println( "6 * " + n1 + " = " +  n1*6);
	System.out.println( "7 * " + n1 + " = " +  n1*7);
	System.out.println( "8 * " + n1 + " = " +  n1*8);
	System.out.println( "9 * " + n1 + " = " +  n1*9);
	System.out.println( "10 * " + n1 + " = " +  n1*10);
	
		
	}
}