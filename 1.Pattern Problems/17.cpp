#include <iostream>
using namespace std;

int main()
{
    int n =5;
    for(int i=0; i < n; i++){
        for(int j = n-i-1; j > 0; j--){
            cout << ' ';
        }
        for(int j = 'A'; j < 'A' + i + 1;j++){
            cout << char(j);
        }
        for(int j = 'A' + i -1; j >= 'A';j--){
            cout << char(j);
        }
        cout << endl;
    }
    return 0;
}