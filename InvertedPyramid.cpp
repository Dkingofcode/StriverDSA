#include<iostream>
#include<algorithm>
using namespace std;

void pattern(int n) {
   for(int i = n; i > 0; i--){ 

    for(int j = 0; j < n - i; j++) { 
      cout << " ";
   } 
 
   for(int j = 0; j < 2 * i - 1; j++){
      cout << "*";
   }

    for(int j = 0; j < n - i; j++){
      cout << " ";
    }
    
    cout << endl;
 }

}


int main()  {
   int num;
   cin >> num;
   pattern(num);
   return 0;
}






