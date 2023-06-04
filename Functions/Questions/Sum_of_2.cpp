#include<iostream>
using namespace std;

int sum(int a, int b){
    int sum = a + b;
    return sum;
}

int main(){
    int a, b;
    cout << "Enter the value of a and b: ";
    
    cin >> a >> b;
    cout << "The sum is: " << sum(a, b) << endl;

    return 0;
}