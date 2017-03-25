//Importando Scanner
import java.util.Scanner;

public class Ex2 {

	public static void main(String[] args){
		
		//Instanicando Scanner
		Scanner input = new Scanner(System.in);
		
		//vars
		int num, i;
		
		for( num=0; num<=9; num++ )
		{
			System.out.println("\nTabuada do " + num);
			for( i=0; i<=10; i++ )
			{
				System.out.printf("%d * %d = %d\n", i, num, i*num);
			}
		}
		
	}
}
