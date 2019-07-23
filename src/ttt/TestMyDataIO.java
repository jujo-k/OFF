package ttt;

import java.io.*;

public class TestMyDataIO {
	public static void main(String[] args) {
		DataOutputStream dout;
		DataInputStream din;
		
		try {
			dout = new DataOutputStream(new FileOutputStream("D:\\testfile.java"));
			dout.writeInt(100);
			dout.writeShort(1);
			dout.writeLong(12345678);
			dout.writeDouble(2.12);
			dout.writeFloat(1.2f);
			
			din = new DataInputStream(new FileInputStream("D:\\testfile.java"));
			System.out.println(din.readInt());
			System.out.println(din.readShort());
			System.out.println(din.readLong());
			System.out.println(din.readDouble());
			System.out.println(din.readFloat());
			
			dout.close();
			din.close();
			
		} catch (FileNotFoundException e) {
			// TODO Auto-generated catch block
			e.printStackTrace();
		} catch (IOException e) {
			// TODO Auto-generated catch block
			e.printStackTrace();
		}
	}
}
