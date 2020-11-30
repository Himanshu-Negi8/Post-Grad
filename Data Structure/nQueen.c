#include<stdio.h>


int isSafe(int board[][4],int row,int col,int n){
	int i;
	for(i=0;i<row;i++){
		if(board[i][col]){
			return 0;
		}
	}

	int x = row;
	int y = col;

	while(x>=0 && y>=0){
		if(board[x][y]==1){
			return 0;
		}
		x--;
		y--;
	}

	x = row;
	y = col;

	while(x>=0 && y<n){
		if(board[x][y]==1){
			return 0;
		}
		x--;
		y++;
	}

	return 1;
}
//
//
//int nQueen(int board[][4], int row, int n){
//	if(row==n) {
//		return 0;
//	}
//	
//	int col;
//	for(col=0;col<n;col++){
//		if(isSafe(board,row,col,n)==1){
//			board[row][col]=1;
//			int rest_of_the_queens = nQueen(board,row+1,n);
//			if(rest_of_the_queens==1){
//				return 1;
//			}
//			board[row][col]=0;
//		}
//	}
//	
//	return 0;
//}


void printNQueens(int board[][4],int row,int n)
{
	if(row==n)
	{
		int i,j;
		for( i=0;i<n;i++)
		{
			for( j=0;j<n;j++)
			{
				if(board[i][j])
				{
					printf("Q ");
				}
				else
				{
					printf("_ ");
				}
			}
			printf("\n");
		}
		printf("**************\n");
	}
	int col=0;
		for( col=0;col<n;col++)
		{
			if(isSafe(board,row,col,n))
			{
				board[row][col]=1;
				printNQueens(board,row+1,n);
				board[row][col]=0;
			}
		}
	
	
}

int NQueens(int board[][4], int row, int n){
	
	if(row==n){
		return 0;
	}
	int col;
	for(col=0;col<n;col++){
		if(isSafe(board,row,col,n)){
			board[row][col]=1;
			int rest = NQueens(board,row+1,n);
			if(rest){
				return 1;
			}
			board[row][col]=0;
		}
	}
	return 0;
}
int main(){
	
	
	int board[4][4]={0};
	int n=4;
	
//	printNQueens(board,0,n);
	printf("%d ",NQueens(board,0,n));
	
	
	return 0;
}
