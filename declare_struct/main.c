/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <stdio.h>

struct test_struct {
    int test_1;
    int test_2;
    int test_3;
};
#define PARAM2
//#define 
#define FUNCTION_MY_STRUCT_INIT(n) FUNCTION_STRUCT_INIT(n,PARAM2)

#define FUNCTION_STRUCT_INIT(n,PARAM2)
struct test_struct test_struct = {\
    .test_1 = 1,\
    .test_2 = 2,\
    PARAM2    \
};

//#define FUNCTION_CONCAT(n)
//int my_int##n = 1;\

int main()
{
    FUNCTION_MY_STRUCT_INIT(1)
    //FUNCTION_CONCAT(2)
    printf("Hello World");
    printf("test_struct.test_1: %d\n",test_struct.test_1);
    printf("test_struct.test_2: %d\n",test_struct.test_2);
    printf("test_struct.test_3: %d\n",test_struct.test_3);
    //printf("fucntion concat:%d",my_int2);
    return 0;

}
