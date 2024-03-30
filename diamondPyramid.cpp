#include<iostream>
#include<algorithm>
using namespace std;


void nStarDiamond(int n) {
    // Write your code here.
        for(int i = 0; i < n; i++){

            for(int j = 0; j < n - i - 1; j++){
                cout << " ";
            }

            for(int j = 0; j < 2 * i + 1; j++){
                cout << "*";
            }

            for(int j = 0; j < n - i - 1; j++ ){
               cout << " ";
            }

            cout << endl;
    }


}

void reversenStarDiamond(int n){
    for(int i = 0; i < n; i++){

        for(int j = 0;  j < i; j++){
            cout << " ";
        }

        for(int j = 0; j < 2* n - (2 *i + 1);  j++){
            cout << "*";
        }

        for(int j = 0; j < i; j++){
        cout << " ";
        }

        cout << endl;
    }   
}



int main() {
  int num;
  cin >> num;
  nStarDiamond(num);
  reversenStarDiamond(num);
  return 0;
}