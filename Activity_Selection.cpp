#include<iostream>
#include<algorithm>
using namespace std;
int main(){
    int n,i,cnt=1,j=0;
    cin >> n;
    int start[n],finish[n];
    for(i=0;i<n;cin >> start[i++]);
    for(i=0;i<n;cin >> finish[i++]);
    sort(finish,finish+n);
    for(i=0;i<n-1;i++){
        if(start[i+1] >= finish[j]){
            cnt++;
            j=i;;
        }
    }
    cout << cnt;

    
    
   return 0;
}
