//Importando Scanenr
import java.util.Scanner;

public class Ex10{
	
	public static void main(String[] args){
		
	//Instanciando Scanner
	Scanner input = new Scanner(System.in);
	
	System.out.println("Custo ao Consumidor\n\n");
	
	//vars
	double cFabrica, imposto, pDistribuidor, cConsumidor;
	
	//Entradas
	System.out.print("Insira o custo de fábrica do automóvel: ");
	cFabrica = input.nextDouble();
	
	//Processamento
	if ( cFabrica <= 12000 )
	{
		pDistribuidor = cFabrica * 0.05;
		imposto = 0;
	}
	else if ( cFabrica <= 25000 )
	{
		pDistribuidor = cFabrica * 0.1;
		imposto = cFabrica * 0.15;
	}
	else 
	{
		pDistribuidor = cFabrica * 0.15;
		imposto = cFabrica * 0.20;
	}
	cConsumidor = cFabrica + pDistribuidor + imposto;
	
	//Saída
	System.out.printf("Custo ao consumidor: R$ %.2f", cConsumidor);
	
}
	}