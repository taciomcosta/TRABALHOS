//Importando Scanner
import java.util.Scanner;

public class ImprimindoVetor {

	public static void main(String[] args){
		
		//Instanciando Scanner
		Scanner ent = new Scanner(System.in);
		
		System.out.println("Lendo e imprimindo um Vetor de 10 posições\n");
		
		//vars
		//<tipo> <identificador>[] = new <tipo>[ <tamanho> ]
		int v[] = new int[10];
		int i;
		
		//Rotina de Leitura
		for( i=0; i<10; i++)
		{
			System.out.print("Digite v[" + i + "]: ");
			v[i] = ent.nextInt();
		}
		
		//Rotina de Impressão
		System.out.println("V:\n");
		for( i=0; i<10; i++)
		{
			System.out.println(v[i]);
		}
		
	}
}
