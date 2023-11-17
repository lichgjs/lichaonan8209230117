#include <iostream>

using namespace std;
int main()
{
    char c;
    int a1 = 0, a2 = 0, a3 = 0, a4 = 0;
    while (1) {
        cin.get(c);
        if (c == '\n')
            break;
        if (isdigit(c)) {
            a1++;
        }
        else if (isalpha(c)) {
            a2++;
        }
        else if (c == ' ') {
            a3++;
        }
        else {
            a4++;
        }

    } cout << "数字有" << a1 << "个"<<endl
        << "字母有"<<a2 << "个" << endl<<
        "空格有"<<a3 << "个" <<endl <<
        "其他字符"<<a4 << "个" <<endl ;
}