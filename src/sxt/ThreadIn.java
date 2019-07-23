package sxt;

import java.io.*;

public class ThreadIn {
	PipedInputStream pin;
	PipedOutputStream pout;
	int data;
	
	public ThreadIn(PipedInputStream in ,PipedOutputStream out) {
		pin = in;
		pout = out;
	}
	public void run() {
		try{
			while((data = pin.read())!=-1) {
				System.out.println(data);
			}
		}catch(IOException e) {
			
		}
	}
}
