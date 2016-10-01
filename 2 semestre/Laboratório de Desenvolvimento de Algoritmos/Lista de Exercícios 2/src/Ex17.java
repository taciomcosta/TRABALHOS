//Importando Scanner
import java.util.Scanner;

public class Ex17 {
	
	public static void main(String[] args){
		
		//Instanciando Scanner
		Scanner ent = new Scanner(System.in);
		
		System.out.println("Verificação de Senha\n\n");
		
		//vars
		int senha;
		
		//Entrada
		System.out.print("Insira a senha para acessar o sistema: ");
		senha = ent.nextInt();
		
		//Processamento
		if ( senha == 4531 )
			System.out.println("Acesso Permitido!\n");
		else
			System.out.println("Acesso Negado!\n");
		
	}

}
