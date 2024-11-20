/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */
package assignment;

class FirstThread implements Runnable {
    private Thread secondThread;

    public void setSecondThread(Thread secondThread) {
        this.secondThread = secondThread;
    }

    @Override
    public void run() {
        try {
            if (secondThread != null) {
                secondThread.join();
            }
            System.out.println("First thread executed after second thread.");
        } catch (InterruptedException e) {
            e.printStackTrace();
        }
    }
}

class SecondThread implements Runnable {
    @Override
    public void run() {
        System.out.println("Second thread executing.");
    }
}

public class ThreadExample {
    public static void main(String[] args) {
        Thread t2 = new Thread(new SecondThread());
        
        FirstThread first = new FirstThread();
        first.setSecondThread(t2);
        Thread t1 = new Thread(first);

        t2.start();
        t1.start();
    }
}
