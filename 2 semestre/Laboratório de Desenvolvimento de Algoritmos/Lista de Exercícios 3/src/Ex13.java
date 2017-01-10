//Importando Scanner
import java.util.Scanner;

public class Ex13 {

	public static void main(String[] args){
		
		//Instanciando Scanner
		Scanner ent = new Scanner(System.in);
		
		System.out.println("Médias\n\n");
		
		//vars
		double media, menorMedia, maiorMedia, mediaTurma=0, alunos=0;
		
		//Entrada
		System.out.print("Digite a média do aluno: ");
		media = ent.nextDouble();
		
		menorMedia = media;
		maiorMedia = media;
		
		while ( media >= 0)
		{
			//Processamento
			alunos++;
			mediaTurma += media;
			
			if( media < menorMedia )
				menorMedia = media;
			else if ( media > maiorMedia)
				maiorMedia = media;
			
			//Entrada
			System.out.print("Digite a média do aluno: ");
			media = ent.nextDouble();
				
		}
		
		mediaTurma /= alunos;
		
		//Saída
		System.out.println("Menor média: " + menorMedia);
		System.out.println("Maior média: " + maiorMedia);
		System.out.println("Média da turma: " + mediaTurma);
		
		
		
	}
}
