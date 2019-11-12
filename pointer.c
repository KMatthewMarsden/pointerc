#include <stdio.h>

void f(int *j) {   //Passing address of i by "reference" to the variable (though this is actually pass by value)
  (*j)++;           //Increment the value of "i" by 1 
}

int main() {        
  int i = 20;       //Integer declared
  int *p = &i;      //Pointer *p declared, points to the address (&) of "i"
  f(p);                     //Pass the pointer to the function
  printf("i = %d\n", i);    //Print! Should be "21" instead of "20" 

  return 0;
}