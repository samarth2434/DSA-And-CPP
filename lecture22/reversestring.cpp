#include<iostream>
using namespace std;

char toLowerCase(char ch){       //function to convert uppercase into lowercase
    if(ch >= 'a' && ch <= 'z')
        return ch;
    else{
        char temp = ch - 'A' + 'a';
        return temp;
    }

}

bool checkPalindrome(char a[], int n){  // function to check this is palindrone
    int s = 0;
    int e = n-1;

    while(s<=e){
        if(a[s] != a[e]){
            return 0;
        }
        else{
            s++;
            e--;
        }
    }
    return 1;
}

void reverse(char name[], int n){  // function for reverse function
    int s =0;
    int e = n-1;

    while(s<e) {
        swap(name[s++], name[e--]);
    }
}

int getLength(char name[]) {   // function for the to find the string of char
    int count = 0;
    for(int i = 0; name[i] != '\0'; i++){
        count++;
    }

    return count;
}

int main(){

    char name[20];

    cout<<"Enter your name: "<<endl;
    cin>>name;    // taking input for the user

// print the length of the array
    cout<<"Your name is : ";
    cout<< name <<endl;
    int len = getLength(name);
    cout<<"Length: "<< len << endl;

// reverse the name
    reverse(name, len);
    cout<<"Your name is : ";
    cout<< name <<endl;

//print palindrome or not
    cout<<"Palindrome or Not: "<< checkPalindrome(name, len) << endl;

//print uppercase into lowercase
    cout<<"CHARACTER is"<<toLowerCase('b')<<endl;
    cout<<"CHARACTER is"<<toLowerCase('C')<<endl;



}