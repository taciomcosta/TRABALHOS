//Importando Scanner
import java.util.Scanner;


public class Ex25 {
	
	public static void main(String[] args){
		
	//Instanciando Scanner
	Scanner input = new Scanner(System.in);
	
	//vars
	double horas, minutos, horasConvertidas, totalMin, totalSeg;
	
	System.out.println("Conversão de tempo\n\n");
	
	//Entradas	
	System.out.print("Insira a quantidade de horas: ");
	horas = input.nextDouble();
	
	System.out.print("Insira a quantidade de minutos: ");
	minutos = input.nextDouble();
	
	//Processamento
	horasConvertidas = horas * 60;
	totalMin = horasConvertidas + minutos;
	totalSeg = totalMin * 60;
	
	//Saída
	System.out.println("Horas convertidas em minutos: " + horasConvertidas);
	System.out.println("Total de minutos: " + totalMin);
	System.out.println("TOtal de segundos: " + totalSeg);
	
	
	
	
	}

}
