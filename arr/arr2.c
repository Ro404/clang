#include<stdio.h>
struct student{
        int roll;
        float marks;
        int year;
};
int main(){
        struct student s1;
        printf("enter a roll marks year:");
        scanf("%d %f %d",&s1.roll,&s1.marks,&s1.year);
        struct student s2;
        printf("enter a roll marks year:");
        scanf("%d %f %d",&s2.roll,&s2.marks,&s2.year);
        struct student s3;
        printf("enter a roll marks year:");
        scanf("%d %f %d",&s3.roll,&s3.marks,&s3.year);
        printf("%d\n",s1.roll);
        printf("%f\n",s1.marks);
        printf("%d\n",s1.year);
        printf("%d\n",s2.roll);
        printf("%f\n",s2.marks);
        printf("%d\n",s2.year);
        printf("%d\n",s3.roll);
        printf("%f\n",s3.marks);
        printf("%d\n",s3.year);


}
