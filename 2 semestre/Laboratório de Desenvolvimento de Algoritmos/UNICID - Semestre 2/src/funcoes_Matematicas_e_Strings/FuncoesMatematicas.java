package funcoes_Matematicas_e_Strings;
import java.util.Scanner;

public class FuncoesMatematicas {
	public static void main(String[] args){
//		Instanciando Scanner
		Scanner ent = new Scanner(System.in);
		
//		Entrada
		System.out.println("Ceil: " + Math.ceil(5.2));
		System.out.println("Floor: " + Math.floor(5.2));
		System.out.println("Square Root: " + Math.sqrt(25));
		System.out.println("Power of 2: " + Math.pow(3, 2));
		System.out.println("Maximum between 10 and 15: " + Math.max(10, 15));
		System.out.println("Minimum between 10 and 15: " + Math.min(10, 15));
		System.out.println("Random number between 0.0 and 1.0: " + 100*Math.random());
		
		
	}
}
