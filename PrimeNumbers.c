#include<stdio.h>
void Prime(){
    int i,j,flag;
    for(i =100;i<200;i++){
    	flag = 0;
        for(j=2;j<i/2;j++){
            if(i%j == 0){
                flag += 1;
                break;
            }
        }
        if(flag == 0){
            printf("%d is prime\n",i);
        }
    }
}

int main(){
    Prime();
    return 0;
}
