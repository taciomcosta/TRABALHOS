//Instanciando Scanner
import java.util.Scanner;

public class Ex9{
	
	public static void main(String[] args){
		
	//Instanciando Scanner
	Scanner ent = new Scanner(System.in);
	
	System.out.println("Crédito Especial\n\n");
	
	//vars
	double saldo, credito;
	
	//Entrada
	System.out.print("Insira o saldo médio do cliente: ");
	saldo = ent.nextDouble();
	
	//Processamento
	if ( saldo <= 200 )
		credito = saldo * 0.1;
	else if ( saldo <= 300 )
		credito = saldo * 0.2;
	else if ( saldo <= 400 )
		credito = saldo * 0.25;
	else
		credito = saldo * 0.3;
	
	//Saída
	System.out.printf("Saldo: R$ %.2f\nCrédito: R$%.2f", saldo, credito);
		
	}
}