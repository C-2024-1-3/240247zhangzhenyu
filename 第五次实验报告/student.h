//student.h                (����ͷ�ļ����ڴ��ļ��н����������)
using namespace std;
class Student              //������
{
public:                   //���ó�Ա����ԭ������
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