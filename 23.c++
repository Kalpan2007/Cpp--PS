// 23. Write a program to concatenate two given strings. Example: Input: ("hello", " world"), Output: "hello world".

#include<iostream>
#include<string>
#include <cstring>
using namespace std;

string concatenateStrings(string str1, string str2){
    return str1 + str2;
}

string concatenate2(string str1, string str2){
     str1.append(str2);
     return str1;
}

string concatenate3(string str1, string str2){
     int l1 = str1.length();
     int l2 = str2.length();
     string str = "";
     for(int i=0; i<l1; i++){
            str += str1[i];
     }
      for(int j=0; j<l2; j++){
            str += str2[j];
     }
     return str;
}

int main(){
    string str1 = "hello";
    string str2 = " world";
    cout << "ConcatenateStrings: " << concatenateStrings(str1, str2) << endl;
    cout << "Concatenate2: " << concatenate2(str1, str2) << endl;
    cout << "Concatenate3: " << concatenate3(str1, str2) << endl;
    return 0;
}