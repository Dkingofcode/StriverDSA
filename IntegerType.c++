#include<iostream>
#include<string>
#include<algorithm>
using namespace std;


int getSizeinBytes(const string& datatype){
    string lowerCaseDataType = datatype;
    // Convert input string to Lowercase
    transform(lowerCaseDataType.begin(), lowerCaseDataType.end(), lowerCaseDataType.begin(), ::tolower);

    if (lowerCaseDataType == "interger"){
        return sizeof(int);
    } else if (lowerCaseDataType == "long"){
       return sizeof(long); 
    }else if (lowerCaseDataType == "character"){
       return sizeof(char); 
    }else if (lowerCaseDataType == "float"){
       return sizeof(float); 
    }else if (lowerCaseDataType == "double"){
       return sizeof(double); 
    }else{
        cout << "Invalid data type: " << datatype << endl;
       return -1;
    }
}


int main() {
    string dataType;
    cout << "Enter the data type: ";
    cin >> dataType;

    int sizeInBytes = getSizeinBytes(dataType);
    if (sizeInBytes != -1){
       cout << "The size of this data type is: " << sizeInBytes << " bytes" << endl; 
    }
    return 0;
}





