//Importando Scanner
import java.util.Scanner;

public class IdadePeso {

	public static void main(String[] args){
		
		//Instanciando Scanner
		Scanner input = new Scanner(System.in);
		
		System.out.println("Média de idades e pessoas com mais de 90Kg (entre 7 pessoas)");
		
		//vars
		int idade, qt90=0, i=1;//qt90 é um contador
		double peso, mediaIdade=0;//mediaIdade, a princípio, é um acumulador
		
		//Entrada
		while ( i <= 7)
		{
			System.out.printf("Pessoa %d, insira seu peso em Kg: ", i);
			peso = input.nextDouble();
			System.out.printf("Pessoa %d, insira sua idade: ", i);
			idade = input.nextInt();
			
			//Se a pessoa tiver mais que 90Kg, incrementa 1.
			if( peso > 90 )
				qt90++;
			
			//Soma a idade da pessoa com a idade das outras pessoas
			mediaIdade += idade;
			
			//Incremento do While
			i++;
			
		}
		
		//Processamento
		mediaIdade /= 7;
		
		System.out.println("Pessoas com mais de 90Kg: " + qt90);
		System.out.printf("Média das idades: %.1f", mediaIdade);
		
		
		
	}
}
