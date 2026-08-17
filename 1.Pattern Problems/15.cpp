#include <iostream>
using namespace std;

int main()
{
    int n =5;
    for(int i = 0 ; i< n; i++){
        for(int j = 'A'; j < ('A'+n-i);j++){
            cout << char(j) <<' ';
        }
        cout << endl;
    }
    return 0;
}