#include<iostream>
using namespace std;

int main(){
    int n;
    cout << "Enter number of rows: ";
    cin >> n;

    for(int i=1; i<=n; i++){

        // For first space triangle
        for (int a=i; a<n; a++){
            cout << "  ";
        }

        // For second filled triangle
        for(int b=1; b<=i; b++){
            cout << "* ";
        }

        // For third filled triangle
        for(int c=2; c<=i; c++){
            cout << "* ";
        }

        // For fourth space traingle
        for(int d=i; d<=n; d++){
            cout << "  ";
        }
        cout << endl;
    }
}