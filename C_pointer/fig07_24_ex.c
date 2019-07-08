// Fig. 7.24: fig07_24.c
// Card shuffling and dealing.
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <time.h>
#include <stdbool.h>

#define SUITS 4
#define FACES 13
#define CARDS 52
#define HAND_CARD 5

struct card {
    char face[10]; // face of poke
    char suit[10]; // suit of poke
};

// Card slot
struct slot {
    size_t size;
    struct card setCard[HAND_CARD];
};

// Player
typedef struct player{
    struct card inHandCard[5]; // InHand card or each player
    struct slot dict[FACES]; // Card dictionary after get card
    /* How strong the card player have ?*/
    bool hasPair; 
    bool hasTwoPair;
    bool hasTriple;
    bool hasFourAKind;
    bool canBeFlush;
    bool canBeStraight;
} player_t;

/* player constructor */
void player(player_t *player)
{
    for (int i = 0; i < FACES; i++)
    {
        player->dict[i].size = 0;
    }

    player->canBeStraight = true; // default is has straight any pair or more will break it 
    player->canBeFlush = true; // default is has flush any pair or more will break it 
    player->hasPair = false;
    player->hasTriple = false;
    player->hasFourAKind = false;
}

// prototypes
void shuffle(unsigned int wDeck[][ FACES ]); // shuffling modifies wDeck
void deal( unsigned int wDeck[][ FACES ], const char *wFace[], const char *wSuit[]); //dealing doesn't modify the arrays
void dealFiveHand(unsigned int wDeck[][ FACES ], const char *wFace[], const char*wSuit[], struct card inHand[]); // deal five car in own hand 

/* Traverse inHand card to check how we have
 * card: source card
 * operate: function pointer to work on inHand deck
 * dict: inHand card dict for fast check
 */
void traverseCard(struct card[],int (*operate)(struct card), struct slot dict[]);

/* Check card for pair, triple, four or flush
 * player: player to check
 * return void
 */
void checkCard(player_t *player);

/* Function pointer */
int orderFace(struct card firstCard);

int findFlush(struct card firstCard);

int main(void)
{
    // initialize suit array
    const char *suit [ SUITS ] = { "Hears", "Diamond", "Clubs", "Spades" };

    // initialize face array
    const char *face[ FACES ] = { "Ace", "Deuce", "Three", "Four", "Five", "Six",
                                 "Seven", "Eight", "Nine", "Ten", "Jack", "Queen", "King"};

    // initialize deck array
    unsigned int deck[ SUITS ][ FACES ] = {0};

    player_t player1;
    player(&player1);
    srand( time( NULL ) ); // seed random generator

    shuffle(deck); // shuffle the deck
    // deal( deck, face, suit ); // deal the deck
    dealFiveHand(deck, face, suit, player1.inHandCard);

    // Card Dictionary
    // init dict
    for (int i = 0; i < FACES; i++)
    {
        player1.dict[i].size = 0;
    }

    traverseCard(player1.inHandCard, &orderFace, player1.dict);
    checkCard(&player1);


} //end main

// shuffle cards in deck
void shuffle( unsigned int wDeck[][ FACES ] )
{
    size_t row; // row number
    size_t column; // column number
    size_t card; // counter

    // for each of the cards, choose slot of deck randomly
    for ( card = 1; card <= CARDS; card++ )
    {
        do {
            row = rand() % SUITS;
            column = rand() % FACES;
        } while (wDeck[ row ][ column ] != 0); //end do.. while

        // place card number in chosen slot of the deck
        wDeck[ row ][ column ] = card;
    }// end for
} // end function shuffle

// deal card in deck
void deal( unsigned int wDeck[][ FACES ], const char *wFace[], const char *wSuit[] )
{
    size_t card; // card number
    size_t row; // row counter
    size_t column; // column counter

    // deal each of the card
    for ( card = 1; card <= CARDS; ++card ) {
        // loop through rows of wDeck
        for ( row = 0; row < SUITS; row ++ ) {
            // loop through collumns of wDeck for current row
            for ( column = 0; column < FACES; column++ )
            {
                // if slot contains curren card, display card
                if ( wDeck[ row ][ column ] == card ){
                    printf("%5s of %-8s%c", wFace[ column ], wSuit[ row ], card % 2 == 0 ? '\n': '\t'); // 2 column format
                } // end if
            } // end for
        } // end for
    } // end for
} //end function deal

void dealFiveHand(unsigned int wDeck[][ FACES ], const char *wFace[], const char*wSuit[], struct card inHand[]){
    size_t card; // card number
    size_t row; // row counter
    size_t column; // column counter
    size_t num = 0; // num card in hand

    // deal each of the card
    for ( card = 1; card <= CARDS; ++card ) {
        // loop through rows of wDeck
        for ( row = 0; row < SUITS; row ++ ) {
            // loop through collumns of wDeck for current row
            for ( column = 0; column < FACES; column++ )
            {
                // if slot contains curren card, display card
                if ( wDeck[ row ][ column ] == card ){
                    strcpy(inHand[num].face, wFace[ column ]);
                    strcpy(inHand[num].suit, wSuit[ row ]);
                    if (num == 4)
                    {
                        break;
                    }
                    num++;
                } // end if
            } // end for
        } // end for
    } // end for
} // end function dealFiveHand

/* Operator list */
int orderFace (struct card firstCard)
{
    // check face type  
    // Ace
    if (strcmp(firstCard.face, "ACE") == 0)
    {
        return 0;
    }

    // Deuce
    if (strcmp(firstCard.face, "Deuce") == 0)
    {
        return 1;
    }

    // Three
    if (strcmp(firstCard.face, "Three") == 0)
    { 
        return 2;
    }

    // Four
    if (strcmp(firstCard.face, "Four") == 0)
    {
        return 3;
    }

    // Five
    if (strcmp(firstCard.face, "Five") == 0)
    {
        return 4;
    }

    // Six
    if (strcmp(firstCard.face, "Six") == 0)
    {
        return 5;
    }

    // Seven
    if (strcmp(firstCard.face, "Seven") == 0)
    {
        return 6;
    }

    // Eight
    if (strcmp(firstCard.face, "Eight") == 0)
    {
        return 7;
    }

    // Nine 
    if (strcmp(firstCard.face,  "Nine") == 0)
    {
        return 8;
    }

    // Ten 
    if (strcmp(firstCard.face,  "Ten") == 0)
    {
        return 9;
    }

    // Jack 
    if (strcmp(firstCard.face,  "Jack") == 0)
    {
        return 10;
    }

    // Queen 
    if (strcmp(firstCard.face,  "Queen") == 0)
    {
        return 11;
    }
    
    // Not of all above it can be king so return 12
    return 12;
}
void traverseCard (struct card inHand[], int (*operate)(struct card preCard), struct slot dict[])
{
    for (int i = 0; i < HAND_CARD; i++)
    {
         int index = operate(inHand[i]);
         // Last position in setCard = size
         int last = dict[index].size;

         strcpy(dict[index].setCard[last].face, inHand[i].face); // Copy face
         strcpy(dict[index].setCard[last].suit, inHand[i].suit); // Copy suit
         dict[index].size++; // increase size
    }
    
}
void checkCard(player_t *player)
{

    char last_suit[10] = {'\0'}; // last suit to check flush
    
    // Flush count streak
    int flushStreak = 0;

    // Straight count streak
    int straightStreak = 0;

    for (int i = 0; i< FACES; i++)
    {
        printf("Slot: %i\n", i + 1);
        // Pair
        if (player->dict[i].size == 2)
        {
            printf("Double of %s \n", player->dict[i].setCard[0].face);

            // if already has pair
            if (player->hasPair == true)
            {
                player->hasTwoPair = true; // we will has two pair
                
                // if have at least one pair, it must not have flush and straight
                player->canBeFlush = false;
                player->canBeStraight = false;
            } //end if

            // if not have any pair
            if (player->hasPair == false)
            {
                player->hasPair = true; // we will get one pair
            } // end if 
            
        }// end if

        // Triple
        else if (player->dict[i].size == 3)
        {
            printf("Triple of %s \n", player->dict[i].setCard[0].face);
            player->hasTriple = true;

            // if have triple , it must not have flush and straight
            player->canBeFlush = false;
            player->canBeStraight = false;
        } // end else if 

        // Four
        else if (player->dict[i].size == 4)
        {
            printf("Four of %s \n", player->dict[i].setCard[0].face);
            player->hasFourAKind = true;

            // if have four , it must not have flush and straight
            player->canBeFlush = false;
            player->canBeStraight = false;
        } // end else if

        // Flush
        if (player->canBeFlush == true)
        {
            if (i == 0)
            {
                strcpy(last_suit,player->dict[i].setCard[i].face);
            } // end if
            else {
                if (player->dict[i].size == 0)
                {
                    flushStreak = 0;
                } // end if
                else {
                    if (strcmp(last_suit,player->dict[i].setCard->suit) == 0)
                    {
                        flushStreak ++;
                    } 
                    else
                    {
                        flushStreak = 0;
                        player->canBeFlush = false;
                    } // end if
                } // end if 
            } // end else
        } // end  if flush
        
        if (player->canBeStraight == true)
        {
            // increse 1 if slot have card
            if (player->dict[i].size != 0 )
            {
                straightStreak ++;
            }
            else if (straightStreak < 5)
            {
                straightStreak = 0;
            }
        } // end if

   }// end for
} //end function
