#include <iostream>
using namespace std;
class Student
{
private:
	int no;
	int score;
public:
	Student(int = 0, int = 0);
	int getscore();
	int getno();
};
int Student::getscore()
{
	return score;
}
int Student::getno()
{
	return no;
}
Student::Student(int No, int Score)
{
	no=No;
	score = Score;
}
int max(Student* arr)
{
	int maxscore = arr[0].getscore();
	int j = 0;
	for (int i = 0; i < 5; i++)
	{
		if (arr[i].getscore() > maxscore)
		{
			maxscore = arr[i].getscore();
			j = i+1;
		}
	}
	return j;
}
int main()
{

    Student student[5] =
	{
		Student(1,95),
		Student(2,83),
		Student(3,85),
		Student(4,97),
		Student(5,92)
	};
	Student* p = &student[0];
	cout << "学号为：" << max(p) << endl;;
}


