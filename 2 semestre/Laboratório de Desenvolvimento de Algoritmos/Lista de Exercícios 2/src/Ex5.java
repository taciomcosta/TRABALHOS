//Importando Scanner
import java.util.Scanner;

public class Ex5{
	
	public static void main(String[] args){
		
	//Instanciando Scanner
	Scanner ent = new Scanner(System.in);
	
	System.out.println("Operação entre dois números\n\n");
	
	//vars
	int operacao;
	double n1, n2, res=0;
	
	//Entradas
	System.out.print("Insira o 1° número: ");
	n1 = ent.nextDouble();
	
	System.out.print("Insira o 2° número: ");
	n2 = ent.nextDouble();

	System.out.println("\nOpções:");
	System.out.println("1 - Média");
	System.out.println("2 - Diferença do maior pelo menor");
	System.out.println("3 - Produto");
	System.out.println("4 - Divisão do primeiro pelo segundo");
	System.out.print("Insira o número da operação desejada: ");
	operacao = ent.nextInt();
	
	//Processamento
	if ( operacao == 1 )
		res = ( n1 + n2 ) / 2;
	else if ( operacao == 2 )
	{
		if ( n1 >= n2 )
			res = n1 - n2;
		else
			res = n2 - n1;
	}
	else if ( operacao == 3 )
		res = n1 * n2;
	else if ( operacao == 4 )
		if( n2 != 0)
			res = n1 / n2;
		else
			System.out.println("Impossível dividir por zero");
	else
		System.out.println("Operacação inválida");
	
	System.out.printf("Resultado = %.2f", res);
		
		
	}
}