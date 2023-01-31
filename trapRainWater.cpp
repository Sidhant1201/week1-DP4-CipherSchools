#include<bits/stdc++.h>
using namespace std;

int trapRain(vector<int> &heights){

    int n = heights.size();

    vector<int> lmax(n), rmax(n);
    int ans;

    for(int i = 1; i < n;i++){
        lmax[i] = max(heights[i], lmax[i-1]);
    }
    for(int i = n-2;i >=1;i--){
        rmax[i] = max(heights[i], rmax[i+1]);
    }

    ans = 0;

    for(int i = 1; i<= n-2; i++){
        ans = ans + min(lmax[i], rmax[i]) - heights[i];
    }
    return ans;


}

int main(){

    vector<int> height{2,3, 5, 8, 2, 8, 1, 2};
    int water = trapRain(height);
    cout << water;

    return 0;
}