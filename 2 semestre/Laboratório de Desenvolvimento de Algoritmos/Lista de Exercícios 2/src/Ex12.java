//Importando Scanner
import java.util.Scanner;

public class Ex12 {
	
	public static void main(String[] args){
		
	//Instanciando Scanner
	Scanner input = new Scanner(System.in);
	
	System.out.println("Salário a receber\n\n");
	
	//vars
	double salarioAtual, gratificacao, imposto, salarioFinal;
	
	//Entrada
	System.out.print("Insira o salário do funcionário: R$ ");
	salarioAtual = input.nextDouble();
	
	//Processamento
	imposto = salarioAtual * 0.07;
	
	if ( salarioAtual <= 350 )
		gratificacao = 100;
	else if ( salarioAtual <= 600 )
		gratificacao = 75;
	else if ( salarioAtual <= 900 )
		gratificacao = 50;
	else
		gratificacao = 35;
	
	salarioFinal = salarioAtual + gratificacao - imposto;
	
	//Saída
	System.out.printf("Salário a receber: R$ %.2f", salarioFinal);
		
	}

}
