#include<iostream>
using namespace std;

bool checkPalindrome(string str, int i, int j){
    //base case 
    if(i>j)
    return true;

    //recursive relation
    if(str[i] != str[j])
    return false;

    else{
        //recursion sambhal lega 
        return checkPalindrome(str, i+1, j-1);
    }

}

int main(){

    string name = "abbccbba";
    cout<<endl;

    bool isPalindrome = checkPalindrome(name, 0, name.length()-1);

    if(isPalindrome){
        cout<<"Its a palindrome"<<endl;
    }
    else{
        cout<<"Its not a palindrome"<<endl; 
    }


    return 0;
}