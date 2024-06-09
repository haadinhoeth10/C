//Write a program get number from user print the total number of two-digit odd numbers in the number.

//Input: 12345678 - Output: 3
// Input: 987531 - Output: 4

#include<stdio.h>

int main(){
    int x;
    scanf("%d",&x);
    int num=x;

    //NO OF DIGITS
    int digits=0;

    while(num!=0){
        num/=10;
        digits++;
    }
    //converting number to string array

    int numArray[digits];

    for(int i=0;i<digits;i++){
        numArray[i]=x%10;
        x/=10;
        }

  //debugging

    // for(int i=0;i<digits;i++){
    //     printf("%d\n",numArray[i]);
    //     }

        //5 5 9 8
        //5 5 9 8
        int count=0;
    
            for(int j=0;j<digits-1;j++){
                if(numArray[j]%2==1){
                    count+=1;
                    // printf("\n%d and %d",count,numArray[j]);
                }
            
                    }

                    printf("\n%d",count);


}
        
