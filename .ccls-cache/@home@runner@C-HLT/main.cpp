#include <iostream>
using namespace std;
// function with input

  int main(){
  int num, i, j = 0, check = 0;
  cout << "Input a number to check if it is a prime number or not:";
  cin >> num;
  j = num/2;
  for(i =2; i<j; i++){
    if(num % i == 0){
      cout << "Not a Prime number!"<< endl;
      check = 1;

      break;
  }
}
if (check == 0)
  cout << "This is a Prime Number!"<< endl;
  return 0;

}

