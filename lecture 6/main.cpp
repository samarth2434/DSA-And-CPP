#include <iostream>
using namespace std;

// void printname(){
//     int n;
//     cout<<"Enter the value of n "<<endl;

//     cin>>n;
//     for(int i=0; i<n; i++){
//         cout<<"babbar"<<endl;
//     }
// }

int add(int a, int b ){     //function call
    int result = a+b;
    return result;
}

int findMax(int num1,int num2,int num3){   //max no ke liye function call
    if(num1>num2 && num1>num3){
        return num1;
    }
    else if(num2>num1 && num2>num3){
        return num2;
    }
    else{
        return num3;
    }
}

void printCounting(int n){    //counting 1 to N function call
    for(int i=1; i<=n; i++){
        cout<<i<<" ";
    }
    cout<<endl;
}

char getGrade(int marks){   //student and grade function call
    if(marks>=90)
    return 'A';
    else if(marks>=80)
    return'B';
    else if(marks>=70)
    return'c';
    else if(marks>=60)
    return'D';
    else
    return'E';
}

int getSum(int n){     //function call sum of n no
    int sum=0;
    for(int i=1; i<=n; i++){
        sum = sum+i;
    }
    return sum;
}

int getEvenSum(int n){     //function call even sum of n no
    int sum=0;
    for(int i=2; i<=n; i=i+2){
        sum = sum+i;
    }
    return sum;
}



int main(){

    // Sum of no

    // int n;
    // cout<<"enter the value of n"<<endl;
    // cin>>n;

    // int ans = getSum(n);

    // cout<<"Sum upto "<<n<<" is "<< ans <<endl;

    // return 0;

    // sum of even no

    int n;
    cout<<"enter the value of n"<<endl;
    cin>>n;

    int ans = getEvenSum(n);

    cout<<"Even sum is  "<< ans <<endl;

    return 0;   




    //student and grade program

    // int marks;
    // cout<<"Enter the marks: "<<endl;
    // cin>>marks;

    // char finalGrade=getGrade(marks);
    // cout<<finalGrade<<endl;

    // return 0;


    //counting a number 1 to N

    // int n;
    // cout<<"enter the value of n"<<endl;
    // cin>>n;

    // printCounting(n);

    // return 0;



    // find max no

    // int a ,b,c;
    // cin>>a>>b>>c;

    // int maximumNumber=findMax(a,b,c);
    // cout<<maximumNumber<<endl;


    //function call
    // printname();

    // int a ;
    // cout<<"Enter the value of a" <<endl;
    // cin>>a;

    // int b;
    // cout<<"Enter the value of b"<<endl;
    // cin>>b;

    // int sum=add(a,b);

    // cout<<"Addition result is: "<<sum<<endl;
    
}   