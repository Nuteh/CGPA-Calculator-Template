#pragma once
#include "Subject.h"
#include <vector>
class Semester {
private:
	string name;
	vector<Subject> subjects;
	float GPA;
public:
	void addSubject(Subject sub) {
		subjects.push_back(sub);
	}
	void deleteSubject(string name) {

		for (auto it = subjects.begin(); it != subjects.end(); it++) {
			if (it->getName() == name) {
				subjects.erase(it);
				cout << "Subject deleted !" << endl;
				return;
			}

		}
		cout << "No subjest with name " << name << endl << "Try again !" << endl;
		return;
	}
	void seeAllSubjects() {

		for (auto subject : subjects) {
			cout << "Name: " << subject.getName()
				 << " - Grade: " << subject.getGrade()
			     << " ( " << subject.getPoints() << " points) " << endl;
		}
	}
	void setName(string name) {
		this->name = name;
	}

	string getName() {
		return name;
	}

	void setGPA() {
		float all = 0;
		if (subjects.empty()) {
			cout << "No subject added to semester !" << endl;
			return;
		}
		for (auto subject: subjects) {
			all = all + subject.getPoints();
		}

		GPA = all / subjects.size();
	}

	float getGPA() {
		return GPA;
	}
};