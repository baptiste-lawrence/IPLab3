#include <stdio.h>

int check(int board[3][3])
{
	int a = 1;
	int i, j;
	for(i=0; i<3; i++)
	{
		for(j=0; j<3; j++)
		{
			a *= board[i][j];
		}
	}
	return a;
}

void printBoard(int board[3][3])
{
	int i, j;
	printf("\n");
	for(i=0; i<3; i++)
	{
		for(j=0; j<3; j++)
		{
			if(board[i][j]==0)
			{
				printf(".   ");
			}
			else
			{
				printf("X   ");
			}
		}
			printf("\n\n");
	}
}

void modifyBoard(int input, int board[3][3])
{
	printf("\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n");
	printf("\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n");
	switch(input)
	{
		case 7 :if(board[0][0] == 1)
			{
				printBoard(board);
				printf("This place is occupied. Please drop your chess at another place.\n\n");
			}
			else
			{
				board[0][0] = 1;
				printBoard(board);
			}
			break;
		
		case 8 :if(board[0][1] == 1)
			{
				printBoard(board);
				printf("This place is occupied. Please drop your chess at another place.\n\n");
			}
			else
			{
				board[0][1] = 1;
				printBoard(board);
			}
			break;

		case 9 :if(board[0][2] == 1)
			{
				printBoard(board);
				printf("This place is occupied. Please drop your chess at another place.\n\n");
			}
			else
			{
				board[0][2] = 1;
				printBoard(board);
			}
			break;

		case 4 :if(board[1][0] == 1)
			{
				printBoard(board);
				printf("This place is occupied. Please drop your chess at another place.\n\n");
			}
			else
			{
				board[1][0] = 1;
				printBoard(board);
			}
			break;

		case 5 :if(board[1][1] == 1)
			{
				printBoard(board);
				printf("This place is occupied. Please drop your chess at another place.\n\n");
			}
			else
			{
				board[1][1] = 1;
				printBoard(board);
			}
			break;

		case 6 :if(board[1][2] == 1)
			{
				printBoard(board);
				printf("This place is occupied. Please drop your chess at another place.\n\n");
			}
			else
			{
				board[1][2] = 1;
				printBoard(board);
			}
			break;

		case 1 :if(board[2][0] == 1)
			{
				printBoard(board);
				printf("This place is occupied. Please drop your chess at another place.\n\n");
			}
			else
			{
				board[2][0] = 1;
				printBoard(board);
			}
			break;

		case 2 :if(board[2][1] == 1)
			{
				printBoard(board);
				printf("This place is occupied. Please drop your chess at another place.\n\n");
			}
			else
			{
				board[2][1] = 1;
				printBoard(board);
			}
			break;

		case 3 :if(board[2][2] == 1)
			{
				printBoard(board);
				printf("This place is occupied. Please drop your chess at another place.\n\n");
			}
			else
			{
				board[2][2] = 1;
				printBoard(board);
			}
			break;
		
		default :printBoard(board);
			 printf("The input is excessive.Please choose again.\n");
	}
}

int main()
{
	int input, i, j;
	int board[3][3];
	for(i=0; i<3; i++)
	{
		for(j=0; j<3; j++)
		{
			board[i][j] = 0;
		}
	}
	printBoard(board);
	for(;;)
	{
		printf("Please drop your chess: ");
		scanf("%d", &input);
		modifyBoard(input, board);
		if(check(board) == 1)
		{
			printf("Game terminated.\n");
			break;
		}
	}
	return 0;
}

