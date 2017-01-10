package aula3_13_09_16;

//Importando Scanner
import java.util.Scanner;

public class ReajusteSalarial {
	public static void main(String[] args){
		
//		Instanciando Scanner
		Scanner ent = new Scanner(System.in);
		
//		vars
		double salarioInicial, salarioFinal;
		
		System.out.println("\t\tReajuste Salarial\n\n");
		
//		Entrada
		System.out.print("Insira o salario atual: ");
		salarioInicial = ent.nextDouble();
		
//		Processamento
		if ( salarioInicial < 1500 )
			salarioFinal = salarioInicial * 1.3;
		else
			salarioFinal = salarioInicial;
		
//		Sa�da
		System.out.print("Sal�rio Final: " + salarioFinal);
		
	}
}
