//  //function in c--4 things should remember
//     //first--function name
//     //second--input/arguments/parameters
//     //third--return data type
//     //fourth--functin body

//     //rules of function --
//     //return data type_function_name(parameters//input1,input2...)
//     {
//         //your calculation
//         //do yours others stuff
//     return result;    
//     }


#include<stdio.h>
int get_sum(int x,int y)
    {
        int sum=x+y;
        return sum;
    }
    void say_hi()
    {
        printf("hi");
    }
int main()
{
    printf("Main starts\n");
    say_hi();
    int result=get_sum(10,20);
    printf("\nmy sum=%d",result);
    return 0;
}