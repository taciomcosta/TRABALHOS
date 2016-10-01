//Importando Scanner
import java.util.Scanner;

public class TempoSegundos{
	public static void main(String[] args){
		
//		Instanciando Scanner
		Scanner ent = new Scanner(System.in);
		
//		vars
		int tempo, horas, minutos, segundos;
		
		System.out.println("\t\tTempo em horas, minutos e segundos\n\n");
		
//		Entrada
		System.out.print("Insira o tempo em segundos: ");
		tempo = ent.nextInt();
		
//		Processamneto
		horas = tempo / 3600;
		minutos = ( tempo % 3600 ) / 60;
		segundos = ( tempo % 3600 ) % 60;
		
//		Saída
		System.out.printf("Tempo:%dh %dmin %ds", horas, minutos, segundos);
		
		
	}
}