//insertion at the specific position
#include <iostream>
using namespace std;
int main(){
    int x,n,pos;
    int marks[10];
    cout<<"Enter size of an array"<<endl;
    cin>>x;
    cout<<"taking array input from the useer "<<endl;
    for(int i=0;i<x;i++){
        cin>>marks[i];
        
    }
    cout<<"enter the place where element is inserted "<<endl;
    cin>>n;
    if(n>x||n<1){
        cout<<"place enter is invalid "<<endl;

    }
    cout<<"enter the no to be inserted "<<endl;
    cin>>pos;
    for(int i=x-1;i>=n-1;i--){
        marks[i+1]=marks[i];

    }
    marks[n-1]=pos;
    for(int i=0;i<x;i++){
       cout<< marks[i]<<endl;
    }
    return 0;
}
