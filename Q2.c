// Team
#include<stdio.h>
int main()
{
    int n;
    printf("Enter no of questions : ");
    scanf("%d",&n);
    int arr[n][3];
    printf("\n\n");
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<3;j++)
        {
            printf("Enter Petaya's Decision : ");
            scanf("%d",&arr[i][j]);
            j++;
            printf("Enter Vasyas's Decision : ");
            scanf("%d",&arr[i][j]);
            j++;
            printf("Enter Tonyas's Decision : ");
            scanf("%d",&arr[i][j]);
            printf("\n\n");
        }
    }
    int count = 0,g=0;
    for(int i=0;i<n;i++)
    {
        count = 0;
        for(int j=0;j<3;j++)
        {
            if(arr[i][j]==1) count++;
            else continue;
        }
        if(count>=2) g++;
    }
    printf("Output : %d",g);
    return 0;
}