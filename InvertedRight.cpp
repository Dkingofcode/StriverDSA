#include<iostream>
#include<algorithm>
using namespace std;

 
void pattern(int N){
   for(int i = 0; i < N; i++){
     for(int j = 0; j < N - i; j++){
        cout << "*" ;
     }
      cout << endl;
   }   

}





int main() {
    int hum;
    cin >> hum; 
    pattern(hum);
    return 0;
}