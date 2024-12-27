#include<iostream>
using namespace std;

string Extract(string filename) {
    int l = filename.length();
    string ext;
    
   
    for(int i = l - 1; i >= 0; i--) {
        if(filename[i] == '.') {
            i++;  
            break;
        }
        ext += filename[i]; 
    }

    
    string finalExt = "";
    for(int i = ext.length() - 1; i >= 0; i--) {
        finalExt += ext[i];
    }
    
    return finalExt;
}

int main() {
    string filename = "document.pdf";
    cout << "File Extension: " << Extract(filename) << endl;
    return 0;
}
