#include <iostream>
#include<algorithm>
#include<bitset>
#include<cmath>
using namespace std;

int binaryToDecimal(int reversedArr[], int size) {
    int decimal = 0;
    for (int i = size - 1, power = 0; i >= 0; i--, power++) {
        decimal += reversedArr[i] * pow(2, power);
    }
    return decimal;
}

long long arrayToLL(int reversedArr[], int size) {
    long long result = 0;
    for (int i = size - 1, power = 0; i >= 0; i--, power++) {
        result += reversedArr[i] * pow(2, power);
    }
    return result;
}

int convert(long long);

int convert(long long n){
    int dec = 0, i = 0, rem;
     
     while (n != 0) {
        rem = n % 10;
        n /= 10;
        dec += rem * pow(2, i);
        ++i;
     }
     return dec;
}

void decimalToBinary(int n) {
    int arr[20], reversedArr[20], i = 0, num = n;

    // Convert decimal to binary and store in arr
    while (n != 0) {
        arr[i] = n % 2;
        i++;
        n = n / 2;
    }

    cout << num << " in Binary is ";

    // Start printing from the last significant bit and store in reversedArr
    for (int j = i - 1, k = 0; j >= 0; j--, k++) {
        cout << arr[j];
        reversedArr[k] = arr[j];
    }

    cout << endl;

    // Reverse the binary digits
    cout << "Reversed binary: ";
    for (int j = i - 1; j >= 0; j--) {
        cout << reversedArr[j];
    }
     
    int size = sizeof(reversedArr) / sizeof(reversedArr[0]); // Calculate the size of the array
    long long binaryLL = arrayToLL(reversedArr, size); // Convert array to long long
    int result = convert(binaryLL); // Convert long long to decimal
    // Convert reversed binary back to decimal
    
    cout << endl << "Decimal: " << result << endl;
}

unsigned int reversedBits(unsigned int n) {
    unsigned int reversedNum = 0;
    int bits = sizeof(n) * 8; // Total number of bits in unsigned integer
    for(int i = 0; i < bits; i++){
        if(n & (1 << i)){
            reversedNum |= (1 << (bits - 1 - i));
        }
    }
    cout << reversedNum << endl;
    return reversedNum;
}


int main() {
    int number;
    cout << "Enter a decimal number: ";
    cin >> number;
    reversedBits(number);
    return 0;
}
