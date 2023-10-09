#include <iostream>
using namespace std;

int main()
{
    int n;
    cin >> n;

     //Fancy pattern
     for(int row=0; row<n; row=row+1){
        for(int col=0; col<row+1; col=col+1){
            cout<<row+1;
            if( col!=row )
            cout<<"*";
        }
        cout<<endl; 
     }

     for(int row=0; row<n; row=row+1){
        
        for(int col=0; col<n-row; col=col+1){
            cout<<n-row;
            if(col!=n-row-1)
            cout<<"*";
        }
        cout<<endl;
     }

    // Hollow diamond
    // for(int row=0; row<n; row=row+1){
    //     //spaces
    //     for(int col=0; col<n-row-1; col=col+1){ 
    //         cout<<" ";
    //     }
    //     //stars
    //     for(int col=0; col<2*row+1; col=col+1){
    //         //if first character or if last charcter 
    //         if(col == 0){
    //             //first character
    //             cout<<"*";
    //         }
    //         else if(col == 2*row){
    //             //last ch
    //             cout<<"*";
    //         }
    //         else{
    //             cout<<" ";
    //         }
    //     }
    //     cout<<endl;
    // }

    // // Inverted hollow pyramid

    // for(int row=0; row<n; row=row+1){
    //       //spaces
    //       for(int col=0; col<row; col=col+1){
    //         cout<<" ";
    //       }

    //       //stars
    //       for(int col=0; col<2*n-2*row-1; col=col+1){
    //         //if first or last charcter
    //         if(col==0 ||col== 2*n-2*row-2){
    //             cout<<"*";
    //         }
    //         else{
    //             cout<<" ";
    //         }
            
    //       }
    //       cout<<endl;
    // }



    // //full pyramid
   
    // // outer loop
    // for (int row = 0; row < n; row = row + 1){
        
    //     // inner loop
    //     // Space print karege
    //     for (int col = 0; col < n - row - 1; col = col + 1)
    //     {
    //         cout <<" ";
    //     }

    //     // stars print karege
    //     for (int col = 0; col < row + 1; col = col + 1)
    //     {
    //         cout << "* ";
    //     }
    //     cout << endl;
    // }


    // // Inverted full pyramid  

    // for(int row=0; row<n; row=row+1) {
    //     //spaces
    //     for(int col=0; col<row; col = col+1){
    //         cout<<" ";
    //     }

    //     //stars
    //     for(int col=0; col<n-row; col = col +1 ){
    //         cout<<"* ";
    //     }
    //     cout<<endl;
    // }
}