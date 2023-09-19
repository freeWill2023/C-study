#include "board.h"
#include<stdlib.h>
#include<stdio.h>
#include<string.h>

static char board[7][45] = {   // static : 같은 폴더내에서만 board[] 접근
	"------------------------------------------",
	"| 1 | 2 | 3 | 4 | 5 | 6 | 7 | 8 | 9 | 10 |",
	"------------------------------------------",
	"| | | | | | | | | | | | | | | | | | | |  |",
	"------------------------------------------",
	"|   |   |   |   |   |   |   |   |   |    |",	
	"------------------------------------------"
};


void setScore(int frame, int cast, int score)
{
	//board[3][1] = '0';
	//board[3][3] = '9';
	//board[3][5] = 'X';
	//board[3][7] = '/';	
	
	char c;
	if(cast == 2 && (board[3][4*(frame-1)+1] - '0'+ score == 10)){
		c = '/';
	}else if((frame < 10 && cast == 1 && score ==10) || (frame ==10 && score == 10)){
		c = 'X';
	}else{
		c = score + '0';
	}
	
	board[3][4*(frame-1) + 2*cast-1] = c;
}


void setFrameScore(int frame, int frameScore)
{
	char buf[4];
	sprintf(buf, "%3d", frameScore);
	strcpy((&board[5][0] + 4*(frame-1) + 1), buf+3);
}


void printBoard(void)
{
	system("clear");     //stdlib.h 제공 리눅스터미널 명령 사용 가능
	
	for(int i=0 ; i<7 ; ++i){
		printf("%s\n", &board[i][0]);  // == board[i]
	}
}
