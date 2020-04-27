#ifndef SAPXEP_H
#define SAPXEP_H

#include<iostream>
using namespace std;
class sapxep
{
private:
    int a[100];
    int n;
    public:
        void tangdan(int a[],int n);
        void giamdan(int a[],int n);
        void hienthi();
        void nhap(int a[],int n);
        sapxep(int a[100],int n);

        sapxep();

    protected:

    private:
};

#endif // SAPXEP_H
