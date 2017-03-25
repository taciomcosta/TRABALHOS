//Importando Scanner
import java.util.Scanner;

public class Ex9 {

	public static void main(String[] args){
		
		//Instanciando Scanner
		Scanner ent = new Scanner(System.in);
		
		System.out.println("'Frase' sem Espaços\n\n");
		
		//vars
		char nums[] = new char[20];
		int i, j;
		
		//Entrada
		System.out.println("Digite uma frase de até 20 caracteres(um por vez): ");
		for( i=0; i<20; i++)
		{
			nums[i] = ent.next(".").charAt(0);
		}
		
		//Processamento
		for(i=0; i<20; i++)
		{
			if(nums[i] == ' ')
			{
				for( j=i; j<19; j++)
				{
					nums[j] = nums[j+1];
				}
				
			}
		}
		
		//Saída
		System.out.println("\n\nVetor Resultante: ");
		for( i=0; i<20; i++)
		{
			System.out.printf("%c", nums[i]);
		}
		
		
	}
}
