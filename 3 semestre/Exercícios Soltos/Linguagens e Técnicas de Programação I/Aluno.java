import javax.swing.JOptionPane;

public class Aluno {
    public static void main(String[] args)
    {
        // STATEMENTS
        int n, i, j;

        // INPUT
        n = getN();
        // PROCESS
        int m[][] = new int[n][n];

        for (i = 0; i < n; i++) {
            for (j = 0; j < n; j++) {
                if (j == 0)
                    m[i][j] = 1;
                else if (j <= i)
                    m[i][j] = m[i-1][j-1] + m[i-1][j];
                else
                    m[i][j] = 0;
            }
        }

        // OUTPUT
        String s = "";
        for (i = 0; i < n; i++) {
            for (j = n-1; j >= 0; j--) {
                if (m[i][j] != 0)
                    s += m[i][j] + " ";
                else
                    s += " ";
            }
            s += "\n";
        }
        JOptionPane.showMessageDialog(null, s, "RESULTADO", JOptionPane.PLAIN_MESSAGE);
    }

    public static int getN()
    {
        return Integer.parseInt(JOptionPane.showInputDialog(null, "Insira o tamanho", "Triângulo de Pascal", JOptionPane.INFORMATION_MESSAGE));

    }

    public static void initialize()
    {

    }
}
