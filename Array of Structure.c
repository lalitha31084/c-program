//Array of Structures
#include <stdio.h>
struct student{
    char name[20];
    int age;
};
typedef struct student STU;
   int main(){
       int n;
     STU arr[n];
     scanf("%d\n",&n);
     for(int i =0;i<n;i++){
         scanf("%s\n%d",&arr[i].name,&arr[i].age);
     }
     printf("name\tage\n----------\n");
     for(int i=0;i<n;i++){
         printf("%s\t%d\n",arr[i].name,arr[i].age);
     }
}