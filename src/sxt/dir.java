package sxt;

import java.io.*;
import java.text.SimpleDateFormat;
import java.util.Date;

public class dir {

	public static void main(String[] args) {
		// TODO Auto-generated method stub
			Date date;
			Long size;
			String name;
			File fdir;
			File[] AllFile;
			String bj;
			
			if(args.length<1) {
				fdir = new File(".");
			}else 
				fdir = new File(args[0]);
			
			
			AllFile = fdir.listFiles();
			
			for(int i=0;i<AllFile[i].length();i++) {
				name = AllFile[i].getName();
				
				if(AllFile[i].isFile()) {
					bj="    ";
					size = AllFile[i].length();
				}else {
					bj="no	";
					size = (long) 0;
				}
				
				date = new Date(AllFile[i].lastModified());
				SimpleDateFormat sdate = new SimpleDateFormat("yyyy-MM-dd HH:mm:ss");
				System.out.print(sdate.format(date));
				System.out.print(bj);
				
				if(size > 0) {
					System.out.printf("%10d",size);
				}else {
					System.out.print("               ");
				}
				System.out.println(" "+name);
			}
			System.out.println("共有"+AllFile.length+"个文件和目录");
	}

}
