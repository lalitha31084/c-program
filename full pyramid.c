#include <stdio.h>
int main(){
    int n,space = 1;
    scanf("%d",&n);
    for(int i = 1; i<= n; i++){
        for(int k = n-i ; k>0; k--){
        printf(" ");
    }
    for(int j = 1; j <=space;j++){
        printf("*");
    }
     space+=2;
    for(int k = n -i ; k > 0; k--){
        printf(" ");
    }
    printf("\n");
    }
    return 0;
}
