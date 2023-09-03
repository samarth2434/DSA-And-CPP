#include <iostream>
using namespace std;

int main()
{
    // //declare a integer type variable
    // int score;

    // //print Enter the score
    // cout<< "Enter the score"<<endl;

    // //Take input into score variable
    // cin >> score;

    // //if conditional
    // if(score<300) {
    //     cout<<"India wins" << endl;
    // }
    // else{
    //     cout<<"Pak wins"<<endl;
    // }

    // int marks;
    // cin >> marks;
    // // Nested if else
    // if (marks >= 90)
    // {
    //     cout << "A grade";
    // }
    // else
    // {
    //     if (marks >= 80)
    //     {
    //         cout << "B grade";
    //     }
    //     else
    //     {
    //         if (marks >= 60)
    //         {
    //             cout << "C grade";
    //         }
    //         else
    //         {
    //             if (marks >= 40)
    //             {
    //                 cout << "D grade";
    //             }
    //             else
    //             {
    //                 cout << "F grade";
    //             }
    //         }
    //     }
    // }

    // if-else if-else

    // if (marks >= 90)
    // {
    //     cout << "A";
    // }
    // else if (marks >= 80)
    // {
    //     cout << "B";
    // }
    // else if (marks >= 60)
    // {
    //     cout << "C";
    // }
    // else if (marks >= 40)
    // {
    //     cout << "D";
    // }
    // else
    // {
    //     coutt << "F";
    // }

    // question given by sir

    // int bronum;
    // cin>>bronum;

    // if (bronum==0)
    // {
    //     cout<<"Baat ban jayege";
    // }
    // else
    // {
    //     cout<<"Baat nhi banage";
    // }

    // FOR LOOP

    // for (int i = 0; i < 5; i = i + 1)
    // {
    //     cout << "Love Babbar" << endl;
    // }

    // for (int i = 5; i > 0; i = i - 1)
    // {
    //     cout << i << endl;
    // }

    // for(int i = 1; i<=10; i=i+1){
    //     cout<<2*i<<endl;
    // }

    // for (int i = 0; i <= 5; i = i + 2)
    // {
    //     cout << i << endl;
    // }

    // for (int i = 1; i < 10; i = i * 2)
    // {
    //     cout << i << endl;
    // }

    //   for (int i = 100; i > 0; i = i / 2 )
    // {
    //     cout << i << endl;
    // }

    //   for (int i = 5; (i>=0 && i<=10); i = i + 1)
    // {
    //     cout << i << endl;
    // }

    // if(cout<<"love babbar"<<endl){
    //     cout<<"love babbar"<<endl;
    // }

    //printing solid rectangle
    //outer loop for row observation
    // for(int row=0; row<3; row=row+1)
    // {
    //     //inner loop for col obsevartion  
    //     for(int col=0; col<5; col=col+1)
    //     {
    //         cout<<"*";
    //     }
    //     cout<<endl; 

    // }


    //Square rectangle

    // for(int row=0; row<4; row=row+1)
    // { 
    //     for(int col=0; col<4; col=col+1)
    //     {
    //         cout<<"*";
    //     }
    //     cout<<endl;

    // }

    //Hollow recatangle

    // for(int row=0; row<3; row=row+1){
    //     //first row and last row toh print kardo 5 *
    //     if(row == 0 || row == 2){
    //         for(int col=0; col<5; col++) {
    //             cout<<"*";
    //         }
    //     }
    //     else{
    //         //remainging middle rows
    //         //first star
    //         cout<<'*';
    //         //spaces
    //         for(int i=0; i<3; i=i+1){
    //             cout<< " ";
    //         }
    //         //last star
    //         cout<< "*";
    //     }
    //     cout<< endl;
    // }

    // int rowCount, colCount;
    // cin>> rowCount;
    // cin>> colCount;

    // for(int row=0; row<rowCount; row=row+1){
    //     //first row and last row toh print kardo 5 *
    //     if(row == 0 || row == rowCount-1){
    //         for(int col=0; col<colCount; col++) {
    //             cout<<"*";
    //         }
    //     }
    //     else{
    //         //remainging middle rows 
    //         //first star
    //         cout<<"* ";
    //         //spaces
    //         for(int i=0; i<colCount-2; i=i+1){
    //             cout<<" ";
    //         }
    //         //last star
    //         cout<<"* ";
    //     }
    //     cout<<endl;
    // }

    // HALF PYRAMID

    //no of rows 
    // int n;
    // cin>>n;

    // for(int row=0; row<n; row=row+1) {
    //     for(int col=0; col<row+1; col=col+1){
    //         cout<<"*";
    //     }
    //     cout<<endl;
    // }

    // INVERTED HALF PYRAMID

    // int n;
    // cin>>n;

    // for (int row=0; row<n;  row=row+1) {
    //     for(int col=0; col<n-row; col=col+1){
    //         cout<<"*";
    //     }
    //     cout<<endl;
    // }

    //NUMERIC HALF PYRAMID
    //no of rows = n
    // int n;
    // cin>>n;
    // for (int row=0; row<n; row=row+1){
    //     for(int col=0; col<row+1; col=col+1) {
    //         cout<<col+1;
    //     }
    //     cout<<endl;
    // }

    // INVERTED NUMERIC HALF INVERTED 
    int n;
    cin>>n;
    for (int row=0; row<n; row=row+1){
        for(int col=0; col<n-row; col=col+1) {
            cout<<col+1;
        }
        cout<<endl;
    }





    
}
