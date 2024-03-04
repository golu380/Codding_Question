#include<bits/stdc++.h>
using namespace std;
vector<vector<int>> mergeinterval(vector<vector<int> > &intervals){
    int n = intervals.size();
    sort(intervals.begin(), intervals.end());
    vector<vector<int>> ans;
    for(int i = 0;i<n;i++){
        if(ans.empty() || intervals[i][0] > ans.back()[1]){
            ans.push_back(intervals[i]);
        }else{
            ans.back()[1] = max(ans.back()[1],intervals[i][1]);
        }

    }
    return ans;

}

int main(){

vector<vector<int>> v{{1,3},{2,6},{8,9},{9,11},
{8,10},{2,4},{15,18},{16,17}};

for(int i = 0;i<v.size();i++){
    for(int j = 0;j<v[i].size();j++){
        cout<<v[i][j]<<" ";
    }
    cout<<endl;
}
sort(v.begin(),v.end());
cout<<"after sorting the 2d array "<<endl;
for(int i = 0;i<v.size();i++){
    for(int j = 0;j<v[i].size();j++){
        cout<<v[i][j]<<" ";
    }
    cout<<endl;
}
vector<vector<int>> answer;
answer = mergeinterval(v);

cout<<"merged intervall"<<endl;
for(int i = 0;i<answer.size();i++){
    for(int j = 0;j<answer[i].size();j++){
        cout<<answer[i][j]<<" ";
    }
    cout<<endl;
}



    return 0;
}