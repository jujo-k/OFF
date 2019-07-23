package sxt;
import java.io.*;

import sxt.Student;
public class ObjectFileTest {

	public static void main(String[] args) {
		// TODO Auto-generated method stub
//		Student st = new Student("a","1",18,"计算机");
		try {
//			ObjectOutputStream out = new ObjectOutputStream(new FileOutputStream("save.dat"));
//			out.writeObject(st);
//			out.close();
			
			ObjectInputStream in = new ObjectInputStream(new FileInputStream("save.dat"));
			Student s = (Student)in.readObject();
			
			in.close();
			System.out.println(s);
			System.out.println("姓名"+s.getName());
			System.out.println("学号"+s.getId());
		}catch(Exception e) {
			e.printStackTrace();
		}
	}

}
