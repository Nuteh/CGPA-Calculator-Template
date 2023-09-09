#pragma once
#include "Semester.h"

class Semesters {
private:
	vector<Semester> semesters;

public:
	void addSemester(Semester sem) {
		semesters.push_back(sem);
	}

	void allSemesters() {

		for (auto semester : semesters) {
			cout << "Semester name: " << semester.getName() << endl
				<< "GPA: " << semester.getGPA() << endl;
		}
	}

	void deleteSemester(string name) {

		for (auto it = semesters.begin(); it != semesters.end(); it++) {

			if (it->getName() == name) {
				semesters.erase(it);
				cout << "Successfuly deleted semester !" << endl;
				return;
			}
		}
		cout << "The is no semester with name: " << name << endl << "Try again !" << endl;
	}
};