#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

int main()
{
int num, a, attempt = 0;
srand(time(0));
num = rand() % 100 + 1;
cout << "Guess My Number Game\n\n";

do
{
cout << "Enter a guess between 1 and 100 : ";
cin >> a;
attempt++;

if (a > num)
cout << "Too high!\n\n";
else if (a < num)
cout << "Too low!\n\n";
else
cout << "\nCorrect! You got it in " << attempt << " guesses!\n";
} while (a != num);

return 0;
}