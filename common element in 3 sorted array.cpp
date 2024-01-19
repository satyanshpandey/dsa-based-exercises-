#include<iostream>
#include<vector>
using namespace std;

int main(){
    // initialize the variables for pointing arrays element and increment it till end.
    int i = 0;
    int j = 0;
    int k = 0;
    //initialize sorted vectors .
    vector<int>a {1,5,10,20,40,80};
    vector<int>b {6,7,20,80,100};
    vector<int>c {3,4,15,20,30,70,80,120};
    //initialize the size of the array.
    int a_size = a.size();
    int b_size = b.size();
    int c_size = c.size();

    //empty vector for storing array common element variable 
    vector<int>ans;
    // chceking for common element in arrays 
    while (i<a_size && j<b_size && k<c_size) //jab tak arrays ka size i se chota hai tabb tak ye loop challega.
    {
        if (a[i]==b[j] && b[j]==c[k])
        {
            // cout<<" Found Common element in array:"<<a[i]<<" ";
            ans.push_back(a[i]);
            i++, j++, k++;
        }
        else if (a[i]<b[j])
        {
            i++;
        }
        else if (b[j]<c[k])
        {
            j++;
        }
        else{
            k++; // q ki agar |-> (a[i]<b[j] <-|  ya  |->  b[i]<c[k]  <-| ye dono mese koi condition true nhi hua to , k++ karenge aaur uska index increment krke check karenge .
        }
        
    }
    cout<<"success-->";
    for (int i = 0; i < ans.size(); i++)
    {
        cout<<ans[i]<<" ";
    }
    
    
}