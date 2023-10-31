#include<stdio.h>
#include<stdlib.h>
int main(){
    int a[]={1,2,3,4,5}	;
    int size=5;
    printf("Left-1,Right-2\n");

    int y,x,i,temp,pos;
     scanf("%d",&x);
    int *ptr;
    printf("Enter position\n");
	scanf("%d",&pos);
	             y=0;
    ptr=(int*)malloc(pos*sizeof(int));
   
	switch(x){
		case 1:

			for(i=0;i<pos;i++)
			 ptr[i]=a[i];
			
			for(i=0;i<size-pos;i++)
			 a[i]=a[i+pos];
			 

            for(i=size-pos;i<size;i++){
            	a[i]=ptr[y];
            	y++;
			}
			free(ptr);
			break;				

		
			

		case 2:
			for(i=0;i<pos;i++)
			ptr[i]=a[size-pos+i];

			for(i=size-1;i>=pos;i--){
				a[i]=a[i-pos];
			}
            for(i=0;i<pos;i++)
                a[i]=ptr[i];
			free(ptr);
		    break;
		
			
				
			
		

		}
		for (i = 0; i < size; i++) {
        printf("%d ", a[i]);
    }	

		return 0;
		
		
		
	

		
		
		
		
		
		
	}
