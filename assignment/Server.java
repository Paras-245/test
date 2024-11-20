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

public class Server {
    public static void main(String[] args) throws IOException {
        ServerSocket serverSocket = new ServerSocket(15000); // Use any port in range 10000-20000
        Socket socket = serverSocket.accept();
        
        BufferedReader reader = new BufferedReader(new InputStreamReader(socket.getInputStream()));
        String message = reader.readLine();
        System.out.println("Message received from client: " + message);
        
        socket.close();
        serverSocket.close();
    }
}
