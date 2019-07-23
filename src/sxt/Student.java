package sxt;

import java.io.Serializable;

public class Student implements Serializable {
	private String name;
	private String id;
	private int age;
	private String specialty;//string类型的属性
	
	public Student() {}
	
	public Student(String name ,String id,int age,String specialty) {
		this.name = name ;
		this.id = id;
		this .age = age;
		this.specialty = specialty;
	}

	public String getName() {
		return name;
	}

	public void setName(String name) {
		this.name = name;
	}

	public String getId() {
		return id;
	}

	public void setId(String id) {
		this.id = id;
	}

	public int getAge() {
		return age;
	}

	public void setAge(int age) {
		this.age = age;
	}

	public String getSpecialty() {
		return specialty;
	}

	public void setSpecialty(String specialty) {
		this.specialty = specialty;
	}
	
	public String toString() {
		return "姓名"+name+"学号"+id+"年龄"+age+"专业"+specialty;
	}
	
	
}
