//Importando Scanner
import java.util.Scanner;

public class Ex13 {
	
	public static void main(String[] args){
		
	//Instanciando Scanner
	Scanner ent = new Scanner(System.in);
	
	System.out.println("Novo preço de um produto e classificação\n\n");
	
	//vars
	float preco;
	
	//Entrada
	System.out.print("Insira o preço atual do produto: R$ ");
	preco = ent.nextFloat();
	
	//Processamento
	if( preco <= 50 )
		preco *= 1.05;
	else if ( preco <= 100 )
		preco *= 1.1;
	else
		preco *= 1.15;
	
	//Saída
	System.out.println("Novo preço: R$ " + preco);
	
	if ( preco <= 80 )
		System.out.println("Classificação: Barato");
	else if ( preco <= 120 )
		System.out.println("Classificação: Normal");
	else if ( preco <= 200 )
		System.out.println("Classificação: Caro");
	else
		System.out.println("Classificação: Muito Caro");
		
	}

}
