#include "Board.hpp"
#include "Player.hpp"
#include <iostream>
using std::cout;
using std::endl;
using std::cin;
#include <string>
using std::string;

int main(){

    while(true) {
	cout << "      *******************************" << endl;
	cout << "           WELCOME TO BATTLESHIP!    " << endl;
	cout << "      *******************************" << endl;
	cout << "      A war-themed board game for two" << endl;
	cout <<	"players in which the opponents try to guess" << endl;
    cout << " the location of the other's various ships." << endl;

    string name1, name2;
	cout << "      *******************************" << endl;
    cout << "    To start, enter that Player's names. " << endl;
    cout << "       Player One: ";
 	cin >> name1;
    cout << endl << "       Player Two: ";
    cin >> name2;

	cout << endl << "****************************" << endl << endl;

	Player playerOne(name1);
	Player playerTwo(name2);

    // ****** PLACING SHIPS FOR PLAYER 1 ******
	cout << "        PLACING PIECES     " << endl;
	cout << " You will be given 5 ships: [1] Big ship, [2] Medium ships, and [2] Small Ships" << endl;
    cout << playerOne.getName() << " it's time to place your ships!" << endl;
	cout << " to place your pieces, please enter the coordinates in the board" << endl;
	cout << " in the format: x-coordinate [space] y-coordinate [space] is horizontal? (y/n)" << endl;

	cout << endl << "****************************" << endl;
    cout << "Current Board: " << endl;
    playerOne.showBoard(cout);
    cout << endl << "****************************" << endl;

    // PLACE BIG SHIP
    cout << "Place your Big ship (3 tiles big): ";
	int x,y;
	string horizontal;
	cin >> x >> y >> horizontal;

	if(horizontal == "y")
	    playerOne.addPiece(x, y, true, 3);
    else
        playerOne.addPiece(x,y, false, 3);

    cout << endl << "****************************" << endl;
    cout << "Current Board: " << endl;
    playerOne.showBoard(cout);
    cout << endl << "****************************" << endl;

    // PLACE MEDIUM SHIPS
    cout << "Now place your medium ship (2 tiles big): ";

    cin >> x >> y >> horizontal;

    if(horizontal == "y")
        playerOne.addPiece(x, y, true, 2);
    else
        playerOne.addPiece(x,y, false, 2);

    cout << endl << "****************************" << endl;
    cout << "Current Board: " << endl;
    playerOne.showBoard(cout);
    cout << endl << "****************************" << endl;

    cout << "Add a second medium ship: ";

    cin >> x >> y >> horizontal;

    if(horizontal == "y")
        playerOne.addPiece(x, y, true, 2);
    else
        playerOne.addPiece(x,y, false, 2);

    cout << endl << "****************************" << endl;
    cout << "Current Board: " << endl;
    playerOne.showBoard(cout);
    cout << endl << "****************************" << endl;

    // PLACE PLACE SMALL SHIPS
    cout << "Now place your small ship (1 tile big): ";

    cin >> x >> y >> horizontal;

    if(horizontal == "y")
        playerOne.addPiece(x, y, true, 1);
    else
        playerOne.addPiece(x,y, false, 1);

    cout << endl << "****************************" << endl;
    cout << "Current Board: " << endl;
    playerOne.showBoard(cout);
    cout << endl << "****************************" << endl;

    cout << "Add your second small ship (1 tile big): ";

    cin >> x >> y >> horizontal;

    if(horizontal == "y")
        playerOne.addPiece(x, y, true, 1);
    else
        playerOne.addPiece(x,y, false, 1);

    cout << endl << "****************************" << endl;
    cout << "Current Board: " << endl;
    playerOne.showBoard(cout);
    cout << endl << "****************************" << endl;

    // ****** TRANSITION ******
    cout << "Thanks you "  << playerOne.getName() << " ,";
    cout << " please hand the controls to " << playerTwo.getName() << endl;
    cout << endl << "****************************" << endl;
    cout << endl << "****************************" << endl;
    cout << endl << "****************************" << endl;
    cout << endl << "****************************" << endl;
    cout << endl << "****************************" << endl;
    cout << endl << "****************************" << endl;
    cout << endl << "****************************" << endl;
    cout << endl << "****************************" << endl;
    cout << endl << "****************************" << endl;
    cout << endl << "****************************" << endl;


    // ****** PLACING SHIPS FOR PLAYER 2 ******
    cout << "        PLACING PIECES     " << endl;
    cout << " You will be given 5 ships: [1] Big ship, [2] Medium ships, and [2] Small Ships" << endl;
    cout << playerTwo.getName() << " it's time to place your ships!" << endl;
    cout << " to place your pieces, please enter the coordinates in the board" << endl;
    cout << " in the format: x-coordinate [space] y-coordinate [space] is horizontal? (y/n)" << endl;

    cout << endl << "****************************" << endl;
    cout << "Current Board: " << endl;
    playerTwo.showBoard(cout);
    cout << endl << "****************************" << endl;

    // PLACE BIG SHIP
    cout << "Place your Big ship (3 tiles big): ";
    cin >> x >> y >> horizontal;

    if(horizontal == "y")
        playerTwo.addPiece(x, y, true, 3);
    else
        playerTwo.addPiece(x,y, false, 3);

    cout << endl << "****************************" << endl;
    cout << "Current Board: " << endl;
    playerTwo.showBoard(cout);
    cout << endl << "****************************" << endl;

    // PLACE MEDIUM SHIP
    cout << "Now place your medium ship (2 tiles big): ";

    cin >> x >> y >> horizontal;

    if(horizontal == "y")
        playerTwo.addPiece(x, y, true, 2);
    else
        playerTwo.addPiece(x,y, false, 2);

    cout << endl << "****************************" << endl;
    cout << "Current Board: " << endl;
    playerTwo.showBoard(cout);
    cout << endl << "****************************" << endl;

    cout << "Add a second medium ship: ";

    cin >> x >> y >> horizontal;

    if(horizontal == "y")
        playerTwo.addPiece(x, y, true, 2);
    else
        playerTwo.addPiece(x,y, false, 2);

    cout << endl << "****************************" << endl;
    cout << "Current Board: " << endl;
    playerTwo.showBoard(cout);
    cout << endl << "****************************" << endl;

    // PLACE BIG SHIP
    cout << "Now place your small ship (1 tile big): ";

    cin >> x >> y >> horizontal;

    if(horizontal == "y")
        playerTwo.addPiece(x, y, true, 1);
    else
        playerTwo.addPiece(x,y, false, 1);

    cout << endl << "****************************" << endl;
    cout << "Current Board: " << endl;
    playerTwo.showBoard(cout);
    cout << endl << "****************************" << endl;

    cout << "Add your second small ship (1 tile big): ";

    cin >> x >> y >> horizontal;

    if(horizontal == "y")
        playerTwo.addPiece(x, y, true, 1);
    else
        playerTwo.addPiece(x,y, false, 1);

    cout << endl << "****************************" << endl;
    cout << "Current Board: " << endl;
    playerTwo.showBoard(cout);
    cout << endl << "****************************" << endl;

    // ****** TRANSITION ******
    cout << "Thanks you "  << playerTwo.getName() << " ,";
    cout << " please hand the controls to " << playerOne.getName() << endl;
    cout << endl << "****************************" << endl;
    cout << endl << "****************************" << endl;
    cout << endl << "****************************" << endl;
    cout << endl << "****************************" << endl;
    cout << endl << "****************************" << endl;
    cout << endl << "****************************" << endl;
    cout << endl << "****************************" << endl;
    cout << endl << "****************************" << endl;
    cout << endl << "****************************" << endl;
    cout << endl << "****************************" << endl;


    /*playerOne.addPiece(1,1,true,3);
    playerOne.addPiece(1,2,false,2);
    playerOne.addPiece(2,2,false,2);
    playerOne.addPiece(3,2,true,1);
    playerOne.addPiece(3,3,true,1);

    playerOne.showBoard(cout);

    playerTwo.addPiece(3,5,true,3);
    playerTwo.addPiece(3,3,false,2);
    playerTwo.addPiece(4,3,false,2);
    playerTwo.addPiece(5,3,true,1);
    playerTwo.addPiece(5,4,true,1);

    playerTwo.showBoard(cout);*/

    cout << endl << "****************************" << endl;


    cout << endl << "        ATTACKING SHIPS     " << endl;

    int xHit, yHit, turn = 1;
    bool contGame = true;
    Board normalBoard;

        while (contGame) {

            if (turn % 2 == 1) {
                cout << endl << "****************************" << endl;
                cout << playerOne.getName() << " it's time to Attack!" << endl;
                cout << " to guess a hit, please enter the coordinates in the board" << endl;
                cout << " in the format: x-coordinate [space] y-coordinate" << endl;
                cout << "****************************" << endl;
                cout << normalBoard << endl;
                playerOne.showPreviousShots(cout);
                cout << endl << "****************************" << endl;
                cout << "Place your attack: ";
                cin >> xHit >> yHit;
                cout << "Attack Placed..." << endl;

                //playerOne.addLastShot(xHit, yHit);
                if (playerTwo.processOpponentShot(xHit, yHit)) {
                    cout << "Successful Hit!" << endl;
                    //playerTwo.showBoard(cout);

                    cout << endl;
                    if (playerTwo.isLost()) {
                        cout << endl << "****************************" << endl;
                        cout << endl << "CONGRATULATIONS " << playerOne.getName() << " YOU WIN!!" << endl;
                        cout << endl << "****************************" << endl;

                        contGame = playerTwo.isLost();
                        break;
                    } else {
                        cout << "You get to hit again!" << endl;
                        continue;

                    }
                }
                cout << "Shot Missed! better luck next time!" << endl;
                cout << endl << "****************************" << endl;

                ++turn;
            } else {
                cout << endl << "****************************" << endl;
                cout << playerTwo.getName() << " it's time to Attack!" << endl;
                cout << " to guess a hit, please enter the coordinates in the board" << endl;
                cout << " in the format: x-coordinate [space] y-coordinate" << endl;
                cout << "****************************" << endl;
                cout << normalBoard << endl;
                playerTwo.showPreviousShots(cout);
                cout << endl << "****************************" << endl;
                cout << "Place your attack: ";
                cin >> xHit >> yHit;
                cout << "Attack Placed..." << endl;

                //playerOne.addLastShot(xHit, yHit);
                if (playerOne.processOpponentShot(xHit, yHit)) {
                    cout << "Successful Hit!" << endl;
                   // playerOne.showBoard(cout);

                    cout << endl;
                    if (playerOne.isLost()) {
                        cout << endl << "****************************" << endl;
                        cout << endl << "CONGRATULATIONS " << playerTwo.getName() << " YOU WIN!!" << endl;
                        cout << endl << "****************************" << endl;

                        contGame = playerOne.isLost();
                        break;
                    } else {
                        cout << "You get to hit again!" << endl;
                        continue;

                    }
                }
                cout << "Shot Missed! better luck next time!" << endl;
                cout << endl << "****************************" << endl;

                ++turn;
            }

        }
        cout << "Press [1] to Rematch, [2] to QUIT." << endl;
        int c;
        cin >> c;
        if (c == 2) {
            break;
        }
        else {
            continue;
        }
    }

	//playerOne.showPreviousShots(std::cout);
	//playerOne.showBoard(cout);
	//game.placePieceVertical(1,1,2);
	//std::cout << game;
	//cout << endl << "****************************" << endl;
	//game.placePieceHorizontal(2,3,3);
	//std::cout << game;
	cout << endl;
	//game.processHit(1,1);
	//std::cout << game;
	//std::cout << std::endl;
	//std::cout << game.checkForGameOver();

}
