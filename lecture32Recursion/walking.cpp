#include<iostream>
using namespace std;

//--------function 
void reachHome(int src, int dest){

    cout<<"source " <<src<<" destination " <<dest<<endl;

    //base case 
    if(src == dest){
        cout<< "end tak Pahuch gaya"<<endl;
        return;
    }

    //Precessing - ekstep aage badhjao
    src++;

    //recursive call 
    reachHome(src, dest);
}

int main(){

    int dest = 10;  //destination 
    int src = 1;    //source

    cout<<endl; 

    //call the function 
    reachHome(src, dest);


    return 0;
}