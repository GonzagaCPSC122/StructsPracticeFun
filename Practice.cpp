#include "Practice.h"

// 4. 
void printCourse(Course c) {
	cout << "Name: " << c.name << endl;
	cout << "Book: " << c.book << endl;
	cout << "Number of students: " << c.numStudents << endl << endl;
}

bool compareCourses(Course * c1, Course * c2) {
	// compare member by member
	if (c1->name == c2-> name && c1->book == c2->book && c1->numStudents == c2->numStudents) {
		return true;
	}
	return false;
}

// 7.a.
Course getCourse() {
	Course c;
	string temp;
	
	cout << "Please enter the course name: ";
	getline(cin, c.name);
	cout << "Please enter the course book: ";
	getline(cin, c.book);
	cout << "Please enter the number of students: ";
	cin >> c.numStudents;
	// remove newline char
	getline(cin, temp);
	
	return c;
}

// 7.b.
void getCoursePtr(Course * cPtr) {
	string temp;
	
	cout << "Please enter the course name: ";
	getline(cin, cPtr->name);
	cout << "Please enter the course book: ";
	getline(cin, cPtr->book);
	cout << "Please enter the number of students: ";
	cin >> cPtr->numStudents;
	// remove newline char
	getline(cin, temp);
}

// 9. 
void increaseEnrollment(Course * courses, int size) {
	int i;
	for (i = 0; i < size; i++) {
		courses[i].numStudents += 2;
	}
}

// helper function
void printCourseArray(Course * courses, int size) {
	int i;
	cout << endl << "**Courses Array**" << endl;
	for (i = 0; i < size; i++) {
		printCourse(courses[i]);
	}
	cout << endl;
}
