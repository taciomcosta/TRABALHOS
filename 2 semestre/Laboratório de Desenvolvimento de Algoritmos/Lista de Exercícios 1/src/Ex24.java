//Importando Scanner
import java.util.Scanner;


public class Ex24 {
	
	public static void main(String[] args){
		
	//Instanciando Scanner
	Scanner ent = new Scanner(System.in);
	
	//vars
	double dinheiro, marco, dolar, libra;
	
	
	System.out.println("Conversão de dinheiro\n\n");
	
	//Entrada	
	System.out.print("Insira a quantidade de dinheiro em reais: ");
	dinheiro = ent.nextDouble();
	
	//Processamento
	dolar = dinheiro * 1.8;
	marco = dinheiro * 2;
	libra = dinheiro * 1.57;
	
	//Saída
	System.out.printf("Dólares: %.2f\n", dolar);
	System.out.printf("Marco alemão: %.2f\n", marco);
	System.out.printf("Libras esterlinas: %.2f", libra);
	
	
		
	}

}
