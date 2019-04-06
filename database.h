#ifndef _DATABASE_H_
#define _DATABASE_H_
#include "type.h"
#include <stdlib.h>
typedef struct
{
    int index;
    char *data;
}Row;
typedef struct
{
    int Capcity; /*最大容量*/
    int size; /*当前大小*/
    Row L[0];
}List,*pList;

bool listinit(pList p,int Capcity){
    p=malloc(sizeof(Row)*(Capcity-1)+sizeof(List));
    if(p!=NULL){
        return true;
    }
    else{
        return false;
    }
}
#endif
