#include<stdio.h>
void reverse(int A[],int n){
    int i=0;
    int j=n-1;
    while(i<j){
        int temp=A[i];
        A[i]=A[j];
        A[j]=temp;
        i++;
        j--;
    }
}
    int main(){
        int A[5]={1,2,3,4,5};
        int *ptr=A;
        reverse(A,5);
        for(int i= 0; i<5;i++){
            printf("%d",A[i]);
        }
    }
