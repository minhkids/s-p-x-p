#include "sapxep.h"

sapxep::sapxep()
{
    this->n=0;
}
sapxep::sapxep(int a[],int n)
{
    this->n=n;
}
void sapxep::nhap(int a[],int n)
{
cout<<n<< " nhap so phan tu can tim: "<<endl;
}
void sapxep::hienthi(){
        for (int i = 0; i < n; i++)
            cout << a[i] << " day duoc sap xep la : ";
        cout << endl;
    }
