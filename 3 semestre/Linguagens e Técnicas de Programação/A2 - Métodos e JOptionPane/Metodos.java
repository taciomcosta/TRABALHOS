import javax.swing.JOptionPane;
import javax.swing.JFrame;

public class Metodos {
	public static void main(String[] args) 
	{
		
		//JOptionPane.showMessageDialog(<componente>, <mensagem>, <título>, <tipo da mensagem>);
		JOptionPane.showMessageDialog(null, "Hello, World!", "Mensagem", JOptionPane.WARNING_MESSAGE);
		
		
		
	}
	
	public static int somar(int a, int b)
	{
		int res;
		res = a + b;
		return res;
	}
	
	public static int subtrair(int a, int b)
	{
		return a - b;
	}
	
	public static int multiplicar(int a, int b)
	{
		return a * b;
	}
	
	public static int dividir(int a, int b)
	{
		return a / b;
	}
	
	
}
