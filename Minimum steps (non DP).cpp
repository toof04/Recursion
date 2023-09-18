#include <bits/stdc++.h>
using namespace std;

void recur(int current , int top, vector<int>ans, int &minimum) {
    if(current == top){
        for (auto i:ans){
            cout<<i<<"->";
        }
        cout<<"reached top level";
        if(ans.size()<minimum){
            minimum=ans.size();
            cout<<" -- this is the current min path -- ";
        }
        cout<<endl;
        return;
    }
    
         
         ans.push_back(current);
    
    if(current+1<=top){
        recur(current+1,top,ans,minimum);
    }
    if(current+2<=top){
        recur(current+2,top,ans,minimum);
          
    }
    
}

int main() {
    int n = 5;
    int minimum = INT_MAX;
    vector<int>ans;
    recur(0,n,ans,minimum);
    
    cout<<"min number of steps you have to take to reach the top: "<<minimum;
 

}
