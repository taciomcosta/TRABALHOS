//Importando Scanner
import java.util.Scanner;

public class Ex3{
	
	public static void main(String[] args){
		
		//Instanciando Scanner
		Scanner ent = new Scanner(System.in);
		
		System.out.println("Multiplica��o de um n�mero\n\n");
		
		//vars
		int i;
		double num;
		
		//Entrada
		System.out.print("Insira um n�mero: ");
		num = ent.nextDouble();
		
		for(i=1; i<=200; i++)
		{
			System.out.printf("%d = %f ", i , num*i);
			
			if( i%11 == 0 )
			{
				System.out.printf("\n");
			}
			
		}
		
	}
}