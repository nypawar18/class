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
	Student(){
		cout<<"WELCOME........"<<endl;
	}
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




#endif /* CLASS_H_ */
