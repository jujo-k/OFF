package sxt;

import java.io.*;
import java.util.*;

public class FileList implements Enumeration {
	String[] MyFileList;
	int current =0;
	
	public FileList(){
		MyFileList = null;
	}
	
	public FileList(String[] filelist) {
		MyFileList = filelist;
	}
	@Override
	public boolean hasMoreElements() {
		// TODO Auto-generated method stub
		if(MyFileList == null)
			return false;
		if(current < MyFileList.length) 
			return true;
		else 
			return false;
	}

	@Override
	public Object nextElement() {
		// TODO Auto-generated method stub
		FileInputStream in = null;
		if(!hasMoreElements())
			return null;
		
		try {
			in =new  FileInputStream(MyFileList[current]);
			current++;
		}catch(FileNotFoundException e) {
			System.out.println("can not find " + MyFileList[current]);
		}
		return in;
	}

}
