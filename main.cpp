#include <iostream>

using namespace std;

int main()
{
 int n,cont=0;cin>>n;
 int a[101];
 int b[101];
 for (int i=0; i<n ;++i)
    cin>>a[i]>>b[i];


 for (int i=0;i<n ;i++){
    for (int j=0;j<n;j++){
    if(a[i]==b[j])
    cont ++;
 }}

cout<<cont;
    //الحل الاسهل هو اتنين اراي


    return 0;
}
