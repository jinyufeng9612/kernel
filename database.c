#include<stdio.h>
#include "type.h"
#include "database.h"
int main(){
	pList p;
	if(true==listinit(p,10))
	{
		printf("init complete!\n");
		printf("address of pList = %lld \n",p);
		printf("size of pList = %d \n",sizeof(*p));

	}
	else
	{
		printf("init failue");
	}
	return 0;
}
