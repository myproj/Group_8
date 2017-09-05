#include "functions.h"
#include<iostream>

int factorial(int n){
  int k;
  k=1;
  while(n<1){
    // printf("Please enter a positive number\n");
    cout << "Please enter a positive number";
    cin >> n;
    // scanf("%d", &n)
  }
  if(n!=1){
    return(n * factorial(n-1));
  }
  else return k;
}
