#include<iostream.h>
#include<stdio.h>
#include<conio.h>
void main()
{
     int x=-1, y=1, a, b;
     for (b=1;b<=20;b++)
     {
         a=x+y;
         cout<<a<<" ";
         x=y;
         y=a;
         }
         }
        system ("pause");
        return 0;
        }
