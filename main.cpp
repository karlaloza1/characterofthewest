
/**************************************************************************
 ** Characters of the West
 ** Name: Karla Lozada
 ** CISP 400
 **********************************************************************************/

#include <iostream>
#include <string>
#include <vector>
#include <time.h>

using namespace std;

const int deck_card_game = 53 ; //important because will hold the hall deck of cards
int cardsDeck_left = 53; // will say how many cards are left in order to continue game


/************************************************************************************
 ** We have in here each variable for the poker game, we need to set all of these
 ** variables in order to stablish what we need to store in the program, to make the
 ** progrm work
 **********************************************************************************/

double drawPlayer ;   //draw cards
double drawPlayertwo ; //draw cards
int gameHand[deck_card_game] ;
double playerCheating = 0 ; //will hold if the player is cheating
double playGame=0;          //plays the game
double one_card_pla;        //draw card for the first player
double two_card_pla;        //draw cards for second player
double three_card_pla;     //draw cards for thrid player
double four_card_pla;     //draw cards for forth player
double score_one = 0;      //score of 1 player
double score_two = 0;     //score of 2 player
double score_three = 0;   //score of 3 player
double score_four = 0;   // score of 4 player


/************************************************************************************
 ** This is the player class which is going to make the game go through, so here
 ** we will have the class with the actions each player will do. So here we found
 ** the name, draw cards.
 **********************************************************************************/

class Player_Activities_Ga

{
public:
    
    void nameFace_poker() ;    //this function will be called to give the name
    string playerName_poker;    //will hold the name of the person playing
    string playerFace_poker;    //will hold the face of the player
    int cardsGame_poker;         //will hold each card of the game
    void gameHand_poker() ;          //will create the hand of each player
    void playerGame_kill() ;  //will kill the player that do not play good
    double takeNew_cards();   //is going to call the function for leaving game
    void displayHandPlayer_poker() ;  //will show the num of each card
    void noDrawCard_poker() ;
    
    
    
    
    
};

/************************************************************************************
 ** This function will put the name and the face of each player with a switch case
 ** with this function we will print and assign the name to each player. So this
 ** function will be assigning the name to each player.
 **********************************************************************************/

void Player_Activities_Ga::nameFace_poker()
{
    
    int choice_poker;
    choice_poker= rand()%6 ;
    switch (choice_poker)
    {
        case 0:
        {
            playerName_poker = "Pedro ";
            break;
        }
        case 1:
        {
            playerName_poker = "Marcos ";
            break;
        }
        case 2:
        {
            playerName_poker = "Rene ";
            break;
        }
        case 3:
        {
            playerName_poker = "Karla ";
            break;
        }
        case 4:
        {
            playerName_poker = "Mabel ";
            break;
        }
        case 5:
        {
            playerName_poker = "Patricio ";
            break;
        }
            
    }
    
    choice_poker= rand()%6 ;
    switch (choice_poker)
    {
        case 0:
        {
            playerFace_poker = "(◕‿◕)";
            break;
        }
        case 1:
        {
            playerFace_poker = " (◑‿◐)";
            break;
        }
        case 2:
        {
            playerFace_poker = " (≧◡≦)";
            break;
        }
        case 3:
        {
            playerFace_poker = " (¬_¬)";
            break;
        }
        case 4:
        {
            playerFace_poker = " (´◕ ▽ ◕`)";
            break;
        }
        case 5:
        {
            playerFace_poker = " (◕‿-)";
            break;
        }
            
    }
    
} ;

/************************************************************************************
 ** This inheritance with the player produce a random number and later this number
 ** will initialize the function to create the kill action it kill the same player
 ** so of the game there is less people to play with and anpther player will join
 **********************************************************************************/

void Player_Activities_Ga::gameHand_poker()
{
    int random;
    
    random = rand() % 52 ;   //randomize number
    
    while (gameHand[random] == 0)
    {
        random = rand() % 52 ;
    }
    ;
    
    gameHand[random] = 0;
    
    
    if (random == 0)
    {
        cout << endl;
        cout << "OH MY GODD!! ┛(◉Д◉)┛ THERE IS A GUN!! " << endl ;
        cout << playerName_poker << " " << playerFace_poker << " its TERRIBLE for this game!! " << endl;
        cout << playerName_poker << " " << playerFace_poker << " grab his gun and kill himself (✖╭╮✖)!! " << endl<< endl;
        
        Player_Activities_Ga::playerGame_kill() ; //here we call the function kill
    }
    else
    {
        Player_Activities_Ga::cardsGame_poker = random;
        cout << Player_Activities_Ga::playerName_poker<< " " << Player_Activities_Ga::playerFace_poker <<" have this  " << Player_Activities_Ga::cardsGame_poker << " card" << endl ;
    }
    cardsDeck_left--; //less cards
} ;

/************************************************************************************
 ** This function will put the name and the face of each player with a switch case
 ** with this function we will print and assign the name to each player. So this
 ** function will be assigning the name to each player.
 **********************************************************************************/

void Player_Activities_Ga::noDrawCard_poker()
{
    int random;
    
    random = rand() % 52 ;
    
    while (gameHand[random] == 0)
    {
        random = rand() % 52 ;
    }
    gameHand[random] = 0;
    
    if (random == 0)
    {
        
        cout << endl;
        cout << "OH MY GODD!! ┛(◉Д◉)┛ THERE IS A GUN!! " << endl ;
        cout << playerName_poker << " " << playerFace_poker << " its TERRIBLE for this game!! " << endl;
        cout << playerName_poker << " " << playerFace_poker << " grab his gun and kill himself (✖╭╮✖)!! " << endl<< endl;
        
        Player_Activities_Ga::cardsGame_poker = random;
    }
    else
    {
        Player_Activities_Ga::cardsGame_poker = random;
    }
    cardsDeck_left--;
} ;


/************************************************************************************
 ** The functin here we have the class of the player inherated with a function
 ** that will display the cards of each player by turns in order to see who won
 ** the round of each game. We will call this function each time one player is
 ** taking or draw a card
 **********************************************************************************/

void Player_Activities_Ga::displayHandPlayer_poker()
{
    cout << "Other player " << playerName_poker  << playerFace_poker <<" with ";
    cout << " --> " << cardsGame_poker << " card"<< endl ;
} ;

/************************************************************************************
 ** This inheritance with the class will be called when one of the players
 ** randomly kill himself, so this will provoke that one new player come to the table
 **********************************************************************************/

void Player_Activities_Ga::playerGame_kill()
{
    cout << "The police come to take the body " << endl;
    cout <<"A new player comes to the table " << endl;
    nameFace_poker() ; //call the function to select a new person
    displayHandPlayer_poker() ; // display the cards
} ;

/************************************************************************************
 ** This inheritance will provoke that new set of cards will be taken by one of the
 ** players in order to continue the game
 **********************************************************************************/

double Player_Activities_Ga::takeNew_cards()
{
    
    return ((rand()%10) + 3);
} ;


/************************************************************************************
 ** This is the class of the Gun Slinger basically the gun slinger is going to play
 ** but is going to be more about the kill function because they also can call the
 ** function ok kill
 **********************************************************************************/
class pokerGame_GunSli  : public Player_Activities_Ga
{
public:
    float  quantity;            //quantity of notches for the gun slinger
    double takeCards_poker();     //will take cards for the gun slinger
    void personKill_poker() ;      //again is a kill function because the gun slinger decide who to kill
    void displayCards_poker() ;    //display the cards and name of the gun slinger
    void notcGun_poker();          //initializeee
    void notcGun_poker2();
    
    
    
};

/************************************************************************************
 ** will generate the random number
 **********************************************************************************/
double pokerGame_GunSli::takeCards_poker()
{
    
    return (rand()%10);
}
/************************************************************************************
 ** in here we kind of clean the scene because here we call the actions for generatin
 ** a new player with new name and face and also give a new set of cards
 **********************************************************************************/
void pokerGame_GunSli::personKill_poker()
{
    cout << "The police come to take the body " << endl;
    cout <<"A new player comes to the table " << endl;
    nameFace_poker() ; //new player
    notcGun_poker();
    displayCards_poker() ; //new card assignation
}

/************************************************************************************
 ** in this inheritance the process is simple we are just displaying the info
 ** about the gun slinger wchich is the name, face and card
 **********************************************************************************/

void pokerGame_GunSli::displayCards_poker()
{
    cout << "First Player --> " << playerName_poker  << playerFace_poker << endl;
    cout << "The Gunslinger ╰( ಠ ω ಠ )╯ has this --> " << cardsGame_poker << " card" << endl;
} ;

/************************************************************************************
 ** generating the random number for the quantity of notches
 **********************************************************************************/
void pokerGame_GunSli::notcGun_poker()
{
    int random;
    random = rand() % 3 ;
    quantity = random;
};

/************************************************************************************
 ** initialices the gun slinger into the gameeeee
 **********************************************************************************/

void pokerGame_GunSli::notcGun_poker2()
{
    cout << " The Gun Slinger is now here (¬_¬) " << endl;
    int index = quantity + 1;
    quantity = index;
    
};


/************************************************************************************
 ** This is the player class which is going to make the game go through, so here
 ** we will have the class with the actions each player will do. So here we found
 ** the name, draw cards.
 **********************************************************************************/


class ShaCard_poker  : public Player_Activities_Ga
{
public:
    double getCards_poker();  //get the cards for each player
    void takeCards_poker() ; // cards initialization
    
} ;

double ShaCard_poker::getCards_poker()
{
    
    return ((rand()%10) + 5);   //get the random number
} ;

void ShaCard_poker::takeCards_poker()
{
    
    int cheating_poker;  //hold the random number
    int randomize_poker;
    
    cheating_poker = (rand() % 100) ;  //create the random digit
    randomize_poker = rand() % 52 ;  //create the random digit
    
    if(cheating_poker >= 75)
    {
        cout << "IT'S CHEATING TIMEEE !!! (◕‿-)" << endl << endl;
        cout <<  playerName_poker << " " << playerFace_poker ;
        cout << " took a card from behing the table ";
        gameHand[randomize_poker] = 0;
        cardsDeck_left--;
        
        while (gameHand[randomize_poker] == 1 || randomize_poker == 0)
        {
            randomize_poker = rand() % 52 ;
        }
        cardsGame_poker = randomize_poker;
        playerCheating = 1 ;
    }
    else
    {
        while (gameHand[randomize_poker] == 0)
        {
            randomize_poker = rand() % 52 ;
        }
        gameHand[randomize_poker] = 0;
        if (randomize_poker == 0)
        {
            cout << endl;
            cout << "IT'S CHEATING TIMEEE !!! (◕‿-)" << endl ;
            cout <<  playerName_poker << " " << playerFace_poker ;
            cout << " took a card from behing the table ";
            gameHand[randomize_poker] = 0;
            while (gameHand[randomize_poker] == 1 || randomize_poker == 0)
            {
                randomize_poker = rand() % 52 ;
            }
            cardsGame_poker = randomize_poker;
            cout << "the " << cardsGame_poker << " card" <<endl ;
            playerCheating = 1 ;
        }
        
        
        cardsDeck_left--;
    }
} ;



/************************************************************************************
 ** Here we have the class of the poker player inhereted with the function that 
 ** will give the cards to the poker players
 **********************************************************************************/

class GamePlayer_poker  : public Player_Activities_Ga
{
public:
    double takeCards_poker();
} ;

double GamePlayer_poker::takeCards_poker()
{
    
    return (rand() % 10 + 5);
} ;

/************************************************************************************
 ** Here we have the first function that will make the program work wich is
 ** initialize the deck of the cards each of the cards giving them to each
 ** of the players simultianely
 **********************************************************************************/


void createDeckGame_poker()
{
    cardsDeck_left = 53;
    for(int i=0; i < deck_card_game; i++)
    {
        gameHand[i] = 1 ;
    }
} ;



int no_cards()
{
    if (drawPlayer <= drawPlayertwo)
    {
        return 1 ;
    }
    else
    {
        return 0;
    }
    
} ;


/************************************************************************************
 ** This function is one of the most important because it will check the if statements
 ** in order to see which player won each round of the game so that later the
 ** the total can be sum up and now the winner of the game
 **********************************************************************************/

int tableScore_poker()
{
    int cheating_poker;
    cheating_poker= rand() % 100;
    
    if (cheating_poker >= 50 && playerCheating == 1)
    {
        cout << endl;
        
        
    }
    else
    {
        if(one_card_pla >= two_card_pla && one_card_pla >= three_card_pla && one_card_pla >= four_card_pla)
        {
            score_one++; //store in variable for score player 1
            return 1 ;
        }
        
        if(two_card_pla >= one_card_pla && two_card_pla >= three_card_pla && two_card_pla >= four_card_pla)
        {
            score_two++; //store in variable score player 2
            return 2 ;
        }
        
        if(three_card_pla >= one_card_pla && three_card_pla >= two_card_pla && three_card_pla >= four_card_pla)
        {
            score_three++; //store in variable score player 3
            return 3 ;
            
        }
        
        if(four_card_pla >= one_card_pla && four_card_pla >= two_card_pla && four_card_pla >= three_card_pla)
        {
            score_four++;   //store in variable score player 4
            return 4 ;
        }
    }
    return tableScore_poker(); //return the value to be checked in main
};

/************************************************************************************
 ** This function is one of the most important because it will test the condition in
 ** order to see who won the whole game so it will test the quantity of times the
 ** player won in each table rounds
 **********************************************************************************/

int finalGame_poker()
{
    
    if(score_one >= score_two && score_one >= score_three && score_one >= score_four)
    {
        return 1 ;  //check in main
    }
    
    if(score_two >= score_one && score_two >= score_three && score_two >= score_four)
    {
        return 2 ;
    }
    
    if(score_three >= score_one && score_three >= score_two && score_three >= score_four)
    {
        return 3 ;
        
    }
    
    if(score_four >= score_one && score_four >= score_two && score_four >= score_three)
    {
        return 4 ;
    }
    return finalGame_poker();  //retunr the condition for being proced at main
};

/************************************************************************************
 ** This is the main function that will take care of printing everything and showing
 ** the results, in here we will practically just call the functions.
 **********************************************************************************/


int main()
{
    cout << "♡ ♢ ♤ ♧ ♡ ♢ ♤ ♧ ♡ ♢ ♤ ♧ ♡ ♢ ♤ ♧ ♡ ♢ ♤ ♧ ♡ ♢ ♤ "<< endl << endl;
    cout << "★★★★★★★★★ Welcome to Karla's Casino ★★★★★★★★★" << endl << endl;
    cout << "   ════════════ Charaacters of the West ════════════"<< endl << endl;
    cout << "This game consist in a easy game of poker of 4 players " << endl;
    cout << "each of the will take a card and the one with the bigger" << endl;
    cout << "will win the round there would be rounds until the cards" << endl;
    cout << "are gone in the Deck!! The one with the more wins WIN !!" << endl;
    cout << "Remember this is a DANGEROUS GAME, so there GUNS!!"<< endl;
    cout << "Also, there is a possibility of cheating "<< endl << endl;
    cout << "ƸӜƷ GOOODDDD LUCKKKKKK!! ƸӜƷ "<< endl << endl;
    
    cout << "♡ ♢ ♤ ♧ ♡ ♢ ♤ ♧ ♡ ♢ ♤ ♧ ♡ ♢ ♤ ♧ ♡ ♢ ♤ ♧ ♡ ♢ ♤ "<< endl << endl;
    
    srand ((unsigned)time(NULL)); //random number initialized
    createDeckGame_poker() ;
    
    /************************************************************************************
     ** here we are putting each player the functions they must do
     ** we do this for each player calling functions in order to initializate
     ** each player
     **********************************************************************************/
    pokerGame_GunSli firstOne_poker  ;
    firstOne_poker.nameFace_poker() ;
    firstOne_poker.notcGun_poker() ;
    drawPlayer = firstOne_poker.takeCards_poker() ;
    firstOne_poker.noDrawCard_poker();
    firstOne_poker.displayCards_poker() ;
    one_card_pla = firstOne_poker.cardsGame_poker ;
    
    
    ShaCard_poker secondOne_poker  ;
    secondOne_poker.nameFace_poker() ;
    secondOne_poker.noDrawCard_poker();
    drawPlayertwo = secondOne_poker.getCards_poker() ;
    secondOne_poker.displayHandPlayer_poker() ;
    two_card_pla = secondOne_poker.cardsGame_poker ;
    
    
    GamePlayer_poker thirdOne_poker  ;
    thirdOne_poker.nameFace_poker() ;
    thirdOne_poker.noDrawCard_poker();
    thirdOne_poker.displayHandPlayer_poker() ;
    three_card_pla = thirdOne_poker.cardsGame_poker ;
    
    
    GamePlayer_poker fourthOne_poker  ;
    fourthOne_poker.nameFace_poker() ;
    fourthOne_poker.noDrawCard_poker();
    fourthOne_poker.displayHandPlayer_poker() ;
    four_card_pla = fourthOne_poker.cardsGame_poker ;
    
    cout << endl << endl;
    
    cout << "♡ ♢ ♤ ♧ ♡ ♢ ♤ ♧ ♡ ♢ ♤ ♧ ♡ ♢ ♤ ♧ ♡ ♢ ♤ ♧ ♡ ♢ ♤ "<< endl << endl;
    srand ((unsigned)time(NULL));
    
    /************************************************************************************
     ** here we are putting each player the functions they must do
     ** we do this for each player calling functions in order to initializate
     ** each player
     **********************************************************************************/
    
    
    int pokerGame_deci;
    int table_winner_poker;
    
    /************************************************************************************
     ** This while loop will print the menu for starting the game and also will
     ** call the functions for each player and show the results for the winners of each
     ** round and also for the winner of all the rounds
     **********************************************************************************/
    
    while (pokerGame_deci != 1)
    {
        cout << "  ƸӜƷƸӜƷƸӜƷƸӜƷ NOW WE NEED YOUR HELP ƸӜƷƸӜƷƸӜƷƸӜƷ"<< endl << endl;
        cout << "       ƸӜƷ Please insert 1 for PlAY ƸӜƷ" << endl;
       cin >> pokerGame_deci;
        switch (pokerGame_deci)
        {
            case 0:
            {
                cout << "THANKS FOR PLAYING AND ENJOYIN THE GAME (◕‿-)" << endl;
                break;
            }
            case 1:{
                playGame = 1;
                
                while (playGame != 0) //here the game starts
                {
                    cout << endl << endl;
                    
                    
                    table_winner_poker = tableScore_poker();
                    
                    
                    switch (table_winner_poker)
                    {
                        case 0: {
                            int t = no_cards();
                            if(t == 1){
                                cout << "Gun Slinger -> " << firstOne_poker.playerName_poker << " " << firstOne_poker.playerFace_poker <<" shoots ";
                                cout << "Card Sharp -> " << secondOne_poker.playerName_poker << " " << secondOne_poker.playerFace_poker <<endl;
                                secondOne_poker.playerGame_kill();
                                firstOne_poker.notcGun_poker2();
                            }
                            else{
                                cout << "\n\nCard Sharp -> " << secondOne_poker.playerName_poker << " " << secondOne_poker.playerFace_poker <<"  shoots ";
                                cout << "Gun Slinger -> " << firstOne_poker.playerName_poker << " " << firstOne_poker.playerFace_poker <<endl;
                                firstOne_poker.personKill_poker();
                            }
                            break ;
                        }
                        case 1:
                        {
                            cout << endl;
                            cout << "ƸӜƷ ƸӜƷ ƸӜƷ ƸӜƷ ƸӜƷ ƸӜƷ ƸӜƷ ƸӜƷ ƸӜƷ ƸӜƷ ƸӜƷ ƸӜƷ ƸӜƷ ƸӜƷ ƸӜƷ ƸӜƷ  " << endl << endl;
                            cout << "❀❀❀ ROUND ❀❀❀"<< endl<< endl;
                            cout << "Gun Slinger " << firstOne_poker.playerName_poker << " " << firstOne_poker.playerFace_poker <<" WONNN with the card --> ";
                            cout << firstOne_poker.cardsGame_poker << endl<< endl;
                            break;
                        }
                        case 2:
                        {
                            cout << endl;
                            cout << "ƸӜƷ ƸӜƷ ƸӜƷ ƸӜƷ ƸӜƷ ƸӜƷ ƸӜƷ ƸӜƷ ƸӜƷ ƸӜƷ ƸӜƷ ƸӜƷ ƸӜƷ ƸӜƷ ƸӜƷ ƸӜƷ  " << endl << endl;
                            cout << "❀❀❀ ROUND ❀❀❀"<< endl<< endl;
                            cout << "Card Sharp " << secondOne_poker.playerName_poker << " " << secondOne_poker.playerFace_poker <<" WONN with the card --> ";
                            cout << secondOne_poker.cardsGame_poker << endl<<endl;
                            break;
                        }
                        case 3:
                        {
                            cout << endl;
                            cout << "ƸӜƷ ƸӜƷ ƸӜƷ ƸӜƷ ƸӜƷ ƸӜƷ ƸӜƷ ƸӜƷ ƸӜƷ ƸӜƷ ƸӜƷ ƸӜƷ ƸӜƷ ƸӜƷ ƸӜƷ ƸӜƷ  " << endl << endl;
                            cout << "❀❀❀ ROUND ❀❀❀"<< endl<< endl;
                            cout << "Poker Player " << thirdOne_poker.playerName_poker << " " << thirdOne_poker.playerFace_poker <<" WONNN with the card --> ";
                            cout << thirdOne_poker.cardsGame_poker << endl<< endl;
                            break;
                        }
                        case 4:
                        {
                            cout << endl;
                            cout << "ƸӜƷ ƸӜƷ ƸӜƷ ƸӜƷ ƸӜƷ ƸӜƷ ƸӜƷ ƸӜƷ ƸӜƷ ƸӜƷ ƸӜƷ ƸӜƷ ƸӜƷ ƸӜƷ ƸӜƷ ƸӜƷ " << endl << endl;                            cout << "❀❀❀ ROUND ❀❀❀"<< endl<<endl;
                            cout << "Poker Player " << fourthOne_poker.playerName_poker << " " << fourthOne_poker.playerFace_poker <<" WONNN with the card --> ";
                            cout << fourthOne_poker.cardsGame_poker << endl<<endl;
                            break;
                        }
                        default: cout << "OOPS!!! No one WONN there is a error " << endl <<endl;
                    }
                    if (cardsDeck_left <= 3)
                    {
                        int win_game_poker = finalGame_poker();
                        switch (win_game_poker)
                        {
                                
                            case 1:
                            {
                                cout << endl;
                            cout << "♠ ♥ ♣ ♦ ♠ ♥ ♣ ♦ ♠ ♥ ♣ ♦ ♠ ♥ ♣ ♦ ♠ ♥ ♣ ♦ ♠ ♥ ♦ ♠ ♥ ♣ ♦ ♠ ♥ ♣ ♦  "<< endl << endl;
                                cout << "♡ ♢ ♤ ♧ ♡ ♢ ♤ ♧ ♡ ♢ ♤ ♧ ♡ ♢ ♤ ♧ ♡ ♢ ♤ ♧ ♡ ♢ ♤ "<< endl << endl;
                                cout << "Gun Slinger " << firstOne_poker.playerName_poker << " " << firstOne_poker.playerFace_poker <<" ";
                                cout << "WONNNNN!! THE GAMEEE!! with a score of "<<score_one << endl<<endl;
                                cout << "(◑‿◐) CONGRATSSS!!! (◑‿◐) "<< endl;
                                break;
                            }
                            case 2:
                            {
                                cout << endl;
                                
                                cout << "♡ ♢ ♤ ♧ ♡ ♢ ♤ ♧ ♡ ♢ ♤ ♧ ♡ ♢ ♤ ♧ ♡ ♢ ♤ ♧ ♡ ♢ ♤ "<< endl << endl;
                                cout << "♠ ♥ ♣ ♦ ♠ ♥ ♣ ♦ ♠ ♥ ♣ ♦ ♠ ♥ ♣ ♦ ♠ ♥ ♣ ♦ ♠ ♥ ♣ ♦ ♥ ♣ ♦ ♠ ♥ ♣ ♦  "<< endl << endl;
                                cout << "Card Sharp " << secondOne_poker.playerName_poker << " " << secondOne_poker.playerFace_poker <<" ";
                                cout << "WONNNNN!! THE GAMEEE!! with a score of " << score_two<< endl<<endl;
                                cout << "(◑‿◐) CONGRATSSS!!! (◑‿◐) "<< endl;                                break;
                            }
                            case 3: {
                                cout << endl;
                                cout << "♠ ♥ ♣ ♦ ♠ ♥ ♣ ♦ ♠ ♥ ♣ ♦ ♠ ♥ ♣ ♦ ♠ ♥ ♣ ♦ ♠ ♥ ♣ ♦ ♠ ♥ ♦ ♠ ♥ ♣ ♦  "<< endl << endl;
                                cout << "♡ ♢ ♤ ♧ ♡ ♢ ♤ ♧ ♡ ♢ ♤ ♧ ♡ ♢ ♤ ♧ ♡ ♢ ♤ ♧ ♡ ♢ ♤ "<< endl << endl;
                                
                                cout << "Poker Player " << thirdOne_poker.playerName_poker << " " << thirdOne_poker.playerFace_poker <<" ";
                                cout << "WONNNNN!! THE GAMEEE!! with a score of " << score_three<< endl<< endl;
                                cout << "(◑‿◐) CONGRATSSS!!! (◑‿◐) "<< endl;                                  break;
                            }
                            case 4:
                            {
                                cout << endl;
                               
                                cout << "♡ ♢ ♤ ♧ ♡ ♢ ♤ ♧ ♡ ♢ ♤ ♧ ♡ ♢ ♤ ♧ ♡ ♢ ♤ ♧ ♡ ♢ ♤ "<< endl << endl;
                                
                                cout << "♠ ♥ ♣ ♦ ♠ ♥ ♣ ♦ ♠ ♥ ♣ ♦ ♠ ♥ ♣ ♦ ♠ ♥ ♣ ♦ ♠ ♥ ♣ ♦ ♠ ♥ ♣ ♠ ♥ ♣ ♦  "<< endl << endl;
                                cout << "Poker Player " << fourthOne_poker.playerName_poker << " " << fourthOne_poker.playerFace_poker <<" ";
                                cout << "WONNNNN!! THE GAMEEE!! with a score of " << score_four<< endl<< endl;
                                cout << "(◑‿◐) CONGRATSSS!!! (◑‿◐) "<< endl;                                  break;
                            }
                            default: cout << "\nWait How Did no one win?!";
                        }
                        cout << endl;
                        cout << "♠ ♥ ♣ ♦ ♠ ♥ ♣ ♦ ♠ ♥ ♣ ♦ ♠ ♥ ♣ ♦ ♠ ♥ ♣ ♦ ♠ ♥ ♣ ♦ ♠ ♥ ♣ ♦ ♠ ♥ ♣  "<< endl << endl;
                        cout << "♡ ♢ ♤ ♧ ♡ ♢ ♤ ♧ ♡ ♢ ♤ ♧ ♡ ♢ ♤ ♧ ♡ ♢ ♤ ♧ ♡ ♢ ♤ "<< endl << endl;
                       
                        
                        
                       playGame = 0;
                    }
                    else
                    {
                        firstOne_poker.gameHand_poker();
                        secondOne_poker.takeCards_poker();
                        thirdOne_poker.gameHand_poker();
                        fourthOne_poker.gameHand_poker();
                        one_card_pla = firstOne_poker.cardsGame_poker ;
                        two_card_pla = secondOne_poker.cardsGame_poker ;
                        three_card_pla = thirdOne_poker.cardsGame_poker ;
                        four_card_pla = fourthOne_poker.cardsGame_poker ;
                        
                    }
                }
                break;
            }
        }
    }
    
    return 0;
    
}
