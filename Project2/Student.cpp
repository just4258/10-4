#include "Student.h"

Student::Student()
{
	name = " ";
	Date birthDay(1, 1, 1);
	score = 0;
}

Student::Student(string newName, Date newDate, int newScore)
{
	name = newName;
	birthDay.setMonth(newDate.getMonth());
	birthDay.setDay(newDate.getDay());
	birthDay.setYear(newDate.getYear());
	score = newScore;
}

void Student::setName(string newName)
{
	name = newName;
}

void Student::setDate(int newMonth, int newDay, int newYear)
{
	birthDay.setMonth(newMonth);
	birthDay.setDay(newDay);
	birthDay.setYear(newYear);
}

void Student::setScore(int newScore)
{
	score = newScore;
}

string Student::getName() const
{
	return name;
}

void Student::getDate() const
{
	birthDay.print();
}

int Student::getScore() const
{
	return score;
}

void Student::print()
{
	cout << getName() << " ";
	getDate();
	cout << " " << getScore() << endl;
}
