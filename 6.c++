// 6. Write a function that checks if a username and password match predefined values. If the username is "admin" and the password is "1234", print "Login successful"; otherwise, print "Login failed."



#include<iostream>
using namespace std;

string fn(string uname , string pass){
    string a = "admin";
    string b = "1234";

    if(a==uname && b==pass){
        cout << "login succes";
}else{
    cout << "login failed";
}
}

int main() {
    fn("kalpan" , "1234");
    fn("admin","1234");
    return 0;
}