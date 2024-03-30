#include<iostream>
using namespace std;

int main(){
    int num1, num2, ans;
    cin >> num1;
    cin >> num2;
    for(int i = 1; i <= min(num1, num2); i++){
        if(num1 % i == 0 && num2 % i == 0){
            ans = i;
        }
    } 
    cout << "The GCD of the numbers is " << ans;
}