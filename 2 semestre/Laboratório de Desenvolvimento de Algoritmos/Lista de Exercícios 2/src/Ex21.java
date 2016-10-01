//Importando Scanner
import java.util.Scanner;

public class Ex21 {

	public static void main(String[] args){
		
		//Instanciando Scanner
		Scanner ent = new Scanner(System.in);
		
		System.out.println("Procedência de um produto\n\n");
		
		//vars
		float preco;
		int codigo;
		
		//Entrada
		System.out.print("Insira o preço do produto: R$ ");
		preco = ent.nextFloat();
		
		System.out.print("Insira o código de procedência do produto: ");
		codigo = ent.nextInt();
		
		//Processamento
		if ( codigo == 1 )
			System.out.println("Procedência: Sul");
		else if ( codigo == 2 )
			System.out.println("Procedência: Norte");
		else if ( codigo == 3 )
			System.out.println("Procedência: Leste");
		else if ( codigo == 4 )
			System.out.println("Procedência: Oeste");
		else if ( codigo==5 || codigo==6 )
			System.out.println("Procedência: Nordeste");
		else if ( codigo>=7 && codigo<=9 )
			System.out.println("Procedência: Sudeste");
		else if ( codigo>=10 && codigo<=20 )
			System.out.println("Procedência: Centro-oeste");
		else
			System.out.println("Procedência: Nordeste");
		
		
		
	}
}
