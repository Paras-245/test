/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */
package assignment;

/**
 *
 * @author elliot
 */
import java.awt.*;

public class StudentLoginFrame extends Frame {
    public StudentLoginFrame() {
        setLayout(new FlowLayout());
        
        Label userLabel = new Label("Username:");
        TextField userText = new TextField(20);
        
        Label passLabel = new Label("Password:");
        TextField passText = new TextField(20);
        passText.setEchoChar('*');
        
        Button loginButton = new Button("Login");
        
        add(userLabel);
        add(userText);
        add(passLabel);
        add(passText);
        add(loginButton);
        
        setTitle("Student Login");
        setSize(300, 200);
        setVisible(true);
    }

    public static void main(String[] args) {
        new StudentLoginFrame();
    }
}
