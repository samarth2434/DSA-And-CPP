#include<iostream>
using namespace std;

//create the function 
void reverse(string& str, int i, int j){ //string& - pass by reference 
 
cout<<"call recieved for "<< str <<endl;
    //base case 
    if(i>j)
    return;

    //recrsive relation one case solve 
    swap(str[i], str[j]);
    i++;
    j--;

    //recursive call
    reverse(str, i, j);

}

int main(){

    string name = "samarth";
    cout<<endl;

    //call the function 
    reverse(name, 0, name.length()-1);
    cout<<endl;
    cout<<name<<endl;

    return 0;


}