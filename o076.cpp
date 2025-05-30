#include<bits/stdc++.h>
using namespace std;

int main () {
    int n=0,high,length=1,max=0;
    cin>>n;
    int hight[100];
    for (int a=0; a<n; a++) {
        cin >> hight[a];
    }
    for (int b=0; b<n-1; b++) {
        
        if (hight[b+1] < hight[b]) {
            length++;
        }
        else if (hight[b+1] > hight[b]) {
            length=1;
        }
        if (length > max) {
            max=length;
        } 
    }
    cout << max; 
    
    // if(max==2)
    // {
    //     for(int i=0;i<n;++i)
    //     {
    //         cout<<hight[n]<<"\n";
    //     }
    // }
    return 0;
}
