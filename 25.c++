#include<iostream>
#include<string>
#include<vector>


using namespace std;

vector<string> splitString(string inputString) {
    vector<string> words;
    string word = "";
    
    for (int i = 0; i < inputString.length(); i++) {
        if (isalpha(inputString[i])) {
            word += inputString[i];
        } else if (word != "") {
            words.push_back(word);
            word = "";
        }
    }
    
    if (word != "") {
        words.push_back(word);
    }
    
    return words;
}

int main() {
    string inputString = "Hello world, welcome to JavaScript!";
    vector<string> words = splitString(inputString);
    
    for (auto word : words) {
        cout << "'" << word << "' ";
    }
    
    return 0;
}
