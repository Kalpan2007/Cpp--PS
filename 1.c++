// 1. Write a function to check the grade of a student based on the score:
// 90-100: A
// 80-89: B
// 70-79: C
// 60-69: D
// Below 60: F

// #include <iostream>
// using namespace std;
//   void fn(int m){
//       if(m>=90 && m<=100){
//           cout << "A";
//       }else if(m>=80 && m<90){
//           cout << "B";
//       }else if(m>=70 && m<80){
//           cout << "C";
//       }else if(m>=60 && m<70){
//           cout << "D";
//       }else if(m<60 && m>=0){
//           cout << "F";
//       }else{
//           cout << "please enter a valid marks";
//       }
//   }

// int main() {
//     fn(95); 
//     return 0;
// }


//using a string function .

#include <iostream>
#include <string>
using namespace std;
  string fn(int m){
      if(m>=90 && m<=100){
          return "A";
      }else if(m>=80 && m<90){
         return "B";
      }else if(m>=70 && m<80){
          return "C";
      }else if(m>=60 && m<70){
          return "D";
      }else if(m<60 && m>=0){
          return "F";
      }else{
        return "please enter a valid marks";

      }
  }

int main() {
    cout << fn(95); 
    return 0;
}