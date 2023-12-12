#include<iostream>
using namespace std;
#include<vector>

int main(){

    int a;
    cout<<"Hell world!"<<endl;

// lets check size off the integer 
cout<<"Here we got the size of the integer "<<endl;
cout<<"This is size of integer variable a: "<<sizeof(a)<<endl;
cout<<"This is only integer size: "<<sizeof(int)<<endl;
cout<<"lets check the size of the  :::"<<endl;

vector<int> arr;
cout<<"We creted an vector and the size is:"<<sizeof(arr)<<endl;


cout<<"\n\n\n"<<endl;
int ans = (sizeof(arr)/sizeof(int ));
cout<<"this is ans : "<<ans<<endl;


arr.push_back(11);
cout<<arr[0]<<endl;

// lets create enother vector  
vector<int>ar{1,2,3,4,5,6,7,8,9};







cout<<"\n\n\n"<<endl;
cout<<"\n\n\n"<<endl;
cout<<"\n\n\n"<<endl;
cout<<"\n\n\n"<<endl;
// lets check how vector increase its size , 

// here we will create limited size array , and we will try to insert data into it more than mentioned 

vector<int>arrr(5555);
cout<<"size of vector before insert data into it "<<sizeof(arrr)<<endl;
cout<<"Difference of size n sizeof function: "<<arrr.size()<<endl;






int arr1[15]; // Declaration of an array of integers with 5 elements
size_t size = sizeof(arr1); // Getting the size of the array in bytes
std::cout << "Size of arr: " << size << " bytes" << std::endl;


    std::vector<int> emptyVec; // Creating an empty vector of integers

    std::cout << "Size of emptyVec: " << sizeof(emptyVec) << " bytes" << std::endl;





cout<<"\n\n\n"<<endl;
cout<<"\n\n\n"<<endl;
cout<<"\n\n\n"<<endl;
cout<<"\n\n\n"<<endl;


cout<<"New chappter of learning array:"<<endl;
vector<int>newArray(5);

// for(int i=0; i<newArray.size();i++){
//     cout<<newArray[i]<<" ";
// }

cout<<"Lets insert value in this array and after that we will check size of it:"<<endl;
cout<<"Size of the newArray is: "<<newArray.size()<<endl;
cout<<"Sizeof ----  newArr :"<<sizeof(newArray)<<endl;
cout<<"\n"<<"Now we will check after filing data into it:"<<endl;
int n;
for(int i=0; i<11;i++){
    cout<<"Insert value:";
    cin>>n;
    newArray.push_back(n);
}

cout<<"\n"<<"after push back data lets check vector size n data:"<<endl;
cout<<"Size of the newArray is: "<<newArray.size()<<endl;
cout<<"Sizeof ----  newArr :"<<sizeof(newArray)<<endl;
for(int i=0; i<newArray.size();i++){
    cout<<newArray[i]<<" ";
}

cout<<"Now all experiment is done!"<<endl;
    return 0;
}