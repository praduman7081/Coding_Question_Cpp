#include <iostream>
#include <string>
using namespace std;

int Hexadecimaltodecimal(string n)
{
    int ans = 0;
    int x = 1;
    int s = n.size();
     for (int i = s - 1; i >= 1; i--)
    {
        if (n[i] >= '0' && n[i] <= '9')
        {
            ans += x * (n[i] - '0');
        }
        else if (n[i] >= 'A' && n[i <= 'F'])
        {
            ans += x * (n[i] - 'A' + 10);
        }
        x *= 16;
    }

    return ans;
}

int main()
{
    string n;
    cout << "Enter number to convert decimal" << endl;
    cin >> n;
    cout << Hexadecimaltodecimal(n);
    return 0;
}
