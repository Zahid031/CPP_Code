import java.awt.Color;
import java.awt.Graphics;

import javax.accessibility.AccessibleKeyBinding;
import javax.swing.JFrame;
import javax.swing.JPanel;
import javax.swing.SwingUtilities;

public class Smiley extends JPanel {

    @Override
    public void paintComponent(Graphics g) {
        super.paintComponent(g);
        g.setColor(Color.GREEN);
        g.fillOval(30, 20, 180, 200);
        

        // draw Eyes
        g.setColor(Color.RED);
        g.fillOval(58, 65, 50, 30);
        g.fillOval(132, 65, 50, 30);
        //draw Nose
        //g.fillOval(112, 95, 20, 50);

        // draw Mouth
        g.fillOval(75, 130, 100, 55);
        //eyes black part
        g.setColor(Color.BLACK);
        g.fillOval(77, 72, 10, 10);
        g.fillOval(150, 72, 10, 10);

        //adding smile
        g.setColor(Color.GREEN);
       
        g.fillRect(50, 140, 140, 30);
        g.fillOval(40, 120, 120, 40);
        // addding nose
        g.setColor(Color.RED);
        g.fillOval(112, 95, 20, 50);
        g.fillOval(108, 132, 30, 20);
    }

    public static void main(String[] args) {
        Smiley smily = new Smiley();
        JFrame app = new JFrame();
        app.add(smily);
        app.setSize(300, 300);
        app.setVisible(true);
    }
}