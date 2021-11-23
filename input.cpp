/*
Compile Using g++ Compiler:

Vulnerable program compilation: g++ question.cpp -o question
Proof of concept compilation: g++ input.cpp -o input

Performing Crash: ./input | ./question
*/

#include <iostream>
using namespace std;
int main(void)
{

  int i,num = 15;

  cout << num << endl;

  for (i = 1; i <= num; i++)
  {
     cout << i << endl;
  }
  return 0;
}
