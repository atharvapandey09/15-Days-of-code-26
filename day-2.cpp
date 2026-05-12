// row with maximum 1's

//  Linear search
class Solution {
  public:   
  int rowWithMax1s(vector < vector < int >> & mat) {
        int ansRow=-1,anscnt=0;
        for(int i=0;i<mat.size();i++ ){
            int cnt=0;
                for(int j=0;j<mat[i].size();j++){
                    if(mat[i][j]==1) cnt++;
            }
            if(cnt>anscnt){
                ansRow=i;
                anscnt=cnt;

            }
        }
            return ansRow;
  }
};

//Binary Search
class Solution {
  public:   
  int rowWithMax1s(vector < vector < int >> & mat) {
    int ansRow=-1,anscnt=0;
        for(int i=0;i<mat.size();i++){
            int cnt=0;
            int l=0;
            int h= mat[i].size()-1;
            
            while(l<=h){
                    int mid=l+(h-l)/2;
                    if(mat[i][mid]==1){
                        cnt= mat[i].size()-mid;
                        h=mid-1;
                    }
                    else{
                        l = mid+1;
                    }
            }
            if(cnt>anscnt){
                anscnt=cnt;
                ansRow=i;
            }
        }
        return ansRow;
  }
};



// search a 2d matrix (leetcode)

class Solution {
public:
    bool searchMatrix(vector<vector<int>>& matrix, int target) {
        for(int i=0;i<matrix.size();i++){
            int l=0;
            int h= matrix[i].size()-1;
            while(l<=h){
                int mid= l+(h-l)/2;
                if(matrix[i][mid]==target) return true;
                else if(target>matrix[i][mid]) l= mid+1;
                else  h= mid-1;
            }
            continue;
        }
        return false;
    }
};