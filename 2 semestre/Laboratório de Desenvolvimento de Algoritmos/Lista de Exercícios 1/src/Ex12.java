//Importando Scanner
import java.util.Scanner;

public class Ex12 {

	public static void main(String[] args){
		
	//Instanciando Scanner
	Scanner ent = new Scanner(System.in);
	
	//vars
	double salarioFuncionario, salarioMinimo, quantidadeSalMinimo;
	
	System.out.println("Quantidaded de salários mínimos\n\n");
	
	//Entradas
	System.out.print("Insira o valor do salário mínimo: R$ ");
	salarioMinimo = ent.nextDouble();
	
	System.out.print("Insira o valor do salário do funcionáiro: R$ ");
	salarioFuncionario = ent.nextDouble();
	
	//Processamento
	quantidadeSalMinimo = salarioFuncionario / salarioMinimo;
	
	//Saída
	System.out.println("O funcionário ganha " + quantidadeSalMinimo + " salário(s) mínimos ");
		
	}
}
