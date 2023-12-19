#include<stdio.h>
int main(){
    int n = 5;
    int A[5]={1,2,3,4,5};
    //start point
    for(int i = 0; i< n ;i++){
        //end point
        for(int j = i ; j < n;j++){
            //to print
            for(int k = i ; k <= j; k++){
                printf("%d ",A[k]);
    }
    printf("\n");
}
      }
 }
