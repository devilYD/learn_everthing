package cn.yd.veiw;

import java.awt.Color;
import javax.swing.JFrame;

public class Frame extends JFrame{
    public Frame() {
        super("First_Frame");
        setSize(1000,800);
        setLocation(500,100);
        setBackground(Color.WHITE);
        setResizable(false);
        setVisible(true);
        setDefaultCloseOperation(EXIT_ON_CLOSE);
    }
    
}
