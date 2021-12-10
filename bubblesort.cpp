#include <iostream>
using namespace std;

int main()
{
 int n,i;
 cin>>n;
 int A[n];
 for(i=0;i<n;i++){
 cin>>A[i];
 }
 int flag , k , temp;
 for( k=1; k<n ; k++) 
  {
    flag = 0;
    for( i=0 ; i<n-k ; i++)
    {
      if(A[i] > A[i+1])
      {
        temp = A[i];
        A[i] = A[i+1];
        A[i+1] = temp;
        flag = 1;
      }
   }
    if(flag == 0 ){
    break;
    }
  }
 for(i=0;i<n;i++)
  {
    cout<<A[i]<<" ";
  }
  return 0;
}

