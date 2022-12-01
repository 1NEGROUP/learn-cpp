/* Scissor Cuts Paper
  Paper Wraps Rock
  Rock Crushes Lizard
  Lizard Poisens Spock
  Spock Vaporizes Scissors
  Scissors Beheads Lizard
  Lizard eats Paper
  Paper Disproves Spock.*/

  #include <iostream>
  #include <stdlib.h>

  int main(){
    srand (time(NULL));
    int Rock, Paper, Scissors, Lizard, Spock;
    int Choice;
    int CompChoice = rand() % 5 +1;

    std::cout << "Be ready to Pick\n" <<"Rock = 1, Paper = 2, Scissors = 3, Lizard = 4, Spock = 5\n";

    std::cin >> Choice;

    if (Choice == 1 || CompChoice == 1){
      Rock = 1;
    } else if (Choice == 2 || CompChoice == 2){
      Paper = 1;
    } else if (Choice == 3 || CompChoice == 3){
      Scissors = 1;
    } else if (Choice == 4 || CompChoice == 4){
      Lizard = 1;
    } else if (Choice == 5 || CompChoice == 5){
      Spock = 1;
    }

    if ( Scissors == 1 && Paper == 1 || Lizard == 1){
      std::cout << "Scissors Wins.\n";
    } else if (Paper == 1 && Rock == 1 || Spock == 1){
      std::cout << "Paper Wins.\n";
    } else if (Rock == 1 && Lizard == 1 || Scissors == 1){
      std::cout << "Rock Wins.\n";
    } else if (Lizard == 1 && Spock == 1 || Paper == 1){
      std::cout << "Lizard Wins.\n";
    } else if (Spock == 1 && Rock == 1 || Scissors == 1){
      std::cout << "Spock Wins.\n";
    }

  }
