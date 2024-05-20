#include<bits/stdc++.h>
using namespace std;struct Job 
{ 
    int id;	 // Job Id 
    int dead; // Deadline of job 
    int profit; // Profit if job is over before or on deadline 
};

class Solution 
{
    public:
    //Function to find the maximum profit and the number of jobs done.
    bool static comparator(Job j1, Job j2){
        return (j1.profit > j2.profit);
    }
    vector<int> JobScheduling(Job arr[], int n) 
    { 
        // your code here
        vector<int> ans;
        cout<<"before sorting jobs"<<endl;
        for(int i = 0;i<n;i++){
            cout<<arr[i].id<<" "<<arr[i].dead<<" "<<arr[i].profit<<endl;
        }
        sort(arr,arr+n,comparator);
        cout<<"after sorting jobs"<<endl;


    for(int i = 0;i<n;i++){
            cout<<arr[i].id<<" "<<arr[i].dead<<" "<<arr[i].profit<<endl;
        }
    //finding maximum deadline
    int maxi = 0;
    for(int i = 0;i<n;i++){
        maxi = max(maxi,arr[i].dead);

    }
    cout<<"maximum deadline is :"<<maxi<<endl;

    int slot[maxi+1];
    //initializing it with -1;
    for(int i = 0;i<maxi+1;i++){
        slot[i]= -1;
    }
    int maxprofit = 0;
    int jobcount = 0;
    for(int i = 0;i<n;i++){
        for(int j = arr[i].dead;j>0;j--){
            if(slot[j] == -1){
                cout<<"the profit is at "<<j<<" is: "<<arr[i].profit<<endl;
                slot[j] = i;
                jobcount++;
                maxprofit += arr[i].profit;
                break;
            }
        }
    }
    ans.push_back(jobcount);
    ans.push_back(maxprofit);
        return ans;

    } 
};

int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        Job arr[n];
        for(int i = 0;i<n;i++){
            int x,y,z;
            cin>>x>>y>>z;
            arr[i].id = x;
            arr[i].dead = y;
            arr[i].profit = z;
        }
        Solution obj;
        vector<int> ans = obj.JobScheduling(arr,n);

        for(int i = 0;i<ans.size();i++){
            cout<<ans[i]<<" ";
        }
        cout<<endl;
    }


    return 0;
}