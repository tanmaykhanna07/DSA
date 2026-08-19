#include <iostream>
using namespace std;

int main()
{
    int n =5;
    for(int i =0; i <n; i++){
        for(int j = 'A' + n-i-1; j < 'A' + n;j++){
            cout << char(j) << ' ';
        }
        cout << endl;
    }
    return 0;
}