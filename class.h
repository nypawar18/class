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
		cout<<"ID: "<<id;
	}
};




#endif /* CLASS_H_ */
