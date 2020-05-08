/*
 * class.h
 *
 *  Created on: 08-May-2020
 *      Author: Nitin
 */

#ifndef CLASS_H_
#define CLASS_H_

class Student{
private:
	int id;
	string name;
public:

	Student(int id,string name){
		this->id=id;
		this->name=name;
	}
	void display(void){
		cout<<"Name: "<<name<<endl;
				cout<<"ID: "<<id<<endl;
	}
	~Student(){
		cout<<"Name: "<<name<<endl;
		cout<<"ID: "<<id<<endl;
		cout<<"Goodbye"<<endl;
	}



};

class Circle{
	int rad;
	float area;
	static float PI;
public:

	void setdata(void){
		cout<<"Enter radius of the circle: "<<endl;
		cin>>rad;
	}

	void displayarea(void){
		area=PI*rad*rad;
		cout<<"Area= "<<area;

	}

	~Circle(){
		cout<<"Calculation done"<<endl;
	}

};


#endif /* CLASS_H_ */
