#include <iostream>
#include <cmath> // Include cmath header for pow function
using namespace std;


int binaryToDecimal(int reversedArr[], int size) {
    int decimal = 0;
    for (int i = size - 1, power = 0; i >= 0; i--, power++) {
        decimal += reversedArr[i] * pow(2, power);
    }
    return decimal;
}


int main() {
    //int binary[] = {1, 1, 0, 1, 0, 1, 0, 0, 0, 0, 1}; // Binary representation
    int binary[30];
    cin >> binary[30];
    int size = sizeof(binary) / sizeof(binary[0]); // Calculate the size of the array
    int result = binaryToDecimal(binary, size); // Convert binary to decimal
    cout << "Binary: ";
    for (int i = 0; i < size; i++) {
        cout << binary[i];
    }
    cout << " -> Decimal: " << result << endl;
    return 0;
}