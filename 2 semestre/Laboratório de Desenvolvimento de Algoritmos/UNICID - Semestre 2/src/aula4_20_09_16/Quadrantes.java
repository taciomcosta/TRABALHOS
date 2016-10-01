//	Importando a classe Scanner
import java.util.Scanner;

public class Quadrantes{
	
	public static void main(String[] args){
		
	//Instanciando Scanner
	Scanner input = new Scanner(System.in);
	
	//vars
	double x,y;
	
	System.out.println("\t\t\tQuadrante de um ponto\n\n");
	
	//Entradas
	System.out.print("Insira a abcissa do ponto: ");
	x = input.nextDouble();
	
	System.out.print("Insira a ordenada do ponto: ");
	y = input.nextDouble();
	
	//Processamento e Sa�da
	if ( x==0 && y==0 )
		
		System.out.println("O ponto est� na origem");
	
	else if ( x==0 || y==0 )
		
		System.out.println("O ponto est� em cima de um eixo");
	
	else if ( x>0 && y>0 )
		
		System.out.println("O ponto est� no 1� quadrante");
	
	else if ( x<0 && y>0 )
		
		System.out.println("O ponto est� no 2� quadrante");
	
	else if ( x<0 && y<0 )
		
		System.out.println("O ponto est� no 3� quadrante");
	
	else
		
		System.out.println("O ponto est� no 4� quadrante");
		
		
	}
}