#include<stdio.h>
#include<math.h>

void Armstrong_Numbers(int a, int b){
	int c =0, sum,temp,copy,r,i;
	for(i=a;i<=b;i++){
		sum = 0;
		temp = copy = copy_num = i;
		while(copy_num!=0){
			r = i%10;
			c += 1;
			i = i/10;
		}
		c = 0;
		while(temp!=0){
			r = temp%10;
			sum = sum + pow(r,c);
			temp = temp/10;
		}
		if(sum == copy){
			printf("%d is an Armstrong Number",copy);
		}
	}
}

int main(){
	int a,b;
	printf("Enter the value of a and b:-");
	scanf("%d %d",&a,&b);
	Armstrong_Numbers(a,b);
	return 0;
}
