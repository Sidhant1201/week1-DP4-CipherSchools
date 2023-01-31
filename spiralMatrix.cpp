#include<bits/stdc++.h>
using namespace std;

vector<int> rotateSpiral(vector<vector<int>> &mat){

    int startrow = 0, endrow = mat.size()-1;
    int startcol = 0, endcol = mat[0].size()-1;
    vector<int> ans;

    while(startrow<= endrow && startcol<=endcol){
        for(int i = startcol; i<= endcol;i++){
            ans.push_back(mat[startrow][i]);
        }
        startrow++;
        for(int i = startrow; i<= endrow;i++){
            ans.push_back(mat[i][endcol]);

        }
        endcol--;
        for(int i =endcol; i >=startcol; i--){
            ans.push_back(mat[endrow][i]);
        }
        endrow--;
        for(int i = endrow; i>= startrow;i--){
            ans.push_back(mat[i][startcol]);
        }
        startcol++;

    }
    return ans;

}




int main(){
    vector<vector<int>> arr{{1,2,3,4},{5,6,7,8},{9,10,11,12} };
    vector<int> ans = rotateSpiral(arr);
    for(auto x: ans){
        cout << x<< " ";
    }


    return 0;
}