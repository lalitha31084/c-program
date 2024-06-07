//Linear search
#include<stdio.h>
int main(){
    int n,i;
    scanf("%d",&n);
    int arr[n];
    for( i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
        int key;
        scanf("%d",&key);
      for( i=0;i<n;i++){
          if(key==arr[i]){
              printf("%d",i);
              break;
          }
      }
      if(i==n){
          printf("ele not found");
      }
}