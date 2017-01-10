//Importando Scanner
import java.util.Scanner;

public class Ex3 {

	public static void main(String[] args){
		
		//Instanciando Scanner
		Scanner ent = new Scanner(System.in);
		
		System.out.println("Troca de 8 valores de um vetor\n\n");
		
		//vars
		int v[] = new int[16];
		int i, aux;
		
		//Entrada
		for( i=0; i<16; i++)
		{
			System.out.print("Insira v[" + i + "]: ");
			v[i] = ent.nextInt();
		}
		
		//Processamento
		for( i=0; i<8; i++)
		{
			aux = v[i];
			v[i] = v[i+8];
			v[i+8] = aux;
		}
		
		//Saída
		System.out.println("Vetor com as 8 posições iniciais trocadas pelas finais");
		for( i=0; i<16; i++)
		{
			System.out.printf("%d  ", v[i]);
		}
		
	}
}
