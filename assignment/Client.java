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
import java.io.*;
import java.net.*;

public class Client {
    public static void main(String[] args) throws IOException {
        Socket socket = new Socket("localhost", 15000);
        
        PrintWriter writer = new PrintWriter(socket.getOutputStream(), true);
        writer.println("Hello from Client!");
        
        socket.close();
    }
}
