#include<iostream>
#include<algorithm>
using namespace std;

struct Activity{
    int start,finish;
};

bool Compare(Activity n1,Activity n2){
    return (n1.finish < n2.finish);
}

int printActivities(Activity arr[],int n){
    
    sort(arr,arr+n,Compare);

    int i=0;
    cout << "(" << arr[i].start << "," << arr[i].finish << "),";
   
    for (int j=1;j<n;j++) { 
     if (arr[j].start >= arr[i].finish) { 
        cout << "(" << arr[j].start << ", "<< arr[j].finish << "), "; 
        i = j; 
      } 
    }
}
int main(){
  int n,i;
  cin >> n;
  Activity arr[n];
   for(i=0;i<n;i++)
     cin >> arr[i].start >> arr[i].finish;
    
    printActivities(arr,n);
    
   return 0;
}
