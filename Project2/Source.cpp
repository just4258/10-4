#include "Student.h"


int main() {
	string name;
	int month, day, year;

	Student student1("John", Date(6, 1, 1999), 90);
	Student student2("Marry", Date(10, 8, 1997), 80);

	cin >> name >> month >> day >> year;
	
	student1.setName(name);
	student2.setDate(month, day, year);

	student1.print();
	student2.print();

	system("pause");
	return 0;
}