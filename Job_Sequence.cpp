#include<iostream>
#include<bits/stdc++.h>
using namespace std;
struct Job{
    char id;
    int dead;
    int profit;
};

bool compare(Job a,Job b){
 return (a.profit > b.profit);
}

void MaxProfit(Job arr[],int n){
 int i,j;

sort(arr,arr+n,compare);

int res[n]={0};
int slot[n]={0};

for(i=0;i<n;i++){
 for(j=min(n,arr[i].dead)-1;j>=0;j--){
     if(slot[j] == 0){
         res[j] = i;
         slot[j] = 1;
         break;
     }

 }
}

for(i=0;i<n;i++){
    if(slot[i])
      cout << arr[res[i]].id << " ";
}



}

int main(){
 int n,i;
 cin >> n;
 Job arr[n];
 
 for(i=0;i<n;i++)
     cin >> arr[i].id >> arr[i].dead >> arr[i].profit;
    
     MaxProfit(arr,n);    
 
return 0;
}
