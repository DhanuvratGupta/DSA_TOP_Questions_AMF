#include<stdio.h>
#include<conio.h>
int first_occur(int arr[],int a)
{

    int mid;
    int start=0;
    int end=8;
    int i=-1;
    while(start<=end){
      mid=(start+end)/2;

      if(arr[mid]==a)
       {
           i=mid;
           end=mid-1;

       }

       if(arr[mid]>a)
       {
           end=mid-1;
       }
       if(arr[mid]<a)
       {
           start=mid+1;
       }
    }


    return i;
}
int last_occur(int arr[],int a)
{

    int mid;
    int start=0;
    int end=8;
    int i=-1;
    while(start<=end){
      mid=(start+end)/2;

      if(arr[mid]==a)
       {
           i=mid;
           start=mid+1;

       }

       if(arr[mid]>a)
       {
           end=mid-1;
       }
       if(arr[mid]<a)
       {
           start=mid+1;
       }
    }


    return i;
}
void main()
{
  int arr[]={2,3,3,3,3,3,3,3,4};
  int ar[5];
  printf("Enter No that u want to search:- ");
  int a;

  scanf("%d",&a);

  int result1=first_occur(arr,a);
  int result2=last_occur(arr,a);

    printf("(%d,%d)",result1,result2);
  //find total no of occur.......
  //use formula (first occur-last occur)+1
  int total_occur=(result2-result1)+1;
  printf("%d",total_occur);
}

