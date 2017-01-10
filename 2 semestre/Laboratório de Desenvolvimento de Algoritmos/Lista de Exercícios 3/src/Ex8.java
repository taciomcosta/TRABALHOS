//Importando Scanner
import java.util.Scanner;

public class Ex8 {

	public static void main(String[] args){
		
		//Instanciando Scanner
		Scanner input = new Scanner(System.in);
		
		System.out.println("\n\n");
		
		//vars
		double massaI, massaF;
		int h, m ,s, tempo=0;
		
		//Entrada
		System.out.print("Insira a massa inicial do material, em gramas: ");
		massaF = input.nextDouble();
		
		//Processamento
		massaI = massaF;
		
		while( massaF >= 0.5 )
		{
			massaF /= 2;
			tempo += 50;
		}
		
		h = tempo / 3600;
		m = (tempo%3600) / 60;
		s = (tempo%3600) % 60;
		
		//Saída
		System.out.printf("Massa inicial: %.2f\n", massaI);
		System.out.printf("Massa final: %.2f\n", massaF);
		System.out.printf("Tempo: %dh %dm %ds", h, m, s);
		
		
		
	}
}
