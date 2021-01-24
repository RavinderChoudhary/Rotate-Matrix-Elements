#include <bits/stdc++.h>
using namespace std;

void display(vector<vector<int>> &mat,int rs,int re,int cs,int ce){
     
    while(rs <= re && cs <= ce){ 
     int tmp1 = mat[rs][ce];
     for(int c=ce;c>=cs+1;c--)
         mat[rs][c] = mat[rs][c-1];
     
     rs++;
     int tmp2 = mat[re][ce];
     for(int r=re;r>=rs+1;r--)
        mat[r][ce] = mat[r-1][ce];
     mat[rs][ce] = tmp1;
    
     ce--;
     int tmp3 = mat[re][cs];
     for(int c=cs;c<=ce-1;c++)
        mat[re][c] = mat[re][c+1];
      mat[re][ce] = tmp2;
      
      re--;
      //int tmp4 = mat[rs][cs];
      for(int r=rs-1;r<=re-1;r++)
         mat[r][cs] = mat[r+1][cs];
      mat[re][cs] = tmp3;   
      
      cs++;
      
    }
    
    int n = mat.size();
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++)
          cout<<mat[i][j]<<" ";
        cout<<endl;
    }
}
int main() {
	vector<vector<int>> mat{
	    {1,2,3,4,5,6},   
        {7,8,9,10,11,12},
        {13,14,15,16,17,18},
        {19,20,21,22,23,24},
        {25,26,27,28,29,30},
        {31,32,33,34,35,36}
	};
	
	int rs=0,re=mat[0].size()-1,cs=0,ce=mat.size()-1;
	display(mat,rs,re,cs,ce);
	return 0;
}
