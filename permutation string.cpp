#include <bits/stdc++.h>
using namespace std;

void recur(string question, int i, vector<string>& answerArray) {
    if (i == question.length()) {
        answerArray.push_back(question);
        return;
    }
    
    for(int j = i;j<question.length();j++){
        swap(question[i],question[j]);
        recur(question, i + 1, answerArray);
       swap(question[i],question[j]);
    } 
}

int main() {
    string question = "abc";
    vector<string> answerArray;
    recur(question, 0, answerArray);
    
    for (const string& s : answerArray) {
        cout << s << endl;
    }
    
    return 0;
}
