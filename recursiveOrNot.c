#include<stdio.h>


int main(){
    int x = 10;

    printf("Non-Recursive: %d", F(x));
    printf("\n");
    printf("Recursive: %d", multiplyNumbers(x));
    printf("\n");
}

//Not Recursive 

int F (int n){

	int tmp=1;
	for(int i=n;i>=1;i--)
		tmp*=i;
	return tmp;
}

//Recursive 

int multiplyNumbers(int n) {
    if (n>=1)
    return n*multiplyNumbers(n-1);
    else
        return 1;
}