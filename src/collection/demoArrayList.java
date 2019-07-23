package collection;

import java.util.*;

public class demoArrayList {

	public static void main(String[] args) {
		ArrayList<String> stu = new ArrayList<String>();
		Scanner in = new Scanner(System.in);
		
		String name;
		System.out.println("请输入你的姓名");
		boolean goon = true;
		
		while(goon) {
			name = in.nextLine();
			if(name.length()>0) {
				stu.add(name);
			}else {
				goon = false;
			}
		}
		
		System.out.println("请输入要删除学生的名字，空格结束");
		goon = true;
		while(goon) {
			name = in.nextLine();
			if(name.length()>0) {
				if(stu.remove(name)) {
					System.out.println("删除成功");
				}
			}else {
				goon = false;
				System.out.println("没有此人");
			}
		}
		
		System.out.println("剩下的学生还有：");
		for(String strname : stu) {
			System.out.println(strname);
		}
		
		
		
		

	}

}
