#include<bits/stdc++.h>
using namespace std;

void makeZero(vector<vector<int>> arr){
    vector<bool> colTrue(arr[0].size(), false);
    vector<bool> rowTrue(arr.size(), false);

    for(int i =0; i< arr.size(); i++){
        for( int j =0; j< arr[i].size();j++){
            if(arr[i][j]== 0){
                colTrue[j] = true;
                rowTrue[i] = true; 
            }
        }
    }
    for(int i =0; i< rowTrue.size(); i++){
        for( int j =0; j< colTrue.size();j++){
           if(rowTrue[i]|| colTrue[j])
           cout<< 0<<" ";
           else
           cout<< arr[i][j]<< " ";
        }
        cout<< endl;
    }

}

int main(){
    vector<vector<int>> arr{{1,2,0,4},{5,6,7,1},{9,10,11,12}};
    cout<<"matrix is "<<endl;
    for(int i = 0; i< arr.size(); i++){
        for(int j= 0;j< arr[i].size();j++){
            cout<< arr[i][j] << " ";
        }
        cout << endl;
    }
    cout<<endl;

    makeZero(arr);
    return 0;
}
