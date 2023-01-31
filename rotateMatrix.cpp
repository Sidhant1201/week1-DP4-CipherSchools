#include<bits/stdc++.h>

using namespace std;


//swapping columns
void swapCol(vector<vector<int>> &m1){
    int temp;
    for(int i = 0; i< m1.size(); i++){
        for(int j= 0, k= m1[i].size() -1;j<=k;j++, k--){
            temp = m1[i][j];
            m1[i][j] = m1[i][k];
            m1[i][k] = temp;
        }
        
    }

}

// taking transpose of given matrix
void rotMat(vector<vector<int>> &m1){
    int temp;
    for(int i = 0; i< m1.size(); i++){
        for(int j= i;j< m1[i].size();j++){
            temp = m1[i][j];
            m1[i][j] = m1[j][i];
            m1[j][i] = temp;
        }
        
    }
    swapCol(m1);

}




int main(){
    vector<vector<int>> m1{{1,2,3},{4, 5, 6}, {7, 8, 9}};
    rotMat(m1);
    for(int i = 0; i< m1.size(); i++){
        for(int j= 0;j< m1[i].size();j++){
            cout<< m1[i][j] << " ";
        }
        cout << endl;
    }



    return 0;
}