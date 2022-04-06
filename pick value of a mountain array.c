#include<stdio.h>
#include<conio.h>
int mountain_array(int arr[])
{
     int start=0;
        int end=3;
        int mid;
        while(start<end)
        {
          mid=(start+end)/2;
         if(arr[mid]<arr[mid+1])
         {
            start=mid+1;

         }

         else
         {

            end=mid;
          }

        }
    return start;

}
void main()
{
  int arr[]={0,10,5,2};

  int result=mountain_array(arr);

  printf("%d",arr[result]);

}

