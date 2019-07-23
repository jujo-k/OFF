package CollectionExa;

public class Student {
	String name,classno;
	int grade;
	
	public Student() {
		
	}

	public Student(String name, String classno, int grade) {
		// TODO Auto-generated constructor stub
		this.name = name;
		this.classno = classno;
		this.grade = grade;
	}
	public String getName() {
		return name;
	}
	public void setName(String name) {
		this.name = name;
	}
	public String getClassno() {
		return classno;
	}
	public void setClassno(String classno) {
		this.classno = classno;
	}
	public int getGrade() {
		return grade;
	}
	public void setGrade(int grade) {
		this.grade = grade;
	}
	
}
