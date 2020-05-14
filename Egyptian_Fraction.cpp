#include<iostream>
#include<cstdio>
#include<cmath>
using namespace std;

void printEgyptian(int nr,int dr){
 int n;
 if(nr == 0 || dr == 0)
 return;

 if(dr%nr == 0){
 cout << "1/" << dr/nr;
 return;
 }
 if(nr%dr == 0){
 cout << nr/dr;
 return;
 }

 if(nr > dr){
     cout << nr/dr <<"+";
     printEgyptian(nr/dr,dr);
     }
 
 n=dr/nr+1;
 cout << "1/" << n << "+";
 printEgyptian((nr*n)-dr,dr*n);

}
int main(){
 int nr,dr;
 cin >> nr >> dr;
 
 printEgyptian(nr,dr);
   return 0;
}
