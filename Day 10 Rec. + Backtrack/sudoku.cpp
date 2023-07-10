bool issafe(int i , int row,int col, int matrix[][9])
{
    for(int j =0; j < 9; j++)
    {
        //row check
        if(matrix[row][j] == i)return false;
        //col check
        if(matrix[j][col]== i)return false;

        //3*3 check
        if(matrix[3*(row/3) + i/3] [3*(col/3) + i%3] == i)
        {
            return false;
        }
    }
    return true;
}


bool solve(int matrix[][9])
{
    for(int row = 0 ; row < 9; row++)
    {
        for(int col = 0 ; col < 9 ; col++)
        {
            if(matrix[row][col] == 0)
            {
                for(int i = 1; i<= 9; i++)
                {
                    if(issafe(i,row,col,matrix))
                    {
                       matrix[row][col] = i;
                        bool aggesolution = solve(matrix);
                        //recursion call
                        if(aggesolution)
                        {
                            return true;
                        }

                        else{
                            matrix[row][col] = 0;
                            //backtrack
                        }
                    }

                }

                return false;
            }
        }
    }

    return true;
}


bool isItSudoku(int matrix[9][9]) {
    // Write your code here.
    solve(matrix);
}
