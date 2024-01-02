#include<stdio.h>
struct rectangle{
    float len,wid,area,per;
};
typedef struct rectangle REC;
int main(){
    REC r1;
    REC r2;
    scanf("%f\n%f\n",&r1.len,&r1.wid);
    scanf("%f\n%f",&r2.len,&r2.wid);
    r1.area = r1.len*r1.wid;
    r1.per = 2*(r1.len + r1.wid);
    r2.area =r2.len*r2.wid;
    r2.per = 2*(r2.len*r2.wid);
    printf("%.2f\t%.2f\t",r1.area,r1.per);
    printf("%.2f\t%.2f",r2.area,r2.per);
}