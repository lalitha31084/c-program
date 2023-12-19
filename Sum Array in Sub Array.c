#include<stdio.h>
int main(){
    int n = 5;
    int A[7]={2,10,9,3,5,6,1};
     int k = 12;
     int cnt = 0;
     for(int i = 0 ; i< 7;i++){
         for(int j = i ;j < 7; j++){
             int sum =0;
             for(int k = i ; k <= j ;k++){
                 sum+=A[k];
             }
             if(sum % n == 0){
                 cnt++;
             }
         }
     }
     printf("%d",cnt);
    
}
