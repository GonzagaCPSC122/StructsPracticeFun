#include "Practice.h"

int main() {
	// 2. 
	Course myCourse = {"CPSC122", "Gaddis", 28};
	
	// 3. direct member selection operator . selects a member value from a struct
	// 4. 
	printCourse(myCourse);
	// 5. indirect member selection operator -> derferences a struct pointer and selects a member value from the struct
	// 6. 
	Course anotherCourse = {"CPSC122", "Gaddis", 25};
	cout << compareCourses(&myCourse, &anotherCourse) << endl; // false
	anotherCourse.numStudents = 28; // make them the same
	cout << compareCourses(&myCourse, &anotherCourse) << endl; // true

	// 7.a.
	Course userCourse = getCourse();
	printCourse(userCourse);
	// 7.b.
	getCoursePtr(&userCourse);
	printCourse(userCourse);
	
	// 8. 
	int size = 2; // making size smaller so it doesn't
	// take so long to enter in info
	Course * cpscCourses = new Course[size];
	for (int i = 0; i < size; i++) {
		cpscCourses[i] = getCourse();
		// OR
		// getCoursePtr(&cpscCourses[i]);
	}
	// check work
	printCourseArray(cpscCourses, size);
	
	// 9. 
	increaseEnrollment(cpscCourses, size);
	// check work
	printCourseArray(cpscCourses, size);
	
	return 0;
}
