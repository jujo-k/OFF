package sxt;

import java.io.*;

public class TestFileInputStream {

	public static void main(String[] args) {
		// TODO Auto-generated method stub
		int b;
		FileInputStream in = null;
			try {
			in = new FileInputStream("F:\\TestArray.java");
			}catch(FileNotFoundException e){
				System.out.println("找不到指定文件");
				System.exit(-1);
			}
			
			try {
				long num=0;
				while((b=in.read())!=-1) {
					System.out.print((char)b);
					num++;
				}
				in.close();
				System.out.println();
				System.out.println("共读取了"+num+"个字节");
				
			}catch(IOException e){
				System.out.println("文件读取错误！");
				System.exit(-1);
			}
	}
}
