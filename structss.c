#include<stdio.h>
#include<string.h>
#include<stdlib.h>
struct birthday{
	 int month;
	  int year;
};
struct person{
	char name[50];
	int age;
	struct birthday a;
};
int main(){

struct person *p=(struct person*)malloc(2*sizeof(struct person));
int i;
for(i=0;i<2;i++){
	printf("\nEnter name of person ");
	scanf("%s",p[i].name);
	printf("\nEnter age of person ");
	scanf("%d",&p[i].age);
	printf("\nEnter month of person's birthday ");
	scanf("%d",&p[i].a.month);
	printf("\nEnter year of person'birthday ");
	scanf("%d",&p[i].a.year);

}

for(i=0;i<2;i++){
	
	printf("\nName:%s ,Age:%d, Birthday:%d.%d",p[i].name,p[i].age,p[i].a.month,p[i].a.year);
	
	
	
	
	
	
	
	
	
	
	
	
}



free(p);









}
