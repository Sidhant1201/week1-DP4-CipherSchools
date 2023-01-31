#include<bits/stdc++.h>
using namespace std;

void sortOne(int arr[], int n){

    int p0 =0 , p1 =0 , p2 = n-1;
    while(p1 <= p2){
        if(arr[p1] == 0){
            swap(arr[p0], arr[p1]);
            p0++;
            p1++;
        }
        else if(arr[p1] == 1){
            p1++;
        }
        else{
            swap(arr[p1], arr[p2]);
            p2--;
        }
        
    }

}

int main(){
    int arr[] = {2,2,2,2,1,0,1,1,1,1};
    sortOne(arr, 10);
    for(auto x: arr){
        cout << x<< " ";
    }
    return 0;
}