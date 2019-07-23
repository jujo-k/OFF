package CollectionExa;

import java.util.*;

/*
 * 某中学有若干学生(学生对象放在一个List中)，每个学生有一个姓名属性、班级名称属性(String)和考试成绩属性(int)，
 * 某次考试结束后，每个学生都获得了一个考试成绩。请打印出每个班级的总分和平均分。 
 */
public class four {

	public static void main(String[] args) {
		ArrayList<Student> al = new ArrayList<Student>();
		al.add(new Student("zha0","计科1",12));
		al.add(new Student("zha1","计科1",78));
		al.add(new Student("zha2","计科2",1));
		al.add(new Student("zha3","计科3",19));
		al.add(new Student("zha4","计科3",99));
		
		HashMap<String,ArrayList<Student>> sy = new HashMap<String,ArrayList<Student>>();
	
		for(int i=0;i<al.size();i++) {
			Student stu = al.get(i);
			String key = stu.getClassno();
			if(!sy.containsKey(key)) {
				ArrayList<Student> a = new ArrayList<Student>();
				a.add(stu);
				sy.put(key, a);
			}else {
				ArrayList<Student> xz=sy.get(key);
				xz.add(stu);
			}
		}
		
		Set<String> keySet = sy.keySet();
		Iterator<String> it = keySet.iterator();
		while(it.hasNext()) {
			String rightnowkey = it.next();
			int number = 0;
			ArrayList<Student> alllistforoneKey = sy.get(rightnowkey);
			for(int i=0;i<alllistforoneKey.size();i++) {
				number += alllistforoneKey.get(i).getGrade();
			}
			System.out.println(rightnowkey+"总分是"+number+"平均分是"+number/alllistforoneKey.size());
		}
		
	}
}
