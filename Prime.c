#include<stdio.h>

void Prime(int n){
	int i, flag = 0;
	for(i=2; i<n/2;i++){
		if(x%i == 0){
			flag += 1;
			break;
		}
	}
	if(flag == 0){
		printf("Prime Number");
	}
	else{
		printf("Not a Prime Number");
	}
}

int main(){
	printf("Enter a number:-");
	int n;
	scanf("%d",&n);
	Prime(n);
	return 0;
}
