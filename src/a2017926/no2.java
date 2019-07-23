package a2017926;

public class no2 {
public String replaceSpace(StringBuffer str) {
	
    	if(str == null) {
    		return null;
    		}
    	StringBuilder  newStr = new StringBuilder();
    	for(int i=0;i<str.length();i++) {
    		if(str.charAt(i)==' ') {
    			newStr.append("%20");
    		}else 
    			newStr.append(str.charAt(i));
    	}
    	return newStr.toString();
    	
    }
	
	
}
