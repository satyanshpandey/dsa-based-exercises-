#include<iostream>
#include<vector>
#include<limits.h>
using namespace std ;

int main(){


vector<int> arr {1,2,3,3,4,5,6,7,8};
vector<int> brr {3,6,6,7,8,9};

vector<int> ans;

for (int i = 0; i < arr.size(); i++)
{
    /* code */
    int element = arr[i]; // for comparision bits 
    for (int j = 0; j < brr.size(); j++)
    {
        /* code */
        if (element == brr[j])
        {
            brr[j] = INT_MIN;
            // mark the value if it matched 
            // because whenever we don't mark it then it will again check 
            // for any next same values and cause output error:
            // so just mark here your matched value with any negative value 
            // for next time it should not be matched and not to be repeated with any one


            /* code */
            ans.push_back(element);
            break; // ye break hum es liye lagaye hai , q ki agr vaalue match hui to aage agr same value hoto usse essi loop me check nhi krna , nhi to pehle loop se koi ek value 2nd loop me 2 se 3 baar match kr sakti h and output sahi mhi aayega phir .
            
            /*
            or : you also can do:
            ans.push_back(brr[j]);
            brr[j] = INT_MIN;
            break;
            */
            
          
        }
        
    }
    
}


//printing arrays intersection values 
for (int values : ans)
{
    /* code */
    cout<<values<<" ";
}


}