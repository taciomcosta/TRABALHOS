//Importando Scanner
import java.util.Scanner;

public class EquacaoQuadratica{
	
	public static void main(String[] args){
		
	//Instanciando Scanner
	Scanner input = new Scanner(System.in);
	
	//vars
	double a, b, c, delta, x1, x2;
	
	System.out.println("\t\t\tEquacação Quadrática\n\n");
	
	//Entradas
	System.out.print("Insira o coeficiente A: ");
	a = input.nextDouble();
	
	System.out.print("Insira o coeficiente B: ");
	b = input.nextDouble();
	
	System.out.print("Insira o coefieciente C: ");
	c = input.nextDouble();
	
	//Processamento e Saída
	delta = Math.pow(b, 2) - 4 * a * c;
	
	if ( delta < 0 )
		
		System.out.println("Não existem raízes reais para a equação");
	
	else if ( delta == 0)
	{
		x1 = (-b + Math.sqrt(delta)) / ( 2 * a );
		System.out.println("x = " + x1);
	}		
	else
	{
		x1 = ( -b - Math.sqrt(delta) ) / ( 2 * a );
		x2 = ( -b + Math.sqrt(delta) ) / ( 2 * a );
		System.out.println("x1 = " + x1);
		System.out.println("x2 = " + x2);
		
	}
	
	
			
			
	}
}