package collection;

import java.util.*;

public class demoHashMap {

	public static void main(String[] args) {
		
		HashMap<String,Integer> stu = new HashMap<String,Integer>();
		Scanner in = new Scanner(System.in);
		
		String name;
		int score;
		
		System.out.println("请依次输入学生姓名和成绩，空行表示结束");
		
		boolean goon= true;
		
		
		while(goon) {
	
			System.out.print("请输入学生名字");
			name = in.nextLine();
			if(name.length()>0) {
				System.out.print("请输入学生成绩");
				score = new Integer(in.nextInt());
				stu.put(name, score);
				
			}else {
				goon = false;
			}
		}
		
		System.out.println("请输入要查找的学生的名字");
		goon = true;
		String test;
		while(goon) {
			name = in.nextLine();
			if(name.length()>0) {
				test =stu.get(name).toString();
				
				if(test!=null) {
					System.out.println("学生成绩是"+test);
				}else {
					System.out.println("没这个人");
				}
		}else
			goon = false;
	}
		in.close();
	}
}
