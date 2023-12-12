// experiment with all posible way to find the best solution for Maximum integer of an array.cpp

#include<iostream>
using namespace std;
#include<limits.h>

int main(){

// we will try to find the best way to find maximum number of an array or minimum number of an array 
// 1. we will try for all POSITIVE integers 
int arr1[] = {55,45,76,334,22,45,22,11};

// 2. we will try for all Zero values 
int arr2[] = {0,0,0,0,0,0,0,0};

// 3. we will try for all 'Zero n Positive'
int arr3[] = {0,340,0,4,0,55,45,111};

// 4. we will for 'Zero and Negative'
int arr4[] = {0,-12,0,-34,-345,-34,-2,0};

// 5. we will try on all 'Positive and Negatives and Zero' values 
int arr5[] = {-4,-3,-5,-233,0,5,3,-3};

int size = 8;
int max = INT_MIN;
// int max1 = arr1[0]; //arr2[0],arr3[0],arr4[0],arr5[0]
// int max1 = arr2[0]; //arr2[0],arr3[0],arr4[0],arr5[0]
// int max1 = arr3[0]; //arr2[0],arr3[0],arr4[0],arr5[0]
// int max1 = arr4[0]; //arr2[0],arr3[0],arr4[0],arr5[0]
int max1 = arr5[0]; //arr2[0],arr3[0],arr4[0],arr5[0]



cout<<"Here we are checking array with Zero index number."<<endl;
for (int i = 0; i < size; i++)
{
    if (arr5[i]>max1)
    {
        /* code */
        max1 = arr5[i];

    }
    
}
cout<<"Maximum integer of array is:"<<max1<<endl<<endl<<endl<<endl;





cout<<"Here we are checking array with INT_MIN number."<<endl;
for (int i = 0; i < size; i++)
{
    /* code */
    if (arr5[i]>max)
    {
        /* code */
        max = arr5[i];
    }
    
}
cout<<"Maximum integer of array is:"<<max<<endl;


return 0;

}


