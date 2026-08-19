#include <bits/stdc++.h>
using namespace std;

int main()
{
    int N =4;
    int n = 2*N -1;
    for(int i = 0; i < n;i++){
        for(int j =0; j< n;j++){
            int top = i;
            int left = j;
            int bottom = n-1-i;
            int right = n-1-j;

            int minDist = min(min(left,right), min(top,bottom));
            cout << N - minDist << ' ';
        }
        cout << endl;
    }
    return 0;
}