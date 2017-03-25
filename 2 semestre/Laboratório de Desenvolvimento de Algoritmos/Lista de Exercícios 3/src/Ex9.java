//Importando Scanner
import java.util.Scanner;

public class Ex9{
	
	public static void main(String[] args){
		
		//Instanciando Scanner
		Scanner ent = new Scanner(System.in);
		
		System.out.println("Sequência de Fibonacci\n\n");
		
		//vars
		int n1=1, n2=1, aux, num, i;
		
		//Entrada
		System.out.print("Insira a quantidade de termos: ");
		num = ent.nextInt();
		
		//Processamento
		for( i=1; i<=num; i++ )
		{
			System.out.println(n1);
			aux = n2;
			n2 += n1;
			n1 = aux;
		}
		
	}
}