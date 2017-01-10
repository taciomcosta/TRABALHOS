//Importando Scanner
import java.util.Scanner;

public class Ex5{
	
	public static void main(String[] args){
		
		//Instanciando Scanner
		Scanner ent = new Scanner(System.in);
		
		System.out.println("Produto dos números digitados\n\n");
		
		//vars
		double num, produto=1;
		
		//Entrada
		System.out.print("Insira um número positivo, ou zero para terminar: ");
		num = ent.nextDouble();
		
		while( num != 0 )
		{
			//Processamento
			produto *= num;
			
			//Entrada
			System.out.print("Insira um número positivo, ou zero para terminar: ");
			num = ent.nextDouble();
			
		}
		
		System.out.printf("Produto = %.2f", produto);
		
		
		
	}
}