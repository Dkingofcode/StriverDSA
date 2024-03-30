#include<iostream>
#include<string>
using namespace std;

string compareIfElse(int a, int b) {
    // Write  your code here

    if(a > b){
        return "greater";
    }else if(a < b){
        return "smaller";
    }else if(a == b){
        return "equal";
    }else{
        return "invalid input";
    }
}



int main() {
    int a;
    int b;
    cin >> a;
    cin >> b;
    cout << compareIfElse(a, b) << endl;
}

