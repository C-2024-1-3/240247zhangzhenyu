#include <iostream>
using namespace std;
class cfx
{
private:
    double c; 
    double k;
    double g;
public:
    cfx()
    {
        c = k = g=0.0;
    };
    void input()
    {
        cout << "请输入长：";
        cin >> c;
        cout << "请输入宽：";
        cin >> k;
        cout << "请输入高：";
        cin >> g;
    }
    double CV()
    {
        return c * k * g;
    }
    void output()
    {
        cout << "体积为" << CV()<<endl;
    }
};
int main()
{
    cfx cfz[3];
    for (int i = 0; i < 3; i++)
    {
        cout << "请输入第" << i+1 << "个长方柱的长宽高" << endl;
        cfz[i].input();
    }
    for (int i = 0; i < 3; i++)
    {
        cout << "第" << i + 1 << "个";
        cfz[i].output();
    }
    return 0;
}

