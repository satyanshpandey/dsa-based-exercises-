#include<iostream>
using namespace std;

int counting(int arr[] , int size){
    int count_0 = 0;
    int count_1 = 0;
    for(int i=0;i<size;i++){
        if(arr[i] == 1){
            count_1++;
        }
        if(arr[i]==0){
            count_0++;
        }
    }
return cout<< count_1, count_1;
}

int main(){

int arr[] = {0,0,0,0,0,0,1,1,1,1,0};
int size = 11;

// calling countng function 
counting(arr , size);

return 0;

}