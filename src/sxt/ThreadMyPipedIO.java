package sxt;

import java.io.*;

public class ThreadMyPipedIO {
	public void main(String args[]) {
		PipedInputStream mypin = null;
		PipedOutputStream myout = null;
		try {
			mypin = new PipedInputStream();
			myout = new PipedOutputStream();
			mypin.connect(myout);
			
			ThreadOut tout = new ThreadOut(mypin,myout);
			ThreadIn tin = new ThreadIn(mypin,myout);
			
//			tout.start();
//			tin.start();
		}catch(IOException e) {
			System.out.println("无法连接");
		}
	}
}
