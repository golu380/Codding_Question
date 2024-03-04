#include<bits/stdc++.h>
using namespace std;
int main(){
vector<vector<int>> vect
{
    {1,2,3},
    {4,5,6},
    {7,8,9}
};

cout<<"before transpose"<<endl;
for(int i = 0;i<vect.size();i++){
    for(int j = 0;j<vect[i].size();j++){
        cout<<vect[i][j]<<" ";
    }
    cout<<endl;
}
for(int i = 0;i<vect.size();i++){
    for(int j = i + 1;j<vect[i].size();j++){
        swap(vect[i][j],vect[j][i]);
    }
}
cout<<"after tranpose"<<endl;

// vector<vector<int>> v{{12,34,56},{34,6,67},{12,8,99}};
// for(int i = 0;i<v.size();i++){
//     for(int j = 0;j<vect.size();j++){
//         cout<<v[i][j]<<" ";
//     }
//     cout<<endl;
// }
for(int i = 0;i<vect.size();i++){
    for(int j = 0;j<vect[i].size();j++){
        cout<<vect[i][j]<<" ";
    }
    cout<<endl;
}

for(int i = 0;i<vect.size();i++){
    reverse(vect[i].begin(),vect[i].end());
}
cout<<"after rotated by ninety degerees"<<endl;

for(int i = 0;i<vect.size();i++){
    for(int j = 0;j<vect[i].size();j++){
        cout<<vect[i][j]<<" ";
    }
    cout<<endl;
}
    return 0;
}