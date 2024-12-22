//student.h                (这是头文件，在此文件中进行类的声明)
using namespace std;
class Student              //类声明
{
public:                   //公用成员函数原型声明
	void display();
	void set_value(int Num,const char Name[20],char Sex)
	{
		
		cin >> Num;
		num = Num;
		cin >> Sex;
		sex = Sex;
		for (int i = 0; i < 20; i++)
		{
			name[i] = Name[i];
		}
	}
private:
     	int num;
		char name[20];
		char sex;
		
};