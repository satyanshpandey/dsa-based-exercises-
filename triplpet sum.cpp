#include<iostream>
#include<vector>
using namespace std;

int main(){


    vector<int>arr = {10,20,30,40,50};
    // target sum 
    int sum = 80;

    for (int i = 0; i < arr.size(); i++)
    {
        int element1 = arr[i];
        /* code */
        for (int j = i+1; j < arr.size(); j++)
        {
            int element2 = arr[j];
            /* code */
            for (int k = j+1; k < arr.size(); k++)
            {
                int element3 = arr[k];
                /* code */
                if (element1+element2+element3 == sum)
                {
                    /* code */
                    cout<<element1<<" "<<element2<<" "<<element3<<" is the triplet."<<endl;
                }
                
            }
            
        }   
        
    }
    
}