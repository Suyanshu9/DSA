#include<iostream>
using namespace std;

int main(){
    int n;
    cout << "Enter the number"<< endl;
    cin>> n;
    int num = 0;
    for(int i= 0;i<= 100;i++){
        for(int j = 0;j<= i; j++){
          num++;
          cout << num << " ";
        }
        cout << endl;
        if(num==n){
            break;
        }
    }

}

