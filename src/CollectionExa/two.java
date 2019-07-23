package CollectionExa;

import java.util.*;

/*
 * 编写一程序，创建用数字填充的数组线性表ArrayList，将新元素添加到线性表的指定位置，
 * 再利用数组线性表创建一个链表，最后用Foreach语法遍历该链表。
 */
public class two {

	public static void main(String[] args) {
		ArrayList<Integer> al = new ArrayList<Integer>();
	
		al.add(1);
		al.add(2);
		al.add(3);
		al.add(1, 4);
		System.out.print("arrayList is");
		for(Integer a:al) {
			System.out.print(a+" ");
		}
		
		
		LinkedList<Object> ll = new LinkedList<Object>(al);
		ll.add(2, "zhejiang");
		System.out.print("LinkedList is");
		for(Object a1:ll) {
			System.out.print(a1+" ");
		}
		
		
	}

}
