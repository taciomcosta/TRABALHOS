import javax.swing.JOptionPane;

public class CaixasDeDialogo {
	public static void main(String[] args) 
	{
		
		//void JOptionPane.showMessageDialog(<componente>, <mensagem>, <título>, <tipo da mensagem>);
		JOptionPane.showMessageDialog(null, "INFORMAÇÃO", "Mensagem", JOptionPane.INFORMATION_MESSAGE);
		JOptionPane.showMessageDialog(null, "PERGUNTA", "Mensagem", JOptionPane.QUESTION_MESSAGE);
		JOptionPane.showMessageDialog(null, "AVISO", "Mensagem", JOptionPane.WARNING_MESSAGE);
		JOptionPane.showMessageDialog(null, "SEM NADA", "Mensagem", JOptionPane.PLAIN_MESSAGE);
		JOptionPane.showMessageDialog(null, "ERRO", "Mensagem", JOptionPane.ERROR_MESSAGE);
		
		//String JOptionPane.showInputDialog(<componente>, <mensagem>, <título>, <tipo da mensagem>);
		String nome = JOptionPane.showInputDialog("Digite seu nome: ");
		JOptionPane.showMessageDialog(null, "Seu nome é " + nome, "Seu Nome", JOptionPane.INFORMATION_MESSAGE);
		
		//Conversores de tipo: TipoReferencia.parseTipo(x); ou String.valueOf(x);
		int a, b, res;
		a = Integer.parseInt(JOptionPane.showInputDialog("Digite A: "));
		b = Integer.parseInt(JOptionPane.showInputDialog("Digite B: "));
		res = a + b;
		JOptionPane.showMessageDialog(null, a + " + " + b + " = " + res);
		
	}	
}
