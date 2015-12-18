#include<iostream>
using namespace std;
int main()
{
for ( int i=0 ; i<5 ; i++ )
{
if (i<3)
{ 
for (int a=0 ; a<=i ; a++ )
{cout<<"*";}
cout<<"\n" ;
}

else

{
for (int a=5 ; a>i ; a--)
{cout<<"*";}
cout<<"\n" ;
}

}

system ("pause");
return 0;
}
