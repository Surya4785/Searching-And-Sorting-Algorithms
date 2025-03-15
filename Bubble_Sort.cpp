#include<iostream.h>
void bubbleSort(int);
int main() {
    cout<<"\t ENTER INTEGERS\n";
    int unsort[5],i;
  
for(i=0;i<=4;i++)
    cin>>unsort[i];
    bubbleSort(unsort);
    return 0;
}
void bubbleSort(int unsort[5]) { 
  int i,j,x,swap;
  for(i=0;i<4;i++)
  {
    swap=0;
     for(j=0;j<4;j++)
     {
       if(unsort[j]>unsort[j+1];
          {
           unsort[j]=unsort[j]+unsort[j+1];
           unsort[j+1]=unsort[j]-unsort[j+1];
           unsort[j]=unsort[j]-unsort[j+1];
           swap=1;
          }
     }
     for (x=0 ; x<=4 ; x++)
     {
       cout << "\t" << unsort[x];
     }
   if (swap == 0)
    break;
    cout << "\n";
   }
}            
