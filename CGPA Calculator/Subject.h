#pragma once
#include <iostream>


using namespace std;

class Subject {
private:
	string name;
	float perc;
	string grades[10] = { 
		"F", "D" , "C", "C+" , "B-", "B" , "B+" , "A-" , "A", "A+" 
	};
	string grade;
	float points;
public:

	void allGrades() {
		cout << "All grades: " << endl;
		for (int i = 0; i < 10; i++) {
			if (i == 0) {
				cout << i + 1 << ". (worst) grade :" << grades[i] << endl;

			} 
		
			else if (i == 9) {
				cout << i + 1 << ". (best) grade :" << grades[i] << endl;

			}
			else {
				cout << i + 1 << ". grade :" << grades[i] << endl;
			}
		}

	}
	void setPerc(float perc) {
		this->perc = perc;
	}

	float getperc() {
		return perc;
	}

	void setName(string name) {
		this->name = name;
	}

	string getName() {
		return name;
	}

	void setPoints(int x) {
		points = 2;
		if (x == 0) {
			points = 0;

		}
		else if (x == 1) {
			points = 2;
		}
		else {
			for (int i = 2; i < x + 1; i++) {
				points = points + 0.25;
			}
			cout << "Grade: " << grade << endl;
			cout << "Points: " << points << endl;
		}
	}

	void setGrade(int x) {
		
		if (x < 0 || x > 9) {
			cout << "Wrong input !" << endl;
			
		
		}
		grade = grades[x];	
		setPoints(x);

	}

	string getGrade() {
		return grade;
	}

	float getPoints() {
		return points;
	}


};