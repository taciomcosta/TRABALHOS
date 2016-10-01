//Importando Scanner
import java.util.Scanner;

public class Ex14 {
	
	public static void main(String[] args){
		
	//Instanciando Scanner
	Scanner input = new Scanner(System.in);
	
	System.out.println("Novo salário de um funcionário \n\n");
	
	//vars
	double salAtual, novoSal;
	
	//Entrada
	System.out.print("Insira o salário atual do funcionário: R$ ");
	salAtual = input.nextDouble();
	
	//Processamento
	if ( salAtual <= 300 )
		novoSal = salAtual * 1.5;
	else if ( salAtual <= 500 )
		novoSal = salAtual * 1.4;
	else if ( salAtual <= 700 )
		novoSal = salAtual * 1.3;
	else if ( salAtual <= 800 )
		novoSal = salAtual * 1.2;
	else if ( salAtual <= 1000 )
		novoSal = salAtual * 1.1;
	else
		novoSal = salAtual * 1.05;
	
	//Saída
	System.out.printf("Novo salário: R$%.2f", novoSal);
	
	}

}
