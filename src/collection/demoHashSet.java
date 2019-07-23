package collection;

import java.util.*;

public class demoHashSet {

	public static void main(String[] args) {
		HashSet<String> stu = new HashSet<String>();
		Scanner in = new Scanner(System.in);
		String name;
		System.out.println("请输入学生信息，按空格结束");
		
		boolean goon= true;
		while(goon) {
			name = in.nextLine();
			if(name.length()>0) {
				stu.add(name);
			}else {
				goon = false;
			}
		}
		
		System.out.println("请输入要删除的学生的信息");
		
		goon= true;
		while(goon) {
			name = in.nextLine();
			if(name.length()>0) {
				if(stu.remove(name)) {
					System.out.println("删除成功");
				}else
					System.out.println("没有此人");
			}else {
				goon = false;
			
			}
		}
		
		System.out.println("剩下的学生还有：");
		for(String strname : stu) {
			System.out.println(strname);
		}
		
	}

}
