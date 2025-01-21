#include<stdio.h>
void ls(int arr[], int n, int key){

int i;
for(i=0;i<n;i++){
    if(key==arr[i]){
        printf("Key found at index : %d " ,i);
       
    }  
 }
}

void main(){

int n=10;
int arr[]={1,4,6,2,7,3,8,4,9,10};
int key=6;
ls(arr,n,key);

}
