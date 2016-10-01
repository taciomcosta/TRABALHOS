//Importando Scanner
import java.util.Scanner;

public class Ex22 {

	public static void main(String[] args){
		
		//Instanciando Scanner
		Scanner input = new Scanner(System.in);
		
		System.out.println("Grupo de risco\n\n");
		
		//vars
		int idade;
		float peso;
		
		//Entrada
		System.out.print("Insira sua idade: ");
		idade = input.nextInt();
		
		System.out.print("Insira seu peso: ");
		peso = input.nextFloat();
		
		//Processamento
		if ( peso<=60 )
			if( idade<20 )
				System.out.println("Grupo de risco: 9");
			else if ( idade>=20 && idade<50 )
				System.out.println("Grupo de risco: 6");
			else
				System.out.println("Grupo de risco: 3");
		else if ( peso>60 && peso<=90 )
			if( idade<20 )
				System.out.println("Grupo de risco: 8");
			else if ( idade>=20 && idade<50 )
				System.out.println("Grupo de risco: 5");
			else
				System.out.println("Grupo de risco: 2");
		else
			if( idade<20 )
				System.out.println("Grupo de risco: 7");
			else if ( idade>=20 && idade<50 )
				System.out.println("Grupo de risco: 4");
			else
				System.out.println("Grupo de risco: 1");
			
		
		
		
	}
}
