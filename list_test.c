#include "mylist.h"

#define CREATE
#define INSERT
#define SEARCH
#define DELETE_ELEMENT
#define DELETE
#define ENTRY


int CmpInt(void * x, void * y)
{
        int * a = (int *)x;
        int * b = (int *)y;
        if (* a == * b)
                return 1;
        return 0;
}

int main()
{
        pbox a = CREATE();

        int mass[2];
        mass[0] = 0;
        mass[1] = 1;

        data d = &mass[0];

        a->INSERT(a, d);

        a->INSERT(a, d+4);

        int tmp = 1;
        data temp = &tmp;

        if ((a->SEARCH(a, temp, CmpInt))->data) ;

        printf ("%d