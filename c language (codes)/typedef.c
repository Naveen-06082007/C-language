#include<stdio.h>
typedef struct point 
{
    int x;
    int y;
};
typedef struct point Point;
// typedef to function pointer accepting two void ptr. and return integer
int main()
{
    // typedef to primitive datatype
    typedef int integer;


    // typedef to charater array
    typedef char chararray[100];


    // creating variables for all types
    


    //  use point point type
    Point point={10,20};



    //  use integer typedef
    integer num=100;


    // use character array typedef
    chararray name="Naveen Thakur";


    printf("point.x=%d and poinr.y=%d\n",point.x,point.y);
    printf("the vlaue of num-->%d",num);

    return 0;
}


    


