#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main(){
    int length ;
    cout<<"Enter the length of the array: ";
    cin>>length;
    vector <int> arr;
    for(int i=0;i<length;i++){
        int element;
        cout<<"Enter "<<i<<"element  :";
        cin>>element;
        arr.push_back(element);
    }

    sort(arr.begin(),arr.end());

    // cout<<"Sorted array is: ";
    // for(int i=0;i<arr.size();i++){
    //     cout<<arr[i]<<" ";
    // }

    // for(int i=0;i<arr.size();i++){
    //     if(arr[i]==arr[i+1]){
    //         arr.erase(arr.begin()+i);
    //     }
    // }

    int sum =0;
    for(int i=0;i<arr.size();i++){
        if(arr[i]==arr[i+1]){
            continue;
        }else{
            sum +=arr[i];
        }
    }
    cout<<"The sum of the unique elements in the array is: "<<sum<<endl;
    return 0;
}