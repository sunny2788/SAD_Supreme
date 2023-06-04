#include<iostream>
using namespace std;

int main(){
    int n;
    cout << "Enter the number of terms: ";
    cin >> n;
    
    for(int i=1; i<=n; i++){

        //For Triangle 1
        for(int a=i; a<=n; a++){
            if(a==i){
                cout << "* ";
            } else{
                cout << "  ";
            }
        }
        cout << endl;
    }
}