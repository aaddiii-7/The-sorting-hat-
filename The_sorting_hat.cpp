#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;
int score;

int main() {
  string name;
  cout << "WELCOME TO HOGWARTS!\n";
  cout << "Now before the quiz starts , You must be soerted in your houses "
          ",They are :  \n";
  cout << "1. Gryffindor\n2. Hupplepuff \n3. Ravenclaw \n4. Slytherin\n";
  cout << "Now I shall place THE SORTING HAT on your head and you will be "
          "sorted into your houses\n"; 
  cout << "Sorting hat: Tell me your name lad ?";
  cin >> name;
  string house;
  srand(time(0));
  int h = (rand() % 4) + 1;
  if (h == 1) {
    cout << "Sorting hat: Ah, a fiery spirit full of courage and "
            "determination! -> Gryffindor!  \n";
    house = "Gryffindor!";
  } else if (h == 2) {
    cout << "Sorting hat: Ah, a humble soul with a heart of gold -> "
            "Hufflepuff!  \n";
    house = "Hufflepuff!";
  } else if (h == 3) {
    cout << "Sorting hat: Ah, a mind ripe with curiosity and thirst for "
            "knowledge! -> Ravenclaw!  \n";
    house = "Ravenclaw!";
  } else {
    cout << "Sorting hat: Ah, a sharp mind and a hunger for success! -> "
            "Slytherin! \n";
    house = "Slytherin!";
  };

  cout << "Sorting hat: Now it's time to earn some points for your house,"
       << name << "\n";
  cout << "The rule is very simple you have to answer some questions to earn "
          "points.\n";
  cout << "A.What is the name of Harry Potter's owl?\n"
          "1) Hedwig\n"
          "2) Crookshanks\n"
          "3) Scabbers\n"
          "4) Fang \n";
  int one;
  cin >> one;
  if (one == 1) {
    cout << "10 Points to " << house << "\n";
    score = 10;
  } else {
    cout << "wrong answer!\n";
  }
  cout << "B.Which house does Harry Potter belong to?\n"
          "1) Gryffindor\n"
          "2) Slytherin\n"
          "3) Ravenclaw\n"
          "4) Hufflepuff \n";
  int two;
  cin >> two;
  if (two == 1) {
    cout << "10 Points to " << house << "\n";
    score = score + 10;
  } else {
    cout << "wrong answer!\n";
  }
  cout << "C.What is the name of the spell used to close Marauder's Map?\n"
          "1) Wingardium Leviosa\n"
          "2) Expelliarmus\n"
          "3) Alohomora\n"
          "4) Mischief managed \n";
  int three;
  cin >> three;
  if (three == 4) {
    cout << "10 Points to " << house << "\n";
    score = score + 10;
  } else {
    cout << "wrong answer!\n";
  }
  cout << "D.What is the name of the magical sport played on flying "
          "broomsticks in the wizarding world?\n"
          "1) Wizardball\n"
          "2) Broomstick Racing\n"
          "3) Quidditch\n"
          "4) Magic Soccer \n";
  int four;
  cin >> four;
  if (four == 3) {
    cout << "10 Points to " << house << "\n";
    score = score + 10;
  } else {
    cout << "wrong answer!\n";
  }
  cout << "E.What magical object allows Harry Potter to see into the past?\n"
          "1) Pensieve\n"
          "2) Time-Turner\n"
          "3) Invisibility Cloak\n"
          "4) Marauder's Map \n";
  int five;
  cin >> five;
  if (five == 2) {
    cout << "10 Points to " << house << "\n";
    score = score + 10;
  } else {
    cout << "wrong answer!\n";
  }
  if (score == 50) {
    cout << "Brilliant! " << name << "\n";
  } else if (score == 40) {
    cout << "Amazing! " << name << "\n";
  } else if (score == 30) {
    cout << "Great! " << name << "\n";
  } else {
    cout << "Better luck next time! " << name << "\n";
  }

  cout << "Total " << score << " points to " << house;
}