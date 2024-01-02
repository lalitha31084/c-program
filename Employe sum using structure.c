#include<stdio.h>
struct employee{
   char name[50];
   char org [50];
    int year_of_join;
    long salary;
};
typedef struct employee EMP;
int main(){
    int n;
    EMP arr[n];
    scanf("%d\n",&n);
    for(int i=0;i<n;i++){
        scanf("%s\n%s\n%d\n%ld",&arr[i].name,&arr[i].org,&arr[i].year_of_join,&arr[i].salary);
        printf("name\torg\tyear_of_join\tsalary\n-------\n");
    }
    for(int i=0;i<n;i++){
        printf("%s\t%s\t%d\t\t%ld\n",arr[i].name,arr[i].org,arr[i].year_of_join,arr[i].salary);
        
    }
}