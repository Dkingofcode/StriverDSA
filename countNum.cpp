#include<iostream>
using namespace std;



int countDigits(int n){
	// Write your code here.
    int count = 0;
	while(n != 0){
		n = n / 10;
        count++;
	}

    cout << count << endl;
	return count;	
}

int main() {
    int num;
    cin >> num;
    countDigits(num);
    return 0;
}