#include <iostream>
using namespace std;

int main()
{
    int n = 5;
    for(int i = 0; i < n; i++){
        for(int j = 1; j <= n-i-1; j++){
            cout << ' ';
        }
        for(int j = 1; j <= i+1; j++){
            cout << '*';
        }
        for(int j =0 ; j< i; j++){
            cout << '*';
        }
        cout << endl;
    }

    int m  = n-1;
    for(int i =0; i < m; i++){
        for(int j = 0; j <= i; j++){
            cout << ' ';
        }
        for(int j = m-i;j > 0; j--){
            cout << "*" ;
        }
        for(int j = m-i-1; j >0; j--){
            cout << "*";
        }
        cout << endl;
        
    }
    return 0;
}