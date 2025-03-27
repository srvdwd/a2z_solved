#include <iostream>
using namespace std;
#include <math.h>

int greaterin2(int n1, int n2){
    if(n1 > n2){
        return n1;
    }
    else{
        return n2;
    }
}

int update_array(int my_arr[]){
    //updating first element of array
    my_arr[0]= 420;
    cout << "inside the function" << endl;
    for(int i=0; i < 3; i++){
        cout<< my_arr[i] <<endl;
    }
}

int reversing_array1(int arr[],int size){
    // if even elements
    if(size % 2 == 0){
        int n = size/2;
        for(int i=0; i< n; i++){
            int swap = arr[i];
            arr[i] = arr[size-1-i];
            arr[size-1-i] = swap;
        }
    }
    // if odd elements
    else{
        int n = (size+1)/2;
        for(int i=0; i< n; i++){
            int swap = arr[i];
            arr[i] = arr[size-1-i];
            arr[size-1-i] = swap;
        }
    }
}

int reversing_array2(int arr[], int size){
    int start = 0;
    int end = size-1;
    
    while(start < end){
        swap(arr[start++] , arr[end--]);
    }
}

int main(){

 //question 30:how to initialize an array with specific value
    // int arr[5]={-5};
    // arr[-3]=4;
    // arr[-2]=7;
    // arr[-1]=456;
    // arr[0]=234;
    // arr[1]=5;
    // for(int i=-3; i<=1; i++){
    //     cout<< arr[i] << endl;
    // }

    //question 31:printing size of array
    // int arr[9]={2,4,6,76,57,8};
    // int n = sizeof(arr)/sizeof(int);
    // cout<< "size of arr in byte is " << sizeof(arr) <<endl;
    // cout<< "size of arr in terms of no. of elements is " << n <<endl;
    

    //question 32:printing array with for loop
    // int myArray[5]={32,6,74,3,46};
    // int length= sizeof(myArray) / sizeof(int);

    // for(int ind=0; ind < length; ind++){
    //     cout<< myArray[ind] <<endl;
    // }
    // cout<< endl;
    

    //question 33:taking input in array using loop
    // int myArray[5];
    // int length= sizeof(myArray) / sizeof(int);
    // for(int idx=0; idx < length; idx++){
    //     cin>> myArray[idx];
    // }
    
    // cout<< endl;

    // //check
    // for(int ind=0; ind < length; ind++){
    //     cout<< myArray[ind] <<endl;
    // }


    //question 34:taking no. of i/p as variable 
    // int a;
    // cout<< "enter size of array: ";
    // cin>> a;
    // int arr[a];
    // int n= sizeof(arr) / sizeof(int);
    // for(int i=0; i < n; i++){
    //     cin>> arr[i];
    // }
    // cout<< endl;
    // for(int ind=0; ind < n; ind++){
    //     cout<< arr[ind] <<endl;
    // }

 // question 35:find the largest value
//   int myArray[5]={32,6,74,3,46};
//   int greatest;
//   for(int i=0; i<4; i++){
//       greatest= greaterin2(greatest , myArray[i+1]);
//       //updating the next comparable value
//       myArray[i+1] = greatest;
//   }
//   cout<< greatest << endl;

  //   for (int i = 0; i < 6; i++){
  //       cout << myArray[i] << " ";
  //   }

  // question 36: array is pass by reference
//    int arr[3]= {3,5,6};

//   update_array(arr);

//   cout<< "returned to main function" <<endl;
//    for(int i=0; i<3; i++){
//       cout<< arr[i] <<endl;
//   }

  // question 37: sum of n elements of array
//    int arr[4]={34,6,3,2};
//    int sum=0;
//    for(int i=0; i<4; i++){
//        sum += arr[i];
//    }
//    cout<< sum;

  // REVERSING AN ARRAY
  // question 38: reversing an array
//   int arr[9] = {2,24,53,3,5,6,7,8,9};

  // // by function 1:
  // // reversing_array1(arr,9);

  // // by function 2;
//   reversing_array2(arr,9);
//   for (int i = 0; i < 9; i++)
//   {
//       cout << arr[i] << " ";
//   }

  // question 39: swap alternate elements in array
//    int integer[9] = {1,2,3,4,5,6,7,8,9};
//    int size = sizeof(integer) / sizeof(int);

//   for (int i = 0; i < size - 1 ; i += 2)
//   {
//       swap(integer[i] , integer[i+1]);
//   }

//   for (int  i = 0; i < size; i++)
//   {
//       cout << integer[i] << " ";
//   }

  // LEETCODE PROBLEMS
  // question 41: unique number of occurance

  // CODESTUDIO
  // question 40: find unique
  //  int arr[9] = {2,4,2,5,4,1,5,1,9};
  //  int ans = arr[3]^arr[8];
  //  cout << ans;

  // method - 2:
  //  int findUnique(int *arr, int size){

  // int ans;
  // for(int i = 0; i < size; i++){

  //     int ans;
  //     int j = 0;
  //     while(j != i){
  //         if(arr[i] == arr[j]){
  //             break;
  //         }
  //         else if(arr[i] != arr[j]){
  //             j++;
  //             continue;
  //         }
  //     }

  //     ans = arr[i]
  // }
  // return ans;

  // question 42: find duplicates in array
  //  method-1
  //  int n;
  //  cin >> n;
  //  int arr[n];
  //  //giving input from 1 to n-1
  //  for(int i=1; i<n; i++){
  //      cin >> i;
  //  }
  //  int a;
  //  cout << "the repeated number is: ";
  //  cin >> a;
  //  //finding it
  //  for(int i=0; i<n; i++){
  //      for(int j=i+1; j<n; j++){
  //      if(arr[i]^arr[j] == 0){
  //          cout << "answer is: " << arr[i] <<endl;
  //      }
  //      }
  //  }

  // method-2 : tle error aa raha hai
  // int findDuplicate(vector<int> &arr, int n){

  // for(int i = 0; i < n ; i++){
  // 	for(int j = i + 1; j < n; j++){
  // 		if(arr[i] == arr[j]){
  // 			return arr[i];
  // 		}
  // 	}
  // }
  // }

  // question 43: find all duplicates in an array

  // question 44: intersection of two array

  // question 45: pair sum

  // question 46: triplet with given sum

  // question 47:sort 012

  // ques


}