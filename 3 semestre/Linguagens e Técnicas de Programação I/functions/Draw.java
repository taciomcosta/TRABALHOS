package functions;

import java.awt.Graphics;
import javax.swing.JPanel;

public class Draw extends JPanel
{
        @Override
        public void paintComponent(Graphics g)
        {
                super.paintComponent(g);

                int width, height, x0, fx0, x1, fx1;
                width = getWidth();
                height = getHeight();

                x0 = 0;
                fx0 = 1;

                for (x1 = 1; x1 < width; x1++) {
                        fx1 = (int) Math.pow(2, x1);
                        g.drawLine(x0, fx0, x1, fx1);
                        x0 = x1;
                        fx0 = fx1;
                }
        }
}
