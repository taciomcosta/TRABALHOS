//Número Triangular: 6 é trinagular, pois é produto de três números consecutivos

//Importando Scanner
import java.util.Scanner;

public class NumeroTriangular{
	
	public static void main(String[] args){
		
		//Instanciando Scanner
		Scanner ent = new Scanner(System.in);
		
		System.out.println("Número Triangular\n\n");
		
		//vars
		int num, aux=1, soma;
		
		//Entrada
		System.out.print("Insira um número natural: ");
		num = ent.nextInt();
		soma = aux * (aux+1) * (aux+2);
		while( soma < num )
		{
			aux++;
			soma = aux * (aux+1) * (aux+2);
		}
		
		if( num == soma )
		{
			System.out.printf("%d é triangular",num);
		}
		else
			System.out.printf("%d é triangular",num);
	}
}