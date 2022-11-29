/*Lonest substring
06-10-2022
Adith Ramdas
Roll No:5
*/

#include<stdio.h>
#include<string.h>


int unique(char str[],int start , int end)
{
int i,j;
for(i=start;i<end;i++)
  for(j=i+1;j<=end;j++)
     if(str[i]==str[j])
       return 0;

return 1;
}

void longsub(char str[],int *beg, int *end, int *len)
{
int i,j,l=0;
*len=0;
while(str[l]!='\0')
l++;
for(i=0;i<l;i++)
 for(j=i+1;j<=l;j++)

 if(unique(str,i,j))
  if(*len<(j-i+1))
  {
    *len=j-i;
    *beg=i;
    *end=j;
  }

}




void main()
{
char str[50];
int beg,end,len,i;
printf("Enter a string to be checked: ");
scanf("%s",str);
longsub(str,&beg,&end,&len);
printf("The longest substring is: ");
for(i=beg;i<=end;i++)
printf("%c",str[i]);
printf("\nThe length of the substring is: %d\n",len);
}