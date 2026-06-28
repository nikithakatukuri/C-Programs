#include<stdio.h>
struct Student{
    int rollno;
    char name[50];
    float marks;
};
int main(){
    struct Student s[3];
    int i,max=0;
    for(i=0;i<3;i++){
        printf("Enter Roll No, Name, Marks: ");
         scanf("%d %s %f",&s[i].rollno,s[i].name,&s[i].marks);
    }
        for(i=1;i<3;i++){
            if(s[i].marks>s[max].marks)
            max=i;
        }
        printf("\n Top Student\n");
        printf("%s scored %.2f marks\n",s[max].name,s[max].marks);
return 0;
}
