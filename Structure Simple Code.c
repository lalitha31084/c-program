#include<stdio.h>
struct student{
    char name[20];
    int age;
};
int main(){
    int a;
    printf("%d\n",sizeof(a));
    struct student s1;
    printf("%d\n",sizeof(s1));
}