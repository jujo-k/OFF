package sxt;

import java.io.*;

public class ThreadOut {
	PipedInputStream pin;
	PipedOutputStream pout;
	byte data[] = {1,2,3};
	
	public ThreadOut(PipedInputStream in ,PipedOutputStream out) {
		pin = in;
		pout = out;
	}
	public void run() {
		try{
			pout.write(data);
		}catch(IOException e) {
			
		}
	}
//	public void start() {
//		// TODO Auto-generated method stub
//		
//	}
}
