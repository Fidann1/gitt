#include<stdio.h>
#include<string.h>
#include<stdlib.h>
struct manufacturer{
	char name[20];
	char location[30];
	
	
};
struct Product{
	char name[30];
	float price;
	struct manufacturer a;
};
int main(){
	struct Product *P=(struct Product*)malloc(3*sizeof(struct Product));
	 P[0]=(struct Product){"Butter",10,{"Salahoglu","Qarayev, Nizami"}	};
     P[1]=(struct Product){"Bread",2,{"Salahoglu","Qarayev,Azer Manafov"}	};
	 P[2]=(struct Product){"Oil",20,{"Feyzullah","Genclik"}	};	
	
	int i;
	for(i=0;i<3;i++){
		printf("\nName:%s -Price:%f-Manufacturer's Name :%s-Manufacturer's location:'%s",P[i].name,P[i].price,P[i].a.name,P[i].a.location);
		
	}
	
	
	
	
	
	
	free(P);
	
	
	
}
