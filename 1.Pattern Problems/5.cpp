#include <iostream>

int main()
{
    int n = 5;
    for(int i = 0; i < n; i++){
        for(int j = n-i; j > 0; j--){
            std::cout << '*' << ' ';
        }
        std::cout << std::endl;
    }
    return 0;
}