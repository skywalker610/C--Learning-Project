#include <iostream>
using std::cin;
using std::cout;

int main(){
    int sum = 0;
    int value = 0;
    while (cin >> value){
        sum += value;
    }
    cout << "input value is : " << sum << std::endl;
    return 0;
}