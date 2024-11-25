#include <iostream>
#include<stack>
using namespace std;

int main(){
    // done the queston in the leetcode 
    /*
    class solution {
    public:
    bool isValid(string s){

    stack<int> st;

    for(int i=0; i<s.length(); i++){
    char ch = s[i];

    //opening bracket
    if(ch = '(' || ch = '{' || ch = '['){
    st.push(ch);
    }
    else{
    //closing bracket 
    if(!st.empty()){
    char topCh = st.top();
    if(ch == ')' && topCh == '(') {
    //matching bracket
    st.pop();
    }
    else if(ch == '}' && topCh == '{}') {
    //matching bracket
    st.pop();
    }
    else if(ch == ']' && topCh == '[]') {
    //matching bracket
    st.pop();
    }
    else{
    return false;
    }
    }
    }
    };

    */

    return 0;
}