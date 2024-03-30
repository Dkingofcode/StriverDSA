#include<iostream>
#include<algorithm>
#include <vector>
using namespace std;

double areaSwitchCase(int ch, vector<double>  a){
    // Write your code here
    
    
    switch(ch){
        
        case 1: {
          double r;  
          cin >> r;
          double circlearea = 3.14159265359 * r * r;
          return circlearea;
        }
         
    
        case 2: {
          double l, b;
          cin >> l >> b;
          double rectanglearea = l * b;
          return  rectanglearea; 
        }
        
         
        default:
            return -1.0; 
    }

}


int main() {
    int ch;
    vector<double> a;
    cin >> ch;
    cout << areaSwitchCase(ch, a) << endl;
    return 0;
}
