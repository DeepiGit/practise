/*
Sort descending order based on frequency and for same frequency sort ascending

Sample Input 
n = 10(size of the array)
arr = 2 2 3 2 1 3 1 4 4 4 

Sample output
2 2 2 4 4 4 1 1 2 2 
*/

#include<stdio.h>
void swap(int * n1, int * n2)
{
    int temp;
    temp = *n1;
    *n1 = *n2;
    *n2 = temp;
}

int main()
{
    int num, i, j;
    scanf("%d",&num);
    int arr[num];
    for(i = 0; i < num; i++)
        scanf("%d",&arr[i]);
    int res[num][2];
    for(i = 0; i < num; i++)
    {
        res[0][i] = 0;
        res[1][i] = 0;
    }
    
    j = 0;
    for(int k = 0; k < num; k++)
    {
        for(i = 0; i < num; i++)
        {
            if(res[i][0] == arr[j])
            {
                res[i][1]++;
                j++;
                printf("Step: %d, i = %d %d %d\n", k, i, res[i][0], res[i][1]);
                break;
            }
            else if(res[i][0] == 0)
            {
                res[i][0] = arr[j];
                res[i][1]++;
                j++;
                printf("Step: %d, i = %d %d %d\n", k, i, res[i][0], res[i][1]);
                break;
            }
        }

    }

    for(i = 0; i < num; i++)
    {
        if(res[i][1] == 0)
            break;
        for(j = i + 1; j < num; j++)
        {
            if(res[i][1] < res[j][1])
            {
                swap(&res[i][1], &res[j][1]);
                swap(&res[i][0], &res[j][0]);
            }
            else if(res[i][1] == res[j][1])
                if(res[i][0] > res[j][0])
                {
                    swap(&res[i][1], &res[j][1]);
                    swap(&res[i][0], &res[j][0]);
                }
            else if(res[j][1] == 0)
                break;
        }
    
    while(res[i][1])
    {
        for(j = 0; j < res[i][1]; j++)
            printf("%d ",res[i][0]);
        i++;
    }
   return 0;

}

