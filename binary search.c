//binary search binary_search_iterative
#include<stdio.h>
int binary_search_iterative(int*arr,int low,int high,int n,int key){
    while(low<=high){
        int mid;
        mid=(low+high)/2;
        if(arr[mid]==key){
            return mid;
        }
        else if(arr[mid]>key){
            high=mid-1;
        }
        else{
            low=mid+1;
        }
    }
    return -1;
}

         //binary search binary_search_recursion
/*int binary_search_recursion(int *arr,int low,int high,int n,int key){
    int mid;
    if(low>high){
        return -1;
    }
    else{
        mid=(low+high)/2;
        if(arr[mid]==key){
            return mid;
        }
        else if(arr[mid]>key){
            return binary_search_recursion(arr,low,high-1,n,key);
        }
        else{
            return binary_search_recursion(arr,low+1,high,n,key);
        }
    }
}*/
int main(){
    int low,high,n,key;
    scanf("%d",&n);
    int arr[n];
    for(int i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    scanf("%d",&key);
    //printf("%d",binary_search_recursion(arr,0,n-1,n,key));
    printf("%d",binary_search_iterative(arr,0,n-1,n,key));
}