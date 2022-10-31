#include<iostream>
using namespace std;

int BinarySearch(int nums[], int target);
int main(){
    int arr[] = {1, 2, 3, 43, 45, 56, 67};
    cout<< "Enter target: "<< endl;
    int target;
    cin >> target;
    cout << "At Index: "<< BinarySearch(arr, target);
    
    return 0;
}

int BinarySearch(int nums[], int target){
    int start = 0;
    int end = 6;
    int mid = (start + end) / 2;
    while (start <= end){
        if (nums[mid] == target){
            return mid;
        }
        if (nums[mid] > target){
            end = mid - 1;
            mid = (start + end) / 2;
        }
        if (nums[mid] < target){
            start = mid + 1;
            mid = (start + end) / 2;
        }
    }
    return -1;
}