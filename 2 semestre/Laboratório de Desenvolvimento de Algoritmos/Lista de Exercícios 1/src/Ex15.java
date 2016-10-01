//Importando Scanner
import java.util.Scanner;

public class Ex15 {

	public static void main(String[] args){
		
	//Instanciando Scanner
	Scanner input = new Scanner(System.in);
	
	//vars
	double salarioInicial, conta1, conta2, totalPagar, salarioRestante;
	
	System.out.println("Salário restante\n\n");
	
	//Entrada
	System.out.println("Insira o salário: R$ ");
	salarioInicial = input.nextFloat();
	
	System.out.print("Insira o valor da 1° conta: R$ ");
	conta1 = input.nextDouble();
	
	System.out.print("Insira o valor da 2° conta: R$ ");
	conta2 = input.nextDouble();
		
	//Processamento
	totalPagar = ( conta1 + conta2 ) * 1.02;
	salarioRestante = salarioInicial - totalPagar;
	
	//Saída
	System.out.println("Total a pagar: R$ " + totalPagar);
	System.out.printf("Salário restante: R$ %.2f", salarioRestante);
	
		
	}
}
