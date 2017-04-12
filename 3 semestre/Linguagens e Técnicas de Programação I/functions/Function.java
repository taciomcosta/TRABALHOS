package functions;

import javax.swing.JFrame;

public class Function
{
        public static void main(String[] args) {
                JFrame frame = new JFrame();
                Draw draw = new Draw();

                frame.setSize(1000,1000);
                frame.setDefaultCloseOperation(JFrame.EXIT_ON_CLOSE);
                frame.setVisible(true);
                frame.add(draw);
        }
}
