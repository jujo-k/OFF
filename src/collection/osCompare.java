package collection;

import java.util.*;

public class osCompare implements Comparator<osjob> {

	public int compare(osjob o1, osjob o2) {
		if(o1.getSpend() > o2.getSpend()) {
			return 1;
		}
		if(o1.getSpend() < o2.getSpend()) {
			return -1;
		}
		return 0;
	}
	public boolean equals (Object obj) {
		return super.equals(obj);
	}
}
