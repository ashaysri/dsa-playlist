// { Driver Code Starts
//Initial Template for C++

#include<bits/stdc++.h>
#define N 105
using namespace std;
void printArray(vector<int> arr, int size)
{
for (int i=0; i < size; i++)
	cout << arr[i] << " ";
}


 // } Driver Code Ends
//User function Template for C++
struct Triplet {
    int val;
    int aPos;
    int idx;
    Triplet(int v, int a, int i){
        val=v;
        aPos=a;
        idx=i;
    }
    bool operator<(const Triplet &that ) const {
        return val<that.val;
    }
    bool operator>(const Triplet &that ) const {
        return val>that.val;
    }
};

class Solution
{
    public:
    //Function to merge k sorted arrays.
    vector<int> mergeKArrays(vector<vector<int>> arr, int K)
    {
        //code here
        vector<int> ans;
        priority_queue<Triplet,vector<Triplet>,greater<>> pq;
        for(int i {};i<K;i++){
            Triplet tp={arr[i][0],i,0};
            pq.push(tp);
        }
        while(!pq.empty()){
            Triplet tp=pq.top();
            pq.pop();
            ans.push_back(tp.val);
            if(tp.idx+1<K){
                Triplet temp={arr[tp.aPos][tp.idx+1], tp.aPos, tp.idx+1};
                pq.push(temp);
            }
        }
        return ans;
    }
};

// { Driver Code Starts.

int main()
{
	int t;
	cin>>t;
	while(t--){
	    int k;
	    cin>>k;
	    vector<vector<int>> arr(k, vector<int> (k, 0));
	    for(int i=0; i<k; i++){
	        for(int j=0; j<k; j++)
	        {
	            cin>>arr[i][j];
	        }
	    }
	    Solution obj;
    	vector<int> output = obj.mergeKArrays(arr, k);
    	printArray(output, k*k);
    	cout<<endl;
    }
	return 0;
}





  // } Driver Code Ends