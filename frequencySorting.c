/*
Sort descending order based on frequency and for same frequency sort ascending

Sample Input 
n = 10(size of the array)
arr = 2 2 3 2 1 3 1 4 4 4 

Sample output
2 2 2 4 4 4 1 1 2 2 
*/

#include<stdio.h>
int main()
{
    int num, i, j;
    scanf("%d",&num);
    int arr[num];
    for(i = 0; i < num; i++)
        scanf("%d",&arr[i]);
   return 0;

}

