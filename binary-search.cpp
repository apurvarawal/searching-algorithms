#include<bits/stdc++.h>
using namespace std;

int binarysearch(int* arr, int s, int e, int key){
    int mid = (s+e)/2;
    if(s>e){
    return -1;
    }
    if(arr[mid]==key){
        return mid;
    }
    if(key<arr[mid]){
        return binarysearch(arr,s,mid-1,key);
    }else if(key>arr[mid]){
        return binarysearch(arr,mid+1,e,key);
    }
}
int main(){
    int n;
    cin>>n;
    int arr[n];
    for(int i=0; i<n; i++){
        cin>>arr[i];
    }
    int key;
    cin>>key;
    
    if(binarysearch(arr,0,n-1,key)>=0){
        cout<<binarysearch(arr,0,n-1,key)<<endl;
        cout<<"Found"<<endl;
    }else{
        cout<<"Not found"<<endl;
    }
    return 0;
}