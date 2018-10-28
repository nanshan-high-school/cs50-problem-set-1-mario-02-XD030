#include<iostream>
using namespace std;
int main(){
   int height;
   int i, j;
  cout<<"請輸入幾層(1~8):";
  cin>>height;
  if(height<0||height>9)
   cout<<"超出範圍";
   else
  for(i=1; i<=height; i++)
  {
  for(j=1; j<=height-i; j++)
  {
    cout<<" ";
  }
  for(int f=0; f<i; f++)
  {
    cout<<"#";
  }
    cout<<" ";
  for(int g=0; g<i; g++)
  {
    cout<<"#";
  } 
    cout<<"\n";
  }
  }
  
