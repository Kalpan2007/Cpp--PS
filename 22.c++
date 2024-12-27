// find the length of string 

#include<iostream>
using namespace std;

int length(char str[]){ 
    
    int count = 0; 
    
    while (str[count] != '\0') { 
        
        count++; 
        
    } 
    
    return count; 
}
int length2(char str[]){ 
    string s(str);  
    return s.length(); 
}

int main() {
    char str[] = "Hello World!";
    cout << "Length of string is: " << length(str) << endl;
    cout << "Length of string is: " << length2(str) << endl;
    return 0;
}