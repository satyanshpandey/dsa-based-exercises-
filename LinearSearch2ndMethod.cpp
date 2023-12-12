#include<iostream>
using namespace std;

int main(){

    int arr[] = {1,2,3,4,45,5,6,66,66};
    int key;
    int size = 9;
    bool c = 1;
while(c){
    // we are creating flag variable here , if flag is eaqual to 0 , then  element is not present , if flag == 1, then element is present.
    bool flag = 0;
    // int c;
    // int key;
    cout<<"Enter key value: ";
    cin>>key;
// loop for linear search 
    for(int i=0; i<size;i++){
        if(arr[i] == key){
            // cout<<"Found!"<<endl;
            flag = 1;
        }
    }

    if(flag){
        cout<<"Present"<<endl;
    }
    else{
        cout<<"Not found!"<<endl;;
    }

  
    
    cout<<"y/n : "<<endl;
    char c;
    cin>>c;
    if(c == 'y'){
        c=1;
    }
    else{
        c=0;
    }
    
}
}