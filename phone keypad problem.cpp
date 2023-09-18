#include <bits/stdc++.h>
using namespace std;

void recur(string question, int j, vector<string>& answerArray, string answer, string mapping[]) {
    if (j == question.length()) {
        answerArray.push_back(answer);
        return;
    }
    int mapindex = question[j]-'0';
    
    for(int i = 0;i<mapping[mapindex].length();i++){
        answer.push_back(mapping[mapindex][i]);
        recur(question,j+1,answerArray,answer,mapping);
        answer.pop_back();
    }
}

int main() {
    string question = "23";
    vector<string> answerArray;
    string answer = "";
    
    string mapping[10] = {"", "", "abc", "def", "ghi", "jkl", "mno", "pqrs", "tuv", "wxyz"};
    
    recur(question, 0, answerArray, answer,mapping);
    
    for (const string& s : answerArray) {
        cout << s << endl;
    }
    
    return 0;
}
