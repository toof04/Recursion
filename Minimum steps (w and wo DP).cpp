solution 1:
#include <bits/stdc++.h>
using namespace std;

int recur(int current , int top, int steps) {
    if(current == top){
        return 0;
    }
    if(current>top){
        return INT_MAX;
    }
    return  1 + min(recur(current+1,top,steps+1),recur(current+2,top,steps+2));
          
    }
    


int main() {
    int n = 5;
    int minimum = recur(0,n,0);
    
    cout<<"min number of steps you have to take to reach the top: "<<minimum;
 

}


--------------------------------------------------------------

solution 2 with paths:




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

