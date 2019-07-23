package ttt;

import java.io.*;

public class TestBuffer {

	public static void main(String[] args) {
		// TODO Auto-generated method stub
		BufferedWriter bw = null;
		BufferedReader br = null;
		String s = null;
		
		try {
			bw = new BufferedWriter(new FileWriter("D:\\buffer.java"));
			br = new BufferedReader(new FileReader("D:\\buffer.java"));
			
		
			for(int i=0;i<10;i++) {
				s = String.valueOf(Math.random());
				bw.write(s);
				bw.newLine();
			}
			bw.flush();
			while((s=br.readLine())!=null) {
				System.out.println(s);
			}
			
			
			bw.close();
			br.close();
		} catch (FileNotFoundException e) {
			// TODO Auto-generated catch block
			e.printStackTrace();
		} catch (IOException e) {
			// TODO Auto-generated catch block
			e.printStackTrace();
		}
		
	}

}
