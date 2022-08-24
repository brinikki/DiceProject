#include <iostream>
using namespace std;
int main() {

int die1, die2, total;
// Generate random dice and add them together
srand((unsigned)time(0));
die1 = (rand()%6)+1;
die2 = (rand()%6)+1;

total = die1 + die2;

cout << "Dice Rolled:\n\n";

// Show die 1
if (die1 == 1)
{
cout << "┌————————┐\n";
cout << "│        │\n";
cout << "│    ☻ 	 │\n";
cout << "│        │\n";
cout << "└————————┘\n\n";  
}

if (die1 == 2)
{
cout << "┌————————┐\n";
cout << "│ ☻      │\n";
cout << "│     	 │\n";
cout << "│      ☻ │\n";
cout << "└————————┘\n\n";  
}

if (die1 == 3)
{
cout << "┌————————┐\n";
cout << "│       ☻│\n";
cout << "│    ☻ 	 │\n";
cout << "│ ☻      │\n";
cout << "└————————┘\n\n";  
}

if (die1 == 4)
{
cout << "┌————————┐\n";
cout << "│ ☻    ☻ │\n";
cout << "│      	 │\n";
cout << "│ ☻    ☻ │\n";
cout << "└————————┘\n\n";  
}

if (die1 == 5)
{
cout << "┌————————┐\n";
cout << "│ ☻    ☻ │\n";
cout << "│   ☻    │\n";
cout << "│ ☻    ☻ │\n";
cout << "└————————┘\n\n";  
}

if (die1 == 6)
{
cout << "┌————————┐\n";
cout << "│ ☻    ☻ │\n";
cout << "│ ☻    ☻ │\n";
cout << "│ ☻    ☻ │\n";
cout << "└————————┘\n\n";  
}


return 0;
}