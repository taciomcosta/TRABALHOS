//Importando Scanner
import java.util.Scanner;

public class Salarios {

	public static void main(String[] args){
		
		//Instanciando Scanner
		Scanner ent = new Scanner(System.in);
		
		System.out.println("Reajuste Salarial\n\n");
		
		//vars
		double salarios[] = new double[8];
		int i;
		
		//Entradas
		for( i=0; i<8; i++)
		{
			System.out.print("Insira o " + (i+1) + "° salário: R$ ");
			salarios[i] = ent.nextDouble();
		}
		
		//Processamento
		for( i=0; i<8; i++)
		{
			salarios[i] *= 1.12;
		}
		
		//Saída
		System.out.println("\nSalários Reajustados: \n");
		for( i=0; i<8; i++)
		{
			System.out.printf("%d°: R$ %.2f\n", (i+1), salarios[i]);
		}
		
	}
}
