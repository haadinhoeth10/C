//Write a program get number from user print the total number digits which are odd in the number.

#include<stdio.h>

int main(){
    int x;
    scanf("%d",&x);
    int count;
    while (x!=0)
    {
        if((x%10)%2!=0){
                    count++;


        }
            x/=10;

        /* code */
    }
    printf("\n%d",count);
    
}

*/

Input : 12345678 - Output : 4
Input : 987531 - Output : 5
  
*/
