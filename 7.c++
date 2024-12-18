//     7. Write a function that simulates a traffic light system. The function should take the current light color (red, yellow, green) as input and print the corresponding action:
// "red" → "Stop"
// "yellow" → "Slow down"
// "green" → "Go"

#include <iostream>
using namespace std;

string light(string color)
{
    if (color == "red")
    {
        cout << "stop";
    }
    else if (color == "yellow") {
                 cout << "slow down ";
             }
             else if (color == "green"){
                cout << "go";
             }else{
                cout << "Invalid color";
             }
}
int main(){
    light("red");
    light("yellow");
    light("green");
    light("blue");
}

