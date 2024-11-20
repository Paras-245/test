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

// SQL PART also write this
//CREATE DATABASE StudentDB;
//
//USE StudentDB;
//
//CREATE TABLE Student (
//    roll_no INT PRIMARY KEY,
//    name VARCHAR(50),
//    class VARCHAR(20),
//    age INT
//);
import java.sql.*;

public class StudentCRUD {
    public static void main(String[] args) throws SQLException {
        Connection conn = DriverManager.getConnection("jdbc:mysql://localhost:3306/StudentDB", "root", ""); 

        // CREATE: Insert a new student record
        String insertQuery = "INSERT INTO Student VALUES (1, 'John Doe', '10A', 20)";
        conn.createStatement().executeUpdate(insertQuery);
        System.out.println("Record Inserted");

        // READ: Fetch and display all student records
        String selectQuery = "SELECT * FROM Student";
        ResultSet rs = conn.createStatement().executeQuery(selectQuery);
        while (rs.next()) {
            System.out.println(rs.getInt("roll_no") + " " + rs.getString("name") + " " + rs.getString("class") + " " + rs.getInt("age"));
        }

        // UPDATE: Update an existing student record
        String updateQuery = "UPDATE Student SET name='Jane Doe', age=21 WHERE roll_no=1";
        conn.createStatement().executeUpdate(updateQuery);
        System.out.println("Record Updated");

        // DELETE: Delete a student record
        String deleteQuery = "DELETE FROM Student WHERE roll_no=1";
        conn.createStatement().executeUpdate(deleteQuery);
        System.out.println("Record Deleted");

        conn.close();
    }
}
