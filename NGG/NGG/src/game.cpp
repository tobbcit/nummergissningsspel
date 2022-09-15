#include"include.h"
#include "Game.h"

void Game::Run()

{
	
    using namespace std;

    
    

    while (true) {
        cout << "\nEnter the difficulty level: \n";
        cout << "1 for easy!\t";
   
        cout << "0 for ending the game!\n" << endl;

        // välj
        int difficultyChoice;
        cout << "Enter the number: ";
        cin >> difficultyChoice;

        // tar fram nummret
        srand(time(0));
        int secretNumber = 1 + (rand() % 100);
        int playerChoice;

        // svårighetsgrad
        if (difficultyChoice == 1) {
            cout << "\nYou have 10 choices for finding the "
                "secret number between 1 and 100.";
            int choicesLeft = 10;
            for (int i = 1; i <= 10; i++) {

                // gissa då för fan
                // nummer
                cout << "\n\nEnter the number: ";
                cin >> playerChoice;

                // är det rätt eller fel
                // Nummret
                if (playerChoice == secretNumber) {
                    cout << "Well played! You won, "
                        << playerChoice
                        << " is the secret number" << endl;
                    cout << "\t\t\t Thanks for playing...."
                        << endl;
                    cout << "Play the game again with "
                        "us!!\n\n"
                        << endl;
                    break;
                }
                else {
                    cout << "Nope, " << playerChoice
                        << " is not the right number\n";
                    if (playerChoice > secretNumber) {
                        cout << "The secret number is "
                            "smaller than the number "
                            "you have chosen"
                            << endl;
                    }
                    else {
                        cout << "The secret number is "
                            "greater than the number "
                            "you have chosen"
                            << endl;
                    }
                    choicesLeft--;
                    cout << choicesLeft << " choices left. "
                        << endl;
                    if (choicesLeft == 0) {
                        cout << "You couldn't find the "
                            "secret number, it was "
                            << secretNumber
                            << ", You lose!!\n\n";
                        cout << "Play the game again to "
                            "win!!!\n\n";
                    }
                }
            }
        }

          
            
           
            
        // avslutar spelet
        else if (difficultyChoice == 0) {
            exit(0);
        }
        else {
            cout << "Wrong choice, Enter valid choice to "
                "play the game! (0,1,2,3)"
                << endl;
        }
    }
    
    
}