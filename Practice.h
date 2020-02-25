#ifndef PRACTICE_H
#define PRACTICE_H

#include <iostream>

using namespace std;

// 1. 
struct Course {
	string name;
	string book;
	int numStudents;
};

// 4. 
void printCourse(Course);
// 6. 
bool compareCourses(Course *, Course *);
// 7.a.
Course getCourse();
// 7.b.
void getCoursePtr(Course *);
// 9.
void increaseEnrollment(Course *, int);

// helper function
void printCourseArray(Course *, int);

#endif
