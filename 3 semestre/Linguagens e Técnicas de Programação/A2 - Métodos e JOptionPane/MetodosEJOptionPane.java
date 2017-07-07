import javax.swing.JOptionPane;

public class MetodosEJOptionPane {
	public static void main(String[] args) {
		
		infoMessage("Mensagem", "Hello, World!");

	}
	
	public static void infoMessage(String title, String message)
	{
		JOptionPane.showMessageDialog(null, message, title, JOptionPane.INFORMATION_MESSAGE);
	}

}
