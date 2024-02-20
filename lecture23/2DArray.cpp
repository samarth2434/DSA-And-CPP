#include<iostream>
using namespace std;

bool isPresent(int arr[][3], int target, int row, int col) {

    for(int i=0; i<3; i++){
        for(int j=0; j<3; j++){
            if(arr[i][j] == target){
                return 1;
            }
        }
    }
    return 0;
}

//to print row wise sum  //function of row sum
void printSum(int arr[][3],int row, int col){
    cout<< "Printing sum -> " << endl;
     for(int i=0; i<3; i++){
        int sum = 0;
        for(int j=0; j<3; j++){
            sum += arr[i][j];
        }
        cout <<sum <<  " ";
    }
     cout<<endl;
}

//function of largest of row sum
int largestRowsum(int arr[][3], int row, int col ){

    int maxi = INT16_MIN;
    int rowIndex = -1;

    for(int row = 0; row<3; row++ ){
        int sum = 0;
        for(int col = 0; col<3; col++){
            sum += arr[row][col];
        }

        if(sum > maxi){
            maxi = sum;
            rowIndex = row;
        }
    }

    cout<<" the maximum sum is " << maxi <<endl;
    return rowIndex;


}


int main(){

    //create 2D Array
    int arr[3][3];
    // int arr[3][4] = {1,2,3,4,5,6,7,8,9,10,11,12};
    // int arr[3][4] = {{1,11,111,1111}, {2,22,222,2222}, {3,33,333,3333}}

    cout<<"Enter the elements"<<endl;

    
    //Taking input from user
    for(int i=0; i<3; i++){
        for(int j=0; j<3; j++){
            cin>>arr[i][j];
        }
    }

    cout<<"Printing the array"<<endl;
    //print output
    for(int i=0; i<3; i++){
        for(int j=0; j<3; j++){
            cout<<arr[i][j] <<  " ";
        }
        cout<<endl;
    }

/*  cout<<" Enter the element to search " << endl;
    int target;
    cin>>target;

    if(isPresent(arr, target, 3, 3)){
        cout<<" Element found " << endl;
    }
    else{
        cout<<" Not found" << endl;  
    }

    printSum(arr,3,3); 
*/
    int ansIndex = largestRowsum(arr,3,3);
    cout<<" Max row is at index " << ansIndex << endl;
    return 0;

}