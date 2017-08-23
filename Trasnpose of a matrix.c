#include <stdio.h>

int main()
{
    int arr1[100][100],arr2[100][100],n,m,i,j,temp;
    scanf("%d %d",&n,&m);
    for(i=0;i<n;i++)
    {
      for(j=0;j<m;j++) 
      {
          scanf("%d ",&arr1[i][j]);
      }
    }
    for(i=0;i<m;i++)
    {
      for(j=0;j<n;j++) 
      {
          arr2[i][j]=arr1[j][i];
          printf("%d ",arr2[i][j]);
      }
      printf("\n");
    }
}
