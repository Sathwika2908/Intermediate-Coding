#include<stdio.h>

// function to find factorial.
int Factorial(int n){
  if(n == 0){
    return 1;
  }
  else if(n == 1){
    return 1;
  }
  else{
    return n*Factorial(n-1);
  }
}

//main function
int main(){
  int n;
  printf("Enter a number:-");
  scanf("%d",&n);
  printf("The factorial of %d = %d",n,Factorial(n));
  return 0;
}
