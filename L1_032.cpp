#include <iomanip>
#include <iostream>
#include <string>
using namespace std;
int main()
{
    int N;
    char c, b;
    string str;
    cin >> N >> c;
    cin.ignore(1024, '\n');
    getline(cin, str);
    int l = str.length();
    //cout << "l = " << l << endl;
    if (l <= N)
        cout << setfill(c) << setw(N) << str;
    else
    {
        int i = l - N;
        for (i; str[i] != '\0'; i++)
        {
            cout << str[i];
        }
    }

    //system("pause");
}