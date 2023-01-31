#include<bits/stdc++.h>
using namespace std;

//merginng two sorted array using two pointers approach
void sortNmerge(vector<int> &a, int m, vector<int> &b, int n){
    int k = m+n-1;
    int i = m-1;
    int j = n-1;

    while(i>=0 && j>=0){
        if(a[i] > b[j]){
            a[k] = a[i];
            i--;

        }
        else {
        a[k] = b[j];
        j--;
        }
        k--;
    }
    while(i>=0){
        a[k] = a[i];
        i--;
        k--;
    }
    while(j>= 0){
        a[k] = b[j];
        j--;
        k--;
    }


}



int main(){


    vector<int> a(6);
    a[0] = 4;
    a[1] = 7;
    a[2] =9;
    int m = 3;

   
    vector<int> b{1,2,6};
    int n =3;
    

    sortNmerge(a, m, b, n);
    
    //printing sorted and merged array
    for(auto x: a){
        cout<< x<<" ";
    }

    return 0;
}