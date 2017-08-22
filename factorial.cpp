#include "functions.h"

int factorial(int n){
    cout << "HELLO Bro\n";
    if(n!=1){
	return(n * factorial(n-1));
    }
    else return 1;
}
