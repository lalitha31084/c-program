#include<stdio.h>
int main(){
    int n,sum1=0,sum2=0,sum3=0;
    scanf("%d",&n);
    int arr[n];
    for(int i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    for(int i=1;i<=4;i++){
        sum1 = sum1+arr[i];
    }
    for(int i = 0; i<= 5;i++){
        sum2=sum2+arr[i];
    }
    for(int i =3 ; i<=6;i++){
        sum3=sum3+arr[i];
    }
    printf("%d %d %d",sum1,sum2,sum3);
}
