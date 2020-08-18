#include <iostream>
#include <string.h>
#include <iomanip>
using namespace std;
#define max 100
void FB(char a[max], int m, char y[max], int n);
int main(){
  char a[max];
  char y[max];
  cout<<"Ingrese el caracter: "<<endl;
  cin.get(a,max);
  cout<< "Ingrese el caracter a buscar: "<<endl;
  cin>>y;
  int m=strlen (a);
  int n=strlen (y);
  FB(a, m, y, n);
  return 0;
}
void FB(char a[max], int m, char y[max], int n)
{
int k,i,j, band=0;
for(i=0;i<=m-n;i++){
  k=i;j=0;
  while(a[k]== y[j] && j<=n){
    k++;j++;}
  if(j>n-1)
    {cout<<"Se ecuentra en "<<i+1<<endl; band=1;}
}
}