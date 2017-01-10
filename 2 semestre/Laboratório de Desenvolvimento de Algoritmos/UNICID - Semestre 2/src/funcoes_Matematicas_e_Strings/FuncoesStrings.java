package funcoes_Matematicas_e_Strings;
import java.util.Scanner;
public class FuncoesStrings {
	public static void main(String[] args){
//		Instanciando Scanner
		Scanner ent = new Scanner(System.in);
		
		System.out.println("Digite uma mensagem");
		String msg = ent.nextLine();
		
		System.out.println(msg.length());
		System.out.println(msg.charAt(0));
		System.out.println(msg.toUpperCase());
		System.out.println(msg.toLowerCase());
		System.out.println(msg.substring(2,3));
		System.out.println(msg.trim());
		System.out.println(msg.replace("a","8"));
		System.out.println(msg.valueOf(8));
		System.out.println(msg.indexOf("a",1));
		
	}
}
