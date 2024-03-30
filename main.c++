#include<iostream>
using namespace std;

int main() {
    int x;
    int y;
    cin >> x >> y;
    cout << "Hey David!" << "\n";
    cout << "You wrote this value: " << x << "and this value:" << y;

    long long x = 150000000; 
    int marks;
    if(marks < 25) {
        cout << "F";
    }
    if(marks >= 25 && marks <= 44) {
        cout << "E";
    }
    if(marks >= 45 && marks <= 50) {
        cout << "D";
    }
    if(marks >= 55 && marks <= 60) {
        cout << "C";
    }
    if(marks >= 65 && marks <= 70) {
        cout << "B";
    }
    if(marks >= 75 && marks <= 80) {
        cout << "A";
    }    
    return 0;
}