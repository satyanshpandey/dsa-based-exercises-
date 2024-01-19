#include<iostream>
using namespace std;



// now we will define find function here 
bool find(int aarr[] , int key , int size){


// linear search 
    for(int i=0; i<size ; i++){
        if(aarr[i] == key){
            return true;
        }

        // else 
        
    }
    return false;
}



int main(){

// linear search operation on array.
int aarr[] = {1,2,3,4,5,6,7};
int size = 7;

int key;
cout<<"Enter key to find:"<<endl;
cin>>key;

if(find(aarr , key , size)){
    cout<<"Found!"<<endl;
}
else{
    cout<<"Not found!";
}

}
