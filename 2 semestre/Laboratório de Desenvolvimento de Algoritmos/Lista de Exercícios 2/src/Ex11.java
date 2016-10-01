//Importando Scanner
import java.util.Scanner;

public class Ex11 {

	public static void main(String[] args){
		
	//Instanciando Scanner
	Scanner ent = new Scanner(System.in);
		
	System.out.println("Aumento Salarial\n\n");
	
	//vars
	double salarioAtual, aumento, novoSalario;
	
	//Entrada
	System.out.print("Insira o salário atual do funcionário: R$ ");
	salarioAtual = ent.nextDouble();
	
	//Processamento
	if ( salarioAtual <= 300 )
		aumento = salarioAtual * 0.15;
	else if ( salarioAtual <= 600 )
		aumento = salarioAtual * 0.1;
	else if ( salarioAtual <= 900 )
		aumento = salarioAtual * 0.05;
	else
		aumento = 0;
	
	novoSalario = salarioAtual + aumento;
	
	//Saída
	System.out.println("Aumento: R$ " + aumento);
	System.out.printf("Novo salário: R$ %.2f", novoSalario);
	
	}
}
