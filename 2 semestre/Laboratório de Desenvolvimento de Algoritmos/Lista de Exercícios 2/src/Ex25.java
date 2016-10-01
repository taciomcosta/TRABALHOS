//Importando Scanner
import java.util.Scanner;

public class Ex25 {

	public static void main(String[] args){
		
		//Instanciando Scanner
		Scanner ent = new Scanner(System.in);
		
		System.out.println("Gratificação Natalina\n\n");
		
		//vars
		float hExtra, hFalta, H;
		
		//Entrada
		System.out.print("Insira a quantidade de horas extras trabalhadas: ");
		hExtra = ent.nextFloat();
		
		System.out.print("Insira a quantidade de horas-falta trabalhadas: ");
		hFalta = ent.nextFloat();
		
		//Processamento
		H = hExtra - ( 2*hFalta/3 );
		
		if ( H < 600 )
			System.out.println("Gratificação: R$ 100,00");
		else if ( H < 1200 )
			System.out.println("Gratificação: R$ 200,00");
		else if ( H < 1800 )
			System.out.println("Gratificação: R$ 300,00");
		else if ( H < 2400 )
			System.out.println("Gratificação: R$ 400,00");
		else
			System.out.println("Gratificação: R$ 500,00");
		
	}
}
