#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int prime(int num)
{
    
    if(num==1){
        
    
        return 1;
    }
    else
    {
        for(int i=2;i<num/2;i++){

            if(num/i==0){
                return 0;
            }
        }
        return 1;
    }
}
int main()
{
    int *nptr,*iptr,i;
  //  iPtr=i;
    printf("Enter a number \n");
    scanf("%d",&nptr);
    Printf("Prime number Between 1 to %d is\n",&nPtr);
    for(*iptr=1;*iptr=*nptr;*iptr=*(iptr+1)){
         if(Prime(*iptr)=1){
              printf("%d\n",*nPtr);
             
         }
           
    }
    return 0;
 }
