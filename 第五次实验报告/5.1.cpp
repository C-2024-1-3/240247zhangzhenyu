#include <iostream>
using namespace std;
class Time
{
private:
    int hour;
    int minute;
    int sec;
public:
    void SetTime()
    {
        int h,m,s;
        cout << "请输入时：";
        cin >> h;
        cout << "请输入分：";
        cin >> m;
        cout << "请输入秒：";
        cin >> s;
        hour = h;
        minute = m;
        sec = s;
       
    }
    void ShowTime()
    {
        cout <<"时间是:"<< hour << ":" << minute << ":" << sec << endl;
    }

};
int main()
{
    Time MyTime;
    MyTime.SetTime();
    MyTime.ShowTime();
    return 0;

}
