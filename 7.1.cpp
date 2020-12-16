#include <iostream>
using namespace std;
int main()
{int n,m, i, j, k;
 cout<<"Input size of matrix: ";
 cin>>n;
 m=n;
 int **matrix = new int *[n];
 for (i=0;i<n;i++)
  matrix[i]= new int [m];
 for (i = 0; i < n; i++)
  for (j = 0; j < n; j++)
  	matrix[i][j]=0;
 for (i = 0; i < n; i++)
  for (j = 0; j < n; j++)
    if (j==(n-1))
  	 cout<<matrix[i][j]<<endl;
    else 
      cout<<matrix[i][j];
 cout<<"1: diagonal filling\n"<<"2: reverse diagonal filling\n";
 cout<<"3: zigzag filling\n"<<" filling withoud diagonals\n";
 cout<<"Input number of action: ";
 cin>>k;
 switch(k)
 {case 1:
  for (i = 0; i < n; i++)
   for (j = 0; j < n; j++)
   	if(i==j)
  	 matrix[i][j]=1;
  for (i = 0; i < n; i++)
  for (j = 0; j < n; j++)
  	if (j==(n-1))
     cout<<matrix[i][j]<<endl;
    else 
      cout<<matrix[i][j];
  break; 
  case 2:
   for (i = 0; i<n; i++)
   for (j = n-1; j >= 0; j--)
    if (j+i==n-1)
  	 matrix[i][j]=1;
  for (i = 0; i < n; i++)
  for (j = 0; j < n; j++)
  	if (j==(n-1))
     cout<<matrix[i][j]<<endl;
    else 
      cout<<matrix[i][j];
  break;
  case 3:
   for (i = 0; i < n; i++)
    for (j = 0; j < n; j++)
   	 if(i==j)
  	  matrix[i][j]=1;
   for (i = 0; i<n; i++)
    for (j = n-1; j >= 0; j--)
   	 if(j+i==n-1)
  	  matrix[i][j]=1;
   for (i = 0; i < n; i++)
    for (j = 0; j < n; j++)
  	 if (j==(n-1))
     cout<<matrix[i][j]<<endl;
    else 
      cout<<matrix[i][j];
  break;
  case 4:
  for (i = 0; i < n; i++)
    for (j = 0; j < n; j++)
     matrix[i][j]=1;
   for (i = 0; i < n; i++)
    for (j = 0; j < n; j++)
   	 if(i==j)
  	  matrix[i][j]=0;
   for (i = 0; i<n; i++)
    for (j = n-1; j >= 0; j--)
   	 if(j+i==n-1)
  	  matrix[i][j]=0;
   for (i = 0; i < n; i++)
    for (j = 0; j < n; j++)
  	 if (j==(n-1))
     cout<<matrix[i][j]<<endl;
    else 
      cout<<matrix[i][j];   
  break;
 } 
}
