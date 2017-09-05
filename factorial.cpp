#include "functions.h"
#include<iostream>

int factorial(int n){
  int k;
  k=1;
  while(n<1){
  	printf("You've enter a negative number\n");
    printf("Please enter a positive number\n");
    scanf("%d", &n)
  }
  if(n!=1){
    return(n * factorial(n-1));
  }
  else return k;
}
