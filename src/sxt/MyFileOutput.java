package sxt;

import java.io.*;

public class MyFileOutput {

	public static void main(String[] args) {
		// TODO Auto-generated method stub
			FileInputStream fin ;
			FileOutputStream fout;
			int ch;
			try {
				fin =new FileInputStream(FileDescriptor.in);
				fout = new FileOutputStream(FileDescriptor.out);
				while((ch=fin.read())!=-1) {
					fout.write(ch);
				}
				fin.close();
				fout.close();
				System.out.println("success!");
			}catch(FileNotFoundException e){
				System.out.println("找不到文件");
			}catch(IOException ex) {
				System.out.println("无法读取");
			}
			
			
			
			
	}

}
