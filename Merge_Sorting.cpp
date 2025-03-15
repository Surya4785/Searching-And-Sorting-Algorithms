#include <iostream>
void merge(int *a,int l,int m,int u)
{
    int i=l;
    int j=m+1;
    int k=l;
    int b[50];
    while(i<=m && j<=u)
    {
        if(a[i]<a[j])
        b[k++]=a[i++];
        else
        b[k++]=a[j++];
    } 
    while(i<=m)
    {
        b[k++]=a[i++];
    }
    while(j<=u)
    {
        b[k++]=a[j++];
    }
    for(i=l;i<=u;i++)
    a[i]=b[i];   
}
void mergeSort(int *a, int l, int u)
{
    int m; 
    if(l<u)
    {
        m=(l+u)/2;
        mergeSort(a,l,m);
        mergeSort(a,m+1,u);
        merge(a,l,m,u);
    }
}
int main() {
    int a[]={19,775,81,6,1,77};
    int i;
    mergeSort(a,0,5);
    for(i=0;i<=5;i++)
    std::cout <<"\t"<<a[ i ];
    return 0;
}
