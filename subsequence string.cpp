#include <bits/stdc++.h>
using namespace std;

void recur(string question, int i, vector<string>& answerArray, string answer) {
    if (i == question.length()) {
        answerArray.push_back(answer);
        return;
    }
    
    // Exclude the current character
    recur(question, i + 1, answerArray, answer);
    
    // Include the current character
    answer.push_back(question[i]);
    recur(question, i + 1, answerArray, answer);
}

int main() {
    string question = "abc";
    vector<string> answerArray;
    string answer = "";
    recur(question, 0, answerArray, answer);
    
    for (const string& s : answerArray) {
        cout << s << endl;
    }
    
    return 0;
}
