package ttt;

import java.io.*;
public class FileoutputStream{
	public static void main(String[] args) {

        FileInputStream in = null;
        FileOutputStream out = null;
        int b=0;

        byte[] t = new byte[6];

        try {
            in = new FileInputStream("D:\\asd.txt");

            out = new FileOutputStream("D:\\dsa.txt");


            while((b=in.read(t))!=-1) {
            	 System.out.println("read bytes:"+b);
                 out.write(t,0,b);
            }
            in.close();
            out.flush();
            out.close();

        } catch (FileNotFoundException e) {
            // TODO Auto-generated catch block
            e.printStackTrace();
            System.out.print("找不到文件");
        } catch (IOException e) {
            // TODO Auto-generated catch block
            e.printStackTrace();
            System.out.print("读取错误");
        }
        System.out.print("文件成功复制");
}
}