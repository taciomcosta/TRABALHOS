import java.util.Scanner;

public class Tabuada{
	
	public static void main(String[] args){
		
	//Instanciando Scanner
	Scanner ent = new Scanner(System.in);
	
	System.out.println("Tabuada de um n�mero inteiro\n\n");
	
	//vars
	int n, i;
	
	//Entrada
	System.out.print("Insira um n�mero inteiro: ");
	n = ent.nextInt();
	
	//Processamento e Sa�da
	for( i=1; i<=10; i++ )
		System.out.println(i + " x " + n + " = " + n*i);
		
	}
}