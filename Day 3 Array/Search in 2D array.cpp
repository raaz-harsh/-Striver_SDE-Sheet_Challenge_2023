bool searchMatrix(vector<vector<int>>& mat, int target) {
      //we use binary search
    int r = mat.size();
    int c = mat[0].size();

      int s = 0;
      int e = r*c;

      int mid = s + (e-s)/2;

      while(e> s)
      {
          if(target == mat[mid/c][mid%c])
          {
              return true;
          }

          else if(target > mat[mid/c][mid%c])
          {
              s = mid+1;
          }

          else 
          {
              e = mid-1;
          }

          mid = s + (e-s)/2;
      }


      return false;
}