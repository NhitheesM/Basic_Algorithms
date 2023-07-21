// Sorting 3 digits
#include <bits/stdc++.h> 
void sort012(int *arr, int n)
{
   int temp[3]={0,0,0};
   for(int i=0;i<n;i++){
      temp[arr[i]]+=1;
   }
   int k=0;
   for(int i=0;i<3;i++){
      for(int j=0;j<temp[i];j++){
         arr[k]=i;
         k++;
      }
   }
  
}
// Dutch National Flag algorithm