#include<stdio.h>
int main()
{
    int arr[100]={0};
        int i,x,pos,n;
    printf("enter the size of array: ");
    scanf("%d",&n);
    printf("enter the elements of array\n");
    for(i=0;i<n;i++)
        scanf("%d",&arr[i]);
    printf("elements\n");
    for(i=0;i<n;i++)
        printf("%d ",arr[i]);
        printf("\n");
        //print the original arrray

        printf("\n");
        //elements to be inserted
        printf("Enter the element to be inserted\n");
        scanf("%d",&x);
        //position where you wish to insert the elements
        printf("Enter the position where you wish to insert the element\n");
        scanf("%d",&pos);
        //increase size by 1
        n++;
        //shift elements forward
        for(i=n-1;i>=pos;i--)
            arr[i]=arr[i-1];
            //insert x at pos
            arr[pos-1]=x;
       //print the updates array
        for(i=0;i<n;i++)
            printf("%d",arr[i]);
        printf("\n");
        return 0;

    }
