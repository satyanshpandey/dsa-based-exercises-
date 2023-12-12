#include<iostream>

using namespace std;

int main(){
    
// array declalre 
int arr[11];
cout<<"Array declare: "<<arr<<endl;

//array initialization
int arrr[] = {1,2,3,4,5,6};
cout<<"Array created successfully!"<<endl;

cout<<arrr<<endl;

// lets check arrays values after printing 
cout<<arrr[0]<<endl;
cout<<arrr[1]<<endl;
cout<<arrr[2]<<endl;
cout<<arrr[3]<<endl;
cout<<arrr[4]<<endl;
cout<<arrr[5]<<endl;


cout<<endl<<endl<<endl<<endl;

int ar1[5] = {5,4,3,2,1};
cout<<"again array2 created successfully!"<<endl;
int ar2[13] = {1,2,3,4,5};


// i am creating an character array which size is 10;
char chr[10] = {
    'a','b','c'
};

cout<<"Char array created successfully!"<<endl;


int myNumbers[5] = {10, 20, 30, 40, 50};
	int getArrayLength = sizeof(myNumbers);
	cout <<"size of: "<< getArrayLength;
    

return 0;

}