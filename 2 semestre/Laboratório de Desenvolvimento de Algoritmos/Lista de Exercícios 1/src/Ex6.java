//Importando Scanner
import java.util.Scanner;

public class Ex6{	
	public static void main(String[] args){
		
	//Instanciando Scanner
	Scanner input = new Scanner(System.in);
	
	//vars
	double salarioFixo, valorVendas, comissao, salarioTotal;
	
	System.out.println("Salário de um funcionário\n\n");
	
	//Entradas
	System.out.print("Insira o salário fixo: ");
	salarioFixo = input.nextDouble();
	
	System.out.print("Insira o valor das vendas: ");
	valorVendas = input.nextDouble();
	
	//Processamento
	comissao = valorVendas * 0.04;
	salarioTotal = salarioFixo + comissao;
	
	//Saída
	System.out.println("Comissão a receber: R$" + comissao);
	System.out.printf("Salário total a receber: R$ %.2f", salarioTotal);
		
	}
}