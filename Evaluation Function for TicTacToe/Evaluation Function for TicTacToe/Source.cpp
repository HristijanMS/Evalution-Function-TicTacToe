#include <iostream>

using namespace std;

int Evaluate(char Board[3][3])
{
	//Checks all the rows for lines
	for (int row = 0; row < 3; row++)
	{
		if (Board[row][0] == Board[row][1] && Board[row][1] == Board[row][2])
		{
			if (Board[row][0] == 'X')
			{
				return +10;
			}
			else if (Board[row][0] == 'O')
			{
				return -10;
			}
		}
	}

	//Checks all the columns for lines
	for (int column = 0; column < 3; column++)
	{
		if (Board[0][column] == Board[1][column] && Board[1][column] == Board[2][column])
		{
			if (Board[0][column] == 'X')
			{
				return +10;
			}
			if (Board[0][column] == '0')
			{
				return -10;
			}
		}
	}

	if (Board[0][0] == Board[1][1] && Board[1][1] == Board[2][2])
	{
		if (Board[0][0] == 'X')
		{
			return +10;
		}
		else if (Board[0][0] == 'O')
		{
			return -10;
		}
	}
	else if (Board[0][2] == Board[1][1] && Board[1][1] == Board[2][0])
	{
		if (Board[0][2] == 'X')
		{
			return +10;
		}
		else if (Board[0][2] == 'O')
		{
			return -10;
		}
	}
	return 0;
}

int main()
{
	char Board[3][3] =
	{
	{'X','2','3'},
	{'4','X','6'},
	{'7','8','X'}
	};
	int value = Evaluate(Board);
	cout << "Value " << value;
}