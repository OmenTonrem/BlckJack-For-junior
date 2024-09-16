#include <iostream>
#include <cstdlib> 
#include <ctime>   
#include <windows.h>

using namespace std;



int main() {
    char PlayAgain;
    do
    {
        string x;
        srand(time(NULL));
        
        int player;
        int hoster;

        
        int playershand = (rand() % 21) + 1;
        int hostershand = (rand() % 11) + 1;

        player = playershand;
        hoster = hostershand;
        char choice;
        cout << "************************************************* \n";
        cout << "                  Hello Its Bj                    \n";
        cout << "Your Hand : " << player << '\n';
        cout << "Hoster's Hand : " << hoster << '\n' << '\n';
        cout << "Do You Want Roll Or Stay ? (R or S): ";
        cin >> choice;
        if (player == 21)
        {
            Sleep(1000);
            std::cout << "You Got BlackJack !\n";
            cout << "now host turn \n";
            Sleep(2000);
            while (hoster <= 17)
            {
                int hosterRoll = (rand() % 11) + 1;
                hoster += hosterRoll;
                Sleep(1000);
                cout << "______________________________________\n"; 
                cout << "Now Hoster Rolls: " << hosterRoll <<  " AND Hoster's Hand: " << hoster << endl;
                cout << "______________________________________\n";
            }
            Sleep(1000);
            if (hoster > 21){
                cout << "hoster hand is more than 21" << endl <<  "you win !" << endl;
                cout << "Do you want to play again? (Y or N): ";
                cin >> PlayAgain;
                system("cls");
            }else if(hoster > player) {
                cout << "hoster: " << hoster << ' ' << "player: " << player << '\n' << "so hoster wins !";
                cout << "Do you want to play again? (Y or N): ";
                cin >> PlayAgain;
                system("cls");
            }else if(hoster < player) {
                cout << "hoster: " << hoster << ' ' << "player: " << player << '\n' << "so You win !";
                cout << "Do you want to play again? (Y or N): ";
                cin >> PlayAgain;
                system("cls");
            }else {
                cout << "its a tie";
                cout << "Do you want to play again? (Y or N): ";
                cin >> PlayAgain;
                system("cls");
            }
        }
        
        
        if (choice == 'R' || choice == 'r')
        {
            while (player <= 21)
            {
                int roll =  (rand() % 11) + 1;
                cout << "Okey Now Wanna Roll ?(y or n) : ";
                char choice2;
                cin >> choice2;
                if (choice2 == 'y' || choice2 == 'y')
                {
                    player += roll;
                    Sleep(1000);
                    cout << "Now Your Hand: " << player << endl;
                    
                    if (player > 21)
                    {
                        cout << "Your Hand is More Than 21 You Lose !" << endl;
                        cout << "Do you want to play again? (Y or N): ";
                        cin >> PlayAgain;
                        system("cls");
                    }
                }else if (choice2 == 'n' || choice2 == 'N') {
                    cout << "You Stay And Your Hand: " << player << endl;
                    break;
                    
                }else {
                    cout << "you need to write y or n" << endl;
                    continue;
                }   
                
            }
            
            
            if (player <= 21)
            {
                cout << "now host turn \n";
                while (hoster <= 17)
                {
                    int hosterRoll = (rand() % 11) + 1;
                    hoster += hosterRoll;
                    Sleep(1000);
                    cout << "______________________________________\n"; 
                    cout << "Now Hoster Rolls: " << hosterRoll <<  " AND Hoster's Hand: " << hoster << endl;
                    cout << "______________________________________\n";
                }
                Sleep(1000);
                if (hoster > 21){
                    cout << "hoster hand is more than 21" << endl <<  "you win !" << endl;
                    cout << "Do you want to play again? (Y or N): ";
                    cin >> PlayAgain;
                    system("cls");
                }else if(hoster > player) {
                    cout << "hoster: " << hoster << ' ' << "player: " << player << '\n' << "so hoster wins !\n";
                    cout << "Do you want to play again? (Y or N): ";
                    cin >> PlayAgain;
                    system("cls");
                }else if(hoster < player) {
                    cout << "hoster: " << hoster << ' ' << "player: " << player << '\n' << "so You win !\n";
                    cout << "Do you want to play again? (Y or N): ";
                    cin >> PlayAgain;
                    system("cls");
                }else {
                    cout << "its a tie\n";
                    cout << "Do you want to play again? (Y or N): ";
                    cin >> PlayAgain;
                    system("cls");
                }
                        
            }
            
        } else if(choice == 's' || choice == 'S') {
            cout << "you choose stay and your Hand : " << player << endl;
            cout << "now its hoster turn" << endl;;
            while (hoster <= 17)
            {
                int hosterRoll = (rand() % 11) + 1;
                hoster += hosterRoll;
                Sleep(1000);
                cout << "______________________________________\n"; 
                cout << "Now Hoster Rolls: " << hosterRoll <<  " AND Hoster's Hand: " << hoster << endl;
                cout << "______________________________________\n";        }
            Sleep(500);
            if (hoster > 21){
                cout << "hoster hand is more than 21" << endl <<  "you win !" << endl;
                cout << "Do you want to play again? (Y or N): ";
                cin >> PlayAgain;
                system("cls");
            }else if(hoster > player) {
                cout << "Hoster: " << hoster << ' ' << "Player: " << player << endl << "So Hoster Wins !\n";
                cout << "Do you want to play again? (Y or N): ";
                cin >> PlayAgain;
                system("cls");
            }else if(hoster < player) {
                cout << "Hoster: " << hoster << ' ' << "Player: " << player << endl << "So You Win !\n";
                cout << "Do you want to play again? (Y or N): ";
                cin >> PlayAgain;
                system("cls");
            }else {
                cout << "its a Tie\n";
                cout << "Do you want to play again? (Y or N): ";
                cin >> PlayAgain;
                system("cls");
            }
                    
                    
        } else {
            cout << "Invalid choice. Please choose 'R' or 'S'" << endl;
            break;
        }
        // cout << "Do you want to play again? (Y or N): ";
        // cin >> PlayAgain;
    } while (PlayAgain == 'y' || PlayAgain == 'Y');
    
    return 0;
}