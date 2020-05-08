/*
 * class.cpp
 *
 *  Created on: 08-May-2020
 *      Author: Nitin
 */

#include<iostream>
#include<string>
using namespace std;
#include"class.h"

int main(void)
{
	string std_name;
	int std_id;

	cout<<"Enter id "<<endl;
	cin>>std_id;
	cin.ignore();
	cout<<"Enter name of student"<<endl;
	getline(cin,std_name);
	Student s(std_id,std_name);
	s.display();
	return 1;


}


