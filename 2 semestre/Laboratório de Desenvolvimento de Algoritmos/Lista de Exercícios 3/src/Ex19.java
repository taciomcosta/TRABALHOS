//Importando Scanner
import java.util.Scanner;

public class Ex19 {

	public static void main(String[] args){
		
		//Instanciando Scanner
		Scanner ent = new Scanner(System.in);
		
		System.out.println("Sequência de Frações\n\n");
		
		//vars
		int n, i;
		double n1=2, n2=3, nAux, d1=1, d2=2, dAux;
		
		//Entrada
		System.out.print("Digite a quantidade de frações a serem somadas (>2): ");
		n = ent.nextInt();
		
		//Processamento
		System.out.printf("Soma = ");
		System.out.printf("%.0f/%.0f ", n1, d1);
		System.out.printf(", %.0f/%.0f ", n2, d2);
		for( i=3; i<=n; i++ )
		{
			nAux = n2;
			dAux = d2;
			n2 += d2;
			d2 += d1;
			n1 = nAux;
			d1 = dAux;
			
			System.out.printf(", %.0f/%.0f ", n2, d2);
		
		}
		
	}
}
