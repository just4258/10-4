#ifndef STUDENT_H
#define STUDENT_H
#include<iostream>
#include<string>
using namespace std;
#include "Date.h"

class Student
{
private:
	string name;
	Date birthDay;
	int score;
public:
	Student();
	Student(string,Date,int);
	void setName(string);
	void setDate(int ,int ,int);
	void setScore(int);
	string getName() const;
	void getDate() const;
	int getScore() const;
	void print();
};
#endif