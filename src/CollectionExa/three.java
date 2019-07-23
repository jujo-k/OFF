package CollectionExa;

import java.util.*;

/*
 * 统计字符串“have a good day,have a good class,have a good visit,have fun!”
 * 中的每个单词出现的次数，
 * 并按照单词的升序输出。（建议使用HashMap和TreeMap）
 */

public class three {
	public static void main(String[] args) {
		TreeMap<String,Integer> tp = new TreeMap<String,Integer>();
		String s = "have a good day,have a good class,have a good visit,have fun!";
		String[] ss = s.split("[ \n\t\r,.;:!?(){]");
		int number;
		for(int i=0;i<ss.length;i++) {
			String key = ss[i];
				if(tp.containsKey(key)){
					number = (int) tp.get(key);
					number++;
					tp.put(key, number);
				}else {			
					tp.put(key, 1);
				}
			} 
			System.out.println(tp);
	}

}
