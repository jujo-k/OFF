package ttt;


import java.io.*;
import java.util.*;
public class FileOutputStreamTest{
   public static void main(String argv[]){
	  String address[] = {"D:\\a.txt","D:\\b.txt"};
      FileList myList = new FileList(address);
      SequenceInputStream sin;
      FileOutputStream fout;
      int data;
      try{
         sin = new SequenceInputStream(myList);
         fout=new FileOutputStream("D:\\asd.txt");
         while((data=sin.read())!=-1)
           fout.write(data);
         sin.close();
      }catch(FileNotFoundException e){
         System.out.println("文件无法打开！");
      }catch(IOException e){
         System.out.println("读写文件有误!");
      }
   }
}