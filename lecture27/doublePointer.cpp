#include<iostream>
using namespace std;

void update(int **p2){
    // p2 = p2+1;
    // //kuch change hoga -- No

    // *p2 = *p2+1; 
    //kuch change hoga  -- yes

    **p2 = **p2+1;
    //kuch change hoga??

}

int main(){

    int i = 5;
    int* p = &i;
    int** p2 = &p;

   /*cout<<"Allright"<<endl;
    cout<<"Printing p"<< p <<endl;   //p ki value ya content hai
    cout<<"address of p"<< &p <<endl; //ye p ka address hai
    cout<<*p2<<endl;
    cout<<endl;

    cout<<i<<endl;
    cout<<*p<<endl;
    cout<<**p2<<endl;
    cout<<endl;

    cout<<&i<<endl;
    cout<<p<<endl;
    cout<<*p2<<endl; 

    cout<<&p<<endl;
    cout<<p2<<endl;
    */

  /* cout<<"before "<<i<<endl;
   cout<<"before "<<p<<endl;
   cout<<"before "<<p2<<endl;
   update(p2);
   cout<<"after "<<i<<endl;
   cout<<"after "<<p<<endl;
   cout<<"after "<<p2<<endl;
   */

  int first = 8;
  int second = 18;
  int *ptr = &second;
  *ptr = 9;
  cout<<first<<" "<<second<<endl;
}