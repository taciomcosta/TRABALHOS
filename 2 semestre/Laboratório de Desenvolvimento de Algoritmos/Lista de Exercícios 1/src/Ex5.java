//Importando a classe Scanner
import java.util.Scanner;

public class Ex5{
	
	public static void main(String[] args){
		
	//Instanciando Scanner
	Scanner ent = new Scanner(System.in);
	
	//vars
	double precoAtual, novoPreco;
	
	System.out.print("Preço de um produto com descconto de 10%\n\n");
	
	//Entrada
	System.out.print("Insira o preço atual do produto: ");
	precoAtual = ent.nextDouble();
	
	//Processamento
	novoPreco = precoAtual * 0.9;
	
	//Saída	
	System.out.println("Preço com desconto: R$ " + novoPreco);
		
	}
}