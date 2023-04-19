#include<stdio.h>
void main() {
    int arr[100];
    int pos,x,n,i,ch,j,num;
    printf("enter the number of element:");
    scanf("%d",&n);
    printf("enter the elements:");
    for(i=0;i<n;i++)
        scanf("%d",&arr[i]);
    for(i=0;i<n;i++)
        printf("%d\t",arr[i]);
        printf("\n\n**MENU**\n");
        printf("1.INSERTION\n2.DELETION\n3.SEARCH AN ELEMENT\n");
        printf("what you want to do?");
        scanf("%d",&ch);
        switch(ch)
        {
        case 1:
            {
                printf("\nenter the element you want to insert:");
                scanf("%d",&x);
                printf("\nenter the position where you want to insert:");
                scanf("%d",&pos);
                n++;
                for(i=n-1;i>=pos;i--)
                    arr[i]=arr[i-1];
                arr[pos]=x;
                printf("\n*****UPDATED ARRAY*****\n");
                for(i=0;i<n;i++)
                printf("%d\t",arr[i]);
                break;
            }
        case 2:
            {
                printf("\nenter the element you want to delete:");
                scanf("%d",&pos);
                for(j=0;j<n;j++){
                if(pos==arr[j])
                break;
                }
                if(j<n){
                for(i=j;i<n-1;i++)
                    arr[i]=arr[i+1];
                arr[n-1]=0;
                n--;
                for(i=0;i<n;i++)
                printf("%d\t",arr[i]);
                }
                else{
                printf("element not found");
                }
                break;
            }
        case 3:
            {
            printf("\nenter the element you want to find:");
            scanf("%d",&num);
            for(i=0;i<n;i++){
                if(num==arr[i])
            break;
            }
            if(i<n)
                printf("%dfound at index%d",num,i);
            else
                printf("element not found");
            }
        }
        }
