//Importando Scanner
import java.util.Scanner;

public class MultiplicidadeNumero{
	
	public static void main(String[] args){
		
		//Instanciando Scanner
		Scanner ent = new Scanner(System.in);
		
		System.out.println("Multiplicidade de um n�mero\n\n");
		
		//vars
		int n, primo=2, mult;
		
		//Entrada
		System.out.print("Insira um n�mero:");
		n = ent.nextInt();
		
		while(n > 1)
		{
			if(n%primo == 0)
			{
				mult = 0;
				//Enquanto n for divis�vel por primo
				while(n%primo == 0)
				{
					mult++;
					System.out.println(n + " | " + primo);
					n /= primo;
				}
				if(mult != 0)
					System.out.println("Multiplicidade " + primo + " = " + mult);
				
			}
			else
				primo++;
		}
		
	}
}