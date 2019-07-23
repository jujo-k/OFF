package ttt;
import java.io.*;
import java.util.*;
public class FileList implements Enumeration{
  String MyFilesList[];
  int current = 0;
  public FileList(String fileslist[]){
    MyFilesList = fileslist;
  }
  public FileList(){
    MyFilesList = null;
  }
  //判断是否还有下一个元素
  public boolean hasMoreElements(){
    if (MyFilesList==null)
      return false;
    if(current<MyFilesList.length)
      return true;
    else
      return false;  
  }
  //获取下一个元素
  public Object nextElement(){
    FileInputStream in=null;
    if(!hasMoreElements())
      return null;
    try{
       in = new FileInputStream(MyFilesList[current]);
       ++current;
    }catch(FileNotFoundException e){
       System.err.println("Can't open file:"+MyFilesList[current]);
    }
    return in;
  }
}