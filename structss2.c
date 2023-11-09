#include<stdio.h>
#include<string.h>
struct Address{
	char street[20];
	char city[20];
	int postal_code;	
};

struct contact{
	
	char name[30];
	struct Address a;	
};
int main(){

struct contact p1;
p1.a.postal_code=12;
strcpy(p1.name,"Amir");
strcpy(p1.a.city,"Baku");
strcpy(p1.a.street,"Nizami");
printf("%s,%d,%s,%s",p1.name,p1.a.postal_code,p1.a.city,p1.a.street);}

