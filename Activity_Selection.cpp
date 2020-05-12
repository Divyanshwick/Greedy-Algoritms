#include<iostream>
#include<algorithm>
using namespace std;
int main(){
    int n,i=0,cnt=1,j;
    
    cin >> n;
    
    int start[n],finish[n];
    
    for(i=0;i<n;cin >> start[i++]);
    
    for(i=0;i<n;cin >> finish[i++]);
    
    sort(finish,finish+n);
    
    for(j=1;j<n;j++){
        if(start[j] >= finish[i]){
            cnt++;
            i=j;;
        }
    }
    cout << "The max no. of activities done are: " << cnt;

return 0;
}
