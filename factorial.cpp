#include "functions.h"

int factorial(int n){
    if(n < 2)
    	return 1;

	if(n< 0)
		{cout<<"enter again";return 0;}

    cout << "HELLO Bro\n";
    if(n!=1){
	return(n * factorial(n-1));
}
