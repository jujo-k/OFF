package CollectionExa;

import java.util.*;

/*
 * 1．创建一个散列集HashSet，一个链式散列集LinkedHashSet,
 * 和一个树形集TreeSet，向各集合中添加单词，并打印。根据结果分析三个集合的不同之处（验证性内容）。
 */
public class one {

	public static void main(String[] args) {
		// TODO Auto-generated method stub
		HashSet<String> hashSet = new HashSet<String>();
		LinkedHashSet<String> linkedHashSet = new LinkedHashSet<String>();
		TreeSet<String> treeSet = new TreeSet<String>();
		
		hashSet.add("liaoning");
		hashSet.add("heilongjiang");
		hashSet.add("jilin");
		
		linkedHashSet.add("liaoning");
		linkedHashSet.add("heilongjiang");
		linkedHashSet.add("jilin");
		
		treeSet.add("liaoning");
		treeSet.add("heilongjiang");
		treeSet.add("jilin");
		
//		Iterator<String> it = hashSet.iterator();
	//	while(it.hasNext()) {
		//	System.out.print(it.next()+" ");
		//}
		
		for(String first:hashSet) {
			System.out.print(first+" ");
		}
		System.out.println("\n");
		
		Iterator<String> it1 = linkedHashSet.iterator();
		while(it1.hasNext()) {
			System.out.print(it1.next()+" ");
		}
		System.out.println("\n");
		
		Iterator<String> it2 = treeSet.iterator();
		while(it2.hasNext()) {
			System.out.print(it2.next()+" ");
		}
		System.out.println("\n");
		
	}

}
