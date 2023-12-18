#include<stdio.h>
void Display(int i){
    if(i >= 10)return;
    printf("Good Morning\n");
    Display(i+1);
}
int main(){
    Display(9);
}
