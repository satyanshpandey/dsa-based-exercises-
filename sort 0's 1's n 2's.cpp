#include<iostream>
#include<vector>
using namespace std;

int main(){

    vector<int>arr {1,1,1,2,2,2,2,0,0,0,0,0,1,0,0};
    int count0 = 0;
    int count1 = 0;
    int count2 = 0;
    int end = arr.size()-1;

   for(int i=0;i<arr.size();i++)
    {
        /* code */
        if(arr[i] == 0){
            count0++;
        }
        else if (arr[i]==1)
        {
            /* code */
            count1++;
        }
        else if (arr[i]==2)
        {
            /* code */
            count2++;
        }
             
    }
    // for (int i = 0; i < count0; i++)
    // {
    //     /* code */
    //     arr[i]=0;
    // }
    // for (int i = 0; i < count1; i++)
    // {
    //     /* code */
    //     arr[i]=1;
    // }
    // for (int i = 0; i < count2; i++)
    // {
    //     /* code */
    //     arr[i]=2;
    // }

    int i=0;
    while (count0--)
    {
        arr[i] = 0;
        i++;
    }
    while (count1--)
    {
        arr[i]=1;
        i++;
    }
    while (count2--)
    {
        arr[i]=2;
        i++;
    }
    
    for (int i = 0; i < arr.size(); i++)
    {
        /* code */
        cout<<arr[i]<<" ";
    }
}