//Importando a classe Scanner
import java.util.Scanner;

public class CustoConsumidor{
	
	public static void main(String[] args){
		
//		Instanciando Scanner
		Scanner input = new Scanner(System.in);
		
//		vars
		double custoFabrica, custoConsumidor, impostos, pDistribuidor;
		
		System.out.println("\t\t\tCusto ao Consumidor\n\n");
		
//		Entrada
		System.out.print("Insira o custo de fábrica do veículo: R$ ");
		custoFabrica = input.nextDouble();
		
//		Processamento
		
		//Definindo o valor da porcentagem do distribuidor e dos impostos 
		if ( custoFabrica <= 12000 )
		{
			pDistribuidor = custoFabrica * 0.05;
			impostos = custoFabrica * 0;
		}
		else if ( custoFabrica <= 25000 )
		{
			pDistribuidor = custoFabrica * 0.1;
			impostos = custoFabrica * 0.15;
		}
		else
		{
			pDistribuidor = custoFabrica * 0.15;
			impostos = custoFabrica * 0.2;
		}
		
		custoConsumidor = custoFabrica + pDistribuidor + impostos;
			 
//		Saída
		System.out.printf("Custo ao consumidor: R$ %.2f", custoConsumidor);
		
		
	}
}