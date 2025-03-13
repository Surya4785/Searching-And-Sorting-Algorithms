/* illustrate linear search on the following 9 elements:
Index: 0 1 2 3 4 5 6 7 8
Elements: -15 -6 0 7 9 23 54 82 101
Searching different elements is as follows:
1. Searching for x = 7Search successful, data found at 3rd position.
2. Searching for x = 82Search successful, data found at 7th position.
3. Searching for x = 42Search un-successful, data not found. */

# include <stdio.h>
# include <conio.h>
main(){
     int number[25], n, data, i, flag = 0;
     clrscr();
     printf("\n Enter the number of elements: ");
     scanf("%d", &n);
     printf("\n Enter the elements: ");
  
for(i = 0; i < n; i++)
     scanf("%d", &number[i]);
     printf("\n Enter the element to be Searched: ");
     scanf("%d", &data);
for( i = 0; i < n; i++){
if(number[i] == data){
    flag = 1;
    break;
    }
  }
if(flag == 1)
    printf("\n Data found at location: %d", i+1);
    else
    printf("\n Data not found ");
}
