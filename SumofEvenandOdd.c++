#include<iostream>
#include<algorithm>
using namespace std;



int sumofEvenandOdd(int n, int& even, int& odd) {
  int even = 0;
  int odd = 0;
  while(n != 0){
   int remainder = n % 10;
    if(remainder % 2 == 0){
       even += remainder; 
    }else{
        odd += remainder;
    }
    n = n / 10;
  }
   
}


int main() {
   int n;
   cin >> n;
   int even, odd;
   sumofEvenandOdd(n, even, odd);
   cout  << "Sum of even digits: " << even << endl;
   cout << "Sum of odd digits: " << odd << endl;
   return 0;
        
}