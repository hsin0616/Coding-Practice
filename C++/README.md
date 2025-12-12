# c++ program
### Tic-tac-toe Winner Checker
### Password Checker
---
## Tic-tac-toe Winner Checker
This is a small C++ program that reads a 3×3 Tic-Tac-Toe board, prints it in a nice format, and checks whether **X** or **O** is the winner.
### Features

- Reads **9 characters** as the board:
  - `'X'` for player X
  - `'O'` for player O
  - `' '` (space) for an empty cell
- Prints the board as a Tic-Tac-Toe grid.
- Checks:
  - All rows
  - All columns
  - Both diagonals  
  and reports:
  - `Winner: X`
  - `Winner: O`
  - or `No Winner.`
### Example Input

When prompted:

```text
Enter 9 characters (X, O, or  ' ' for empty
```
## Password Checker
### Password Rules
A password is considered **strong** if it:
1. Has **at least 8 characters**
2. Contains **at least one uppercase letter** (`A–Z`)
3. Contains **at least one digit** (`0–9`)

If the password is not strong, the program will print which conditions are missing.
| Sample Input   |
| -----          |
| Enter: Abc123  |

| Sample Output          |
| -----                  |
| Weak, missing          |
|- at least 8 characters |
