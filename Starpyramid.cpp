#include<iostream>
#include<algorithm>
using namespace std;

void pattern(int N){

    // This is the outer loop for the rows
    for(int i = 0; i < N; ++i){

       // For printing th4e spaces before stars in each row 
      for(int j = 0; j < N-i-1; ++j){
         cout << " ";
      }  
      
     // for printing the stars in each row
     for(int j = 0; j < 2*i + 1; ++j){
        cout << "*";
     }

    // for printing the spaces after the stars in each row
    for(int j = 0; j < N-i-1; j++){
      cout << " ";
    }     

      cout << endl;
    }
}


int main() {
    int num;
    cin >> num;
    pattern(num);
    return 0;
}