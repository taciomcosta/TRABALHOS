//Importando Scanner
import java.util.Scanner;

public class Ex7{
	
	public static void main(String[] args){
		
	//Instanciando Scanner
	Scanner ent = new Scanner(System.in);
	
	System.out.println("Reajuste Salarial\n\n");
	
	//vars
	double salarioAtual, novoSalario;
	
	//Entrada
	System.out.print("Insira o salário do funcionário: ");
	salarioAtual = ent.nextDouble();
	
	//Processamento
	if ( salarioAtual < 500 )
	{
		novoSalario = salarioAtual * 1.3;
		System.out.printf("Salário com reajuste: R$%.2f", novoSalario);
	}
	else
		System.out.println("O funcinário não possui direito ao reajuste salarial");
		
	}
}