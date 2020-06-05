// classstudents.cpp: определяет точку входа для консольного приложения.
//

#include "stdafx.h"
#include <iostream>
#include <vector>
#include <locale.h>
#include "human.h"
#include "students.h"
using namespace std;


int main(int argc, char* argv[])
{
	vector<int> scores;
	setlocale(LC_ALL, "rus");

	scores.push_back(5);
	scores.push_back(3);
	scores.push_back(2);
	scores.push_back(2);
	scores.push_back(5);
	scores.push_back(3);
	scores.push_back(3);
	scores.push_back(3);
	scores.push_back(3);

	student *stud = new student("Петров", "Иван", "Алексеевич", scores);
	cout << "Средний балл: " << stud->get_average_score() << endl;

	system("pause");
    return 0;
}

