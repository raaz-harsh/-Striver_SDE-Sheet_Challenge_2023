#include <bits/stdc++.h>

void setZeros(vector<vector<int>> &matrix)
{
	int r = matrix.size();
        int c = matrix[0].size();
        
        unordered_set<int> setRows;
        unordered_set<int> setCols;
        for(int i = 0; i <r; i++)
        {
            for(int j = 0; j<c ;j++)
            {
                if(matrix [i][j]== 0)
                {
                    setRows.insert(i);
                    setCols.insert(j);
                    //here you have stored the row and col value where it is to be 0ed.
                }
            }
        }
        
        for(int i = 0; i <r; i++)
        {
            for(int j = 0; j<c ;j++)
            {
                if(setRows.count(i)> 0 || setCols.count(j)> 0) 
                {
                    matrix[i][j] = 0;
                }
            }
        }
}