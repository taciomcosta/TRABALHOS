//Importando Scanner
import java.util.Scanner;

public class Ex21 {
	
	public static void main(String[] args){
		
	//Instanciando Scanner
	Scanner ent = new Scanner(System.in);
	
	//vars
	double horasTrabalhadas, valorSalMinimo, horasExtrasTrabalhadas, salario;
		
	
	System.out.println("Salário a receber\n\n");
	
	//Entrada	
	System.out.print("Insira o quantidade de horas trabalhadas: ");
	horasTrabalhadas = ent.nextDouble();
	
	System.out.print("Insira a quantidade de horas extras trablhadas: ");
	horasExtrasTrabalhadas = ent.nextDouble();
	
	System.out.print("Insira o valor do salário mínimo: ");
	valorSalMinimo = ent.nextDouble();
	
	//Processamento	
	salario = (horasTrabalhadas * valorSalMinimo/8) + (horasExtrasTrabalhadas * valorSalMinimo/4);  
	
	//Saída
	System.out.println("Salário a receber: R$" + salario);
	
	}
}
