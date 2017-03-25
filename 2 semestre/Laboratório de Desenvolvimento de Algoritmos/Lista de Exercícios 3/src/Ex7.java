//Importando Scanner
import java.util.Scanner;

public class Ex7 {

	public static void main(String[] args){
		
		//Instanciando Scanner
		Scanner ent = new Scanner(System.in);
		
		System.out.println("Números que divididos por 9 têm resto igual a 6\n\n");
		
		//vars
		int num;
		
		for(num=1000; num<=1999; num++)
		{
			if( num%9 == 6 )
				System.out.println(num + " <- divisível por 9 e resta 6");
			else
				System.out.println(num);
		}
		
	}
}
