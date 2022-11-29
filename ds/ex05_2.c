#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct Customer{
    char *firstnm,*middlenm,*lastnm,*acctype;
    int accno,balance;
};

void search(struct Customer *p,int N)
{
    int i,skey,found=0;
    printf("Enter the account number to be searched : ");
    scanf("%d",&skey);
    for(i=0;i<N;i++)
        if ((p+i) -> accno == skey)
        {
            found=1;
            printf("CUSTOMER WITH ACCOUNT NUMBER %d FOUND.\n",skey);
            printf("NAME : %s %s %s\nACCOUNT NUMBER : %d\nBALANCE : %d\n",(p+i) -> firstnm,(p+i) -> middlenm,(p+i) -> lastnm,(p+i) -> accno,(p+i) -> balance);
            break;
        }
    if (!found)
        printf("CUSTOMER WITH ACCOUNT NUMBER %d NOT FOUND.\n",skey);
}

void retrieveBalance(struct Customer *p,int N)
{
    int i,skey,found=0;
    printf("Enter the account number to be searched : ");
    scanf("%d",&skey);
    for(i=0;i<N;i++)
        if ((p+i) -> accno == skey)
        {
            found=1;
            printf("CUSTOMER WITH ACCOUNT NUMBER %d HAS BALANCE %d.\n",(p+i) -> accno,(p+i) -> balance);
            break;
        }
    if (!found)
        printf("ANY CUSTOMER WITH ACCOUNT NUMBER %d NOT FOUND.\n", skey);
}

void display(struct Customer *p,int N)
{
    int i,j;
    struct Customer temp;
    for(i=0;i<N-1;i++)
    {
        for(j=0;j<N-i-1;j++)
        {
            if (strcasecmp(((p+j) -> firstnm),(p+j+1) -> firstnm) > 0)
            {
               temp = *(p + j);
               *(p+j) = *(p + j +1);
               *(p +j+1) = temp;
            }
        }
    }
    printf("SORTED LIST OF CUSTOMERS :\n");
    for(i=0;i<N;i++)
        printf("%s\t",(p+i) -> firstnm);
    printf("\n");
}

void accountType(struct Customer *p,int N)
{
    int i,j;
    for(i=0;i<N;i++)
    {
        if (strcasecmp((p+i) -> acctype,"FD")==0)
            printf("NAME : %s %s %s\nACCOUNT NUMBER : %d\nBALANCE : %d\n",(p+i) -> firstnm,(p+i) -> middlenm,(p+i) -> lastnm,(p+i) -> accno,(p+i) -> balance);

    }
}
void main()
{
    struct Customer *p;
    int N,i, n;
    printf("Enter the no of inputs : ");
    scanf("%d",&N);
    p=(struct Customer *)malloc(N*sizeof(struct Customer));
    for(i=0;i<N;i++)
    {
        p[i].firstnm=(char *)malloc(30*sizeof(char));
        p[i].middlenm=(char *)malloc(30*sizeof(char));
        p[i].lastnm=(char *)malloc(30*sizeof(char));
        p[i].acctype=(char *)malloc(6*sizeof(char));
        printf("Enter details of customer %d :\n",i+1);
        printf("Enter firstname : ");
        scanf("%s",(p+i) -> firstnm);
        printf("Enter middlename : ");
        scanf("%s",(p+i) -> middlenm);
        printf("Enter last name : ");
        scanf("%s",(p+i) -> lastnm);
        printf("Enter account number : ");
        scanf("%d",&(p+i) -> accno);
        printf("Enter account type : ");
        scanf("%s",(p+i) -> acctype);
        printf("Enter balance : ");
        scanf("%d",&(p+i) -> balance);
    }
    while(1){
        printf("Operations:\n**********\nAccount Search(1): \nBalance(2): \nCustomer Sort(3):\nFD Customers(4):\nEnd(5):\n***********\nYour Option: ");
        scanf("%d" , &n);
        switch(n){
            case 1:
                search(p,N);
                printf("\n");
                break;
            case 2:
                retrieveBalance(p,N);
                printf("\n");
                break;
            case 3:
                display(p,N);
                printf("\n");
                break;
            case 4:
                accountType(p,N);
                printf("\n");
                break;
            case 5:
                printf("Terminating all operations.........\n");
                exit(1);
        }
    }
}