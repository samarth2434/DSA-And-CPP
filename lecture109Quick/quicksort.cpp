#include <iostream>
using namespace std;

//partition ka function 
int partition(int arr[], int s, int e){
  //step1: choose pivot element 
  int pivotIndex = s;    //copy pivot index 
  int pivotElement = arr[s];  //copy pivot element  

  //step 2: find the right position for pivot element and place it there 
  int count = 0;
  for(int i=s+1; i<=e; i++){
    if(arr[i] <= pivotElement){
        count++;
    }
  }
  //jab main loop se bahar hua toh mere pass pivot ki right position ka index ready hai
  int rightIndex = s + count;
  swap(arr[pivotIndex], arr[rightIndex]);
  pivotIndex = rightIndex;
  //step 3: left me chote and right me bade 
   int i = s;
   int j = e;

   while(i < pivotIndex && j > pivotIndex){
    while(arr[i] <= pivotElement){
      i++;  
    }
    while(arr[j] > pivotElement){
        j--;
    }

    //2 case ho sakta hai ->
    //A-> you found the element to swap
    //B-> no need to swap 
    if(i < pivotIndex && j > pivotIndex)
    swap(arr[i], arr[j]); 
   }
    return pivotIndex;

}
//quickSort function for recursion 
void quickSort(int arr[], int s, int e){
   //base case 
   if(s>=e)
   return ; 

   //partition logic , return pivotIndex
   int p = partition(arr, s, e);

   //Recursive calls 
   //pivot element ke left me 
   quickSort(arr, s, p-1);

   //right
   quickSort(arr, p+1, e);
}

int main(){
    int arr[] = {8,1,3,4,20,50,30};
    int n=7;

    int s = 0;
    int e = n-1;
    quickSort(arr, s, e);

    //print 
    for(int i=0; i<n; i++) {
        cout<<arr[i]<<" ";
    }
    cout<<endl;
    return 0;
}