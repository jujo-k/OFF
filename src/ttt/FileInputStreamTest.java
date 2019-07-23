package ttt;

import java.io.*;

public class FileInputStreamTest {

	public static void main(String[] args) {
		// TODO Auto-generated method stub
		FileInputStream in = null;
		FileOutputStream out = null;
		
		try {
			in = new FileInputStream("D:\\workspace\\off\\src\\ttt\\FileList.java");
			out = new FileOutputStream("D:\\test.java");
		}catch(FileNotFoundException e) {
			System.out.println("文件没有找到");
			System.exit(-1);
		}
		int a=0;
		long number=0;
//		byte[] b = new byte[4];
		try {
			//a返回的是长度!
			while((a=in.read())!=-1) {
				System.out.print((char)a);
				//out.write(a);
				number++;
			}
			System.out.print(number);
			in.close();
		} catch (IOException e) {
			// TODO Auto-generated catch block
			e.printStackTrace();
			System.out.println("文件错误");
		}
		
		
	}

}
