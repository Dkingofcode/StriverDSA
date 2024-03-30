#include<iostream>
using namespace std;


void pattern(int n) {
   // Write your code here.
   // Base case is 0 or less
     if(n <= 0){
        return;
     } 
     for(int i = 0; i < n; ++i){
        for(int j = 0; j < n; ++j){
                cout << "* ";
            }
            cout << endl;
         }   
        
        }

   


int NForest() {
   int n;
   cout << "Enter the value of n: ";
   cin >> n;
   pattern(n);
   return 0;
}
