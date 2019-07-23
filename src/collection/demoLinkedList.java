package collection;

import java.util.*;

/*
 * 猴子选大王，约瑟夫环问题简化版
 */
public class demoLinkedList {

	public static void main(String[] args) {
		LinkedList<Integer> monkeys =new LinkedList<Integer>();
		int number,cnt;
		
		for(number=1;number<=100;number++) {
			monkeys.add(number);
		}
		
		cnt=100;
		number=0;
		
		Iterator<Integer> it = monkeys.iterator();
		while(cnt>1) {
			if(it.hasNext()) {
				it.next();
				number++;
			}else {
				it = monkeys.iterator();
			}
			
			if(number ==14) {
				it.remove();
				cnt--;
				number=0;
			}
			
		}
		
		System.out.println("大王的编号是" + monkeys.element());

	}

}
