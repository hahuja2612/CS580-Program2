#include <stdio.h>
#include<string.h>
#include<limits.h>

int myStrStr(char haystack[], char needle[], char buffer[])
{
    int i=0, j=0, k=0,l=0,m=0;
    int result;

while(i<strlen(haystack))
{
    if (haystack[i]== needle[j])
    {
         k=i;

        while(haystack[k]==needle[j] && j<strlen(needle) && k<strlen(haystack))
        {

            buffer[j]=haystack[k];
            k++;
            j++;
        }
        if(j==strlen(needle)){
            buffer[j]='\0';
            return 1;
        }
        else
            j=0;
    }
    i++;
}
return 0;
}



unsigned int countOnes(int num){
int result=0;
int rem=0;
int flag=0;
if(num<0){
    num=num*-1;
    flag=1;
}
while(num>0)
{
rem= num%2;
if(rem==1)
{result++;
}
num=num/2;
}
if(flag==1)
    result = 32-result+1;
return result;
}



void binaryArray(int num, int *const array, int size){
    int rem=0, k=0;
    int flag=0;
    if(num<0){
        num=num*-1;
        flag=1;
        for(int i=0; i<size; i++)
            array[i]=1;
        --num;
    }
    else {
           for(int i=0; i<size; i++)
                array[i]=0;
    }
    while(num>0)
    {
        rem = num % 2;
        if(flag==0)
            array[31-k]=rem;
        else if(rem==1)
            array[31-k]=0;
        num = num / 2;
        k++;
    }
printf("binary number in reverse order\n");
for(int h = size-1; h >= 0; h--){
        printf("%d",array[h]);
 }
}
void binaryPrinter(int array[], int size){
printf("\n\n");
printf("binary number in normal order\n");
for(int h = 0; h <= size-1; h++){
        printf("%d",array[h]);
 }

}

