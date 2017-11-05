#include "bryan.h"

using namespace std;

bryan::bryan(unsigned char instance = 0)
:Player(instance)
{
    srand(time(NULL));
    mode = rand() % 4;

    std::cout << "Bryan: I'm not trapped here with you, you are trapped here with me..." << endl;
    std::cout << "And my agression mode is at: " << mode << endl;
}

bryan::~bryan() // Mem leak? Never gets called?
{
    cout << "R.I.P" << endl;
}

const char *bryan::getName() const
{
    return("BRYAN >=3");
}

int bryan::willYouRaise(unsigned int totalBet)
{
    Game game;
    PokerRank handRank = getHand().getMyRank();
    PokerRank tableRank = getCommunityRank();
    cout << game.getPlayerLocation() << "------------------%%%%%%%%%%%%%%%%%%%%%%%%%%%----------------" << endl;

    switch (handRank.getCategory()) {
    case ONE_PAIR:
        cout << "ONE" << endl;
    case TWO_PAIR:
        cout << "TWO" << endl;
    case THREE_OF_A_KIND:
        cout << "THREE" << endl;
        return 0;
    case STRAIGHT:
        cout << "STRIAGHT" << endl;
    case FLUSH:
        cout << "FLUSH" << endl;
    case FULL_HOUSE:
        cout << "FULL" << endl;
    case FOUR_OF_A_KIND:
        cout << "FOUR" << endl;
    case STRAIGHT_FLUSH:
        cout << "STRIAIGHT_FLUSH" << endl;
    default:
        return 0;
    }
}

//if( myHandRank.getCategory() >= THREE_OF_A_KIND )
//{
//    if( tableRank.getCategory() == myHandRank.getCategory() )
//    {
//        return( 0 );
//    }
//    return( getChips() );
//}
//else if( myHandRank.getCategory() >= TWO_PAIR )
//{
//    if( tableRank.getCategory() == myHandRank.getCategory() )
//    {
//        return( 0 );
//    }
//    return( totalBet - getBet() ); //raise as much as raised :-D troll
//}
//return( 0 );
