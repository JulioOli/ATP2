#include<stdio.h>
#include<stdlib.h>
#include<math.h>
#include<stdbool.h>


    int x = 5;    // x instanciado de forma global

    void fun1(){                         //essa func usa o x no escopo global
        printf("\n%d\n\n",x);
    }

    void fun2(){                        //essa usa o x no escopo da função 2
        int x;
        printf("\n%d", x=2);
    }
int main()
{
    int x = 10;     // x instanciado na main
    fun1();
}