#include<iostream>
using namespace std;

int fibonacci (int n){
    // Base Cases
    if(n == 1 || n == 2){
        return 1;
    }
    // Recursive case
    return fibonacci(n - 1) + fibonacci(n - 2);
}

int main() {
    int n;
    cin >> n;
    cout << fibonacci(n) << endl;
    return 0;
}










