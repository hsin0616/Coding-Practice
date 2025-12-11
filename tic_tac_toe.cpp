#include <iostream>
using namespace std;

const int SIZE = 3;
void printBoard(char [SIZE][SIZE]);
char checkWinner(const char [SIZE][SIZE]);

int main() 
{
    char board[SIZE][SIZE];
    char input;
    cout << "Enter 9 characters (X, O, or  ' ' for empty";  // e.g. XO X OXO
    
    // input 9 characters into the board
    for (int i=0; i<SIZE; i++){
      for (int j=0; j<SIZE; j++){
        cin.get(input);
        while(input!='X' && input != 'O' && input != ' '){
          cout << "Invalid input. Enter X, O, or ' '";
          cin.get(input);
        }
        board[i][j] = input;
      }
    }
    printBoard(board);
    char winner = checkWinner(board);
    if (winner=='X' || winner=='O'){
      cout << "\nWinner: " << winner << "\n";
    } else { cout << "\nNo Winner.\n";}
    return 0;
}

void printBoard(char board[SIZE][SIZE]){
  cout << "\nTic-Tac-Toe Board: \n";
  for (int i=0; i<SIZE; i++){
    for (int j=0; j<SIZE; j++){
      cout << " " << board[i][j];
      if (j<SIZE-1) cout << " |";
    }
    cout << "\n";
    if (i<SIZE-1) cout << "---+---+---\n";
  }
}

char checkWinner(const char board[SIZE][SIZE]){
  //check rows and columns
  for (int i=0; i<SIZE;i++){
    if (board[i][0] != ' ' && board[i][0]==board[i][1] && board[i][0]==board[i][2])
      return board[i][0];
    if (board[0][i] != ' ' && board[0][i]==board[1][i] && board[0][i]==board[2][i])
      return board[0][i];
  }
  
  // check diagonals
  if (board[0][0] != ' ' && board[0][0]==board[1][1] && board[0][0]== board[2][2])
    return board[0][0];
  if (board[0][2] != ' ' && board[0][2]==board[1][1] && board[0][2]== board[2][0])
    return board[0][2];
  return ' '; //no winner
}