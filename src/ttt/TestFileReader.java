package ttt;

import java.io.*;

public class TestFileReader {
	public static void main(String[] args) {
		FileReader fr = null;
		FileWriter fw = null;
		int data = 0;
		
		try {
		fr = new FileReader("D:\\workspace\\off\\src\\ttt\\FileList.java");
		//fr = new FileReader("D:\\a.txt");
		fw = new FileWriter("D:\\x.txt");
		while((data = fr.read())!=-1) {
			//System.out.print((char)data);
			fw.write(data);
		}
			System.out.println("ok");
			fr.close();
			fw.close();
		}catch(FileNotFoundException e){
			System.out.println("没找到文件");
		} catch (IOException e) {
			// TODO Auto-generated catch block
			e.printStackTrace();
			System.out.println("读取错误");
		}
	
	}
	}
