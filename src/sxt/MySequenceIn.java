package sxt;

import java.io.*;

public class MySequenceIn {

	public static void main(String[] args) {
		// TODO Auto-generated method stub
		FileList myList = new FileList(args);
		SequenceInputStream sin;
		FileOutputStream fout;
		int data;
		try {
			sin = new SequenceInputStream(myList);
			fout = new FileOutputStream(FileDescriptor.out);
			while((data = sin.read())!=-1) {
				fout.write(data);
			}
			sin.close();
		}catch(FileNotFoundException e ){
			System.out.println("文件无法打开");
		}catch(IOException e) {
			System.out.println("读写有错误");
		}
		
		
	}

}
