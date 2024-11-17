#include<iostream>
using namespace std;

void update2(int& n){   // pass by ref
    n++;
    
}

void update(int n){    //-- pass by value concept 
    n++;
}

int main(){

    /*int i =5;
    //create the ref variable 
    int&j = i;
    cout<<i<<endl;
    i++;
    cout<<i<<endl;
    j++;
    cout<<i<<endl;
    */

  /*int n = 5;    //-- pass by value 

   cout<<"Before "<<n<<endl;
   update(n);
   cout<<"After "<<n<<endl;
   update(n); */

int n= 5;
   cout<<"Before "<< n <<endl;
   update2(n);
   cout<<"After "<<n<<endl;  

}