vector<vector<int>> uniqueRow(int M[MAX][MAX],int row,int col)
    {
        //Your code here
        vector<vector<int>>ans;
        set<vector<int>>sett;
        for(int i=0;i<row;i++){
            vector<int>temp;
            for(int j=0;j<col;j++){
                temp.push_back(M[i][j]);
            }
            if(sett.find(temp)==sett.end()){
                ans.push_back(temp);//for maintaining order we are pushing here 
                sett.insert(temp);
            }
            
        }
       
      
      return ans;
    }