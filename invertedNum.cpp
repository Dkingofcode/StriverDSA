#include<iostream>
#include<algorithm>
using namespace std;

void pattern(int N) {
    if(N <= 0){
        return;
    }

    for(int i = 0; i <= N; i++){
      for(int j = 1; j <= N - i; j++){
        cout << j << " ";
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