#include<iostream>
using namespace std;

int main(){
    int n;
    cout << "Enter the number"<< endl;
    cin>> n;

    for(int i= 0;i<= 100;i++){
        for(int j = 0;j<= i; j++){
            cout << i;
        }
        cout << endl;
        if(i>n){
            break;
        }
    }

}
