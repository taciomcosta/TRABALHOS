//Importando Scanner
import java.util.Scanner;

public class FatorialNumeros{
	
	public static void main(String[] args){
		
		//Instanciando Scanner
		Scanner ent = new Scanner(System.in);
		
		System.out.println("Fatorial de v�rios n�meros\n\n");
		
		//vars
		int n, fat, i;//Inicializar o fat=1 aqui somente, daria erro
		
		//Entrada
		System.out.print("Insira um n�mero inteiro positivo, ou < 1 para terminar: ");
		n = ent.nextInt();
		
		while(n > 1){
			
			//Processamento
			fat = 1;
			for(i=1; i<=n; i++)
				fat *= i;
			
			//Sa�da
			System.out.printf("%d! = %d\n", n, fat);
			
			//Entrada
			System.out.print("Insira um n�mero inteiro positivo, ou < 1 para terminar: ");
			n = ent.nextInt();
				
			
		}
		
	}
}