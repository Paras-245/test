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
import java.applet.*;
import java.awt.*;

public class StudentLoginApplet extends Applet {
    TextField userField, passField;
    Button loginButton;

    @Override
    public void init() {
        setLayout(new FlowLayout());

        Label userLabel = new Label("Username:");
        userField = new TextField(20);
        Label passLabel = new Label("Password:");
        passField = new TextField(20);
        passField.setEchoChar('*');
        loginButton = new Button("Login");

        add(userLabel);
        add(userField);
        add(passLabel);
        add(passField);
        add(loginButton);
    }
}