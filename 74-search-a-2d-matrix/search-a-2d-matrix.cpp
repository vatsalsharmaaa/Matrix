class Solution {
public:
    bool searchMatrix(vector<vector<int>>& arr, int x) {
         int row= arr.size(), col= arr[0].size(); 
        int i = row-1;
        int j= 0;
        
        while(i>=0 && j<col){
            if(arr[i][j]==x)
            return true;
            
            else if(arr[i][j]<x)
            j++;
            
            else
            i--;
        }
        
        return false;
        
    }
};