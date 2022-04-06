#include<stdio.h>
#include<conio.h>
int mountain_array(int arr[])
{
     int start=0;
        int end=6;
        int mid;
        while(start<end)
        {
          mid=(start+end)/2;
         if(arr[mid]>=arr[0])
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
  int arr[]={4,5,6,7,0,1,2};

  int result=mountain_array(arr);

  printf("%d",arr[result]);

}


