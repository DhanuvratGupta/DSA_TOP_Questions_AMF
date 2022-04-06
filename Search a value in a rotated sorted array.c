int mountain_array(int nums[])
    {
        int start=0;
        int end=6;
        int mid;
        while(start<end)
        {
          mid=(start+end)/2;
         if(nums[mid]>=nums[0])
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
int search_element(int arr[],int a,int start,int end)
    {

    int mid;
    mid=(start+end)/2;
    if(start<=end)
    {
      if(arr[mid]==a)
       {

          return mid;
       }
      else if(arr[mid]>a)
       {
        end=mid-1;
        return search_element(arr,a,start,end);

       }
      else
       {
        start=mid+1;
        return search_element(arr,a,start,end);
       }
    }

    return -1;
   }

void main(){
        int nums[]={4,5,6,7,0,1,2,3};
        int index=-1;
        int target;
        printf("Enter target value that u want to search:- ");
        scanf("%d",&target);
        int pivot=mountain_array(nums);

        if(target>=nums[pivot] && target<=nums[6])
        {
            printf("%d",search_element(nums,target,pivot,6));
        }
       else
       {
            printf("%d",search_element(nums,target,0,pivot-1));

       }

    }


