#include <iostream>
using namespace std;
void fibonaci(int a)// 1.masukan nama fungsi type void //int a sebagai variabel penerima
{
     int x=1,y=1,fibo;
for (int i=1;i<=a;i++)
    {
        if (i==1||i==2)//dikondosikan untuk suku 1 dan 2 nilainya 1
       {
          fibo=1;
       }
       else
       {
           fibo= x+y;
           x=y;
           y=fibo;
       }
    
    }
    cout<<"fibonacinya adalah : "<<fibo<<endl;     
}

int deret(int a)
{
int x=1,y=1,p,i;
cout<<"deret fibonacci: "<<endl;
cout<<x<<" ";
cout<<y<<" ";
for(i=0;i<=a-3;i++)
{
p=x+y;
cout<<p<<" ";
x=y;
y=p;
}
cout<<endl;
}
int main()
{
int a;
    cout<<"masukan suku fibonaci ke : ";
    cin>>a;
    fibonaci(a);//untuk memanggil fungsi
    deret(a);//memangil fungsi deret fibonacci
system("pause");
return 0;
}
