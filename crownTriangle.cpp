#include<iostream>
#include<algorithm>
using namespace std;

void crownTriangle(int n){
    for(int i = 1; i <= n; i++){

       int start = 1;
       int end = n;

       for(int j = 1;  j <= i; j++){
         cout << j;

       } 

       for(int j = start + i; j <= 2*n - i; j++){
           cout << " ";
       }

       for(int j = i; j > 0; j--){
           cout << j;
           
       }

       cout << endl;
    }
}


int main(){
    int num;
    cin >> num;
    crownTriangle(num);
    return 0;
}