/*
 Dane Reid
 MAC 125
 Hangman
 
 This is a program that allows you to play the game hangman.
 This is a multiplayer game. You can choose to play against a friend
 or to play alone against the computer. If you choose to play with a friend
 then you or your friend chooses the word then then the other tries to guess
 the word. If you play against the computer, the computer will fetch a word from
 the txt file and you will have to guess the word. There are difficulty
 levels in this game too so depending on which difficulty you choose,
 that's how many tries you get.
 
 see lines 563 through 662 to see the words the computer comes up with.
 */
#include <iostream>
#include <string>
#include <fstream>
#include <cstring>
#include <istream>
#include <cstring>

using namespace std;

//class for when the player chooses a word
class PlayerWord
{
public:
    void setWord(std::istream & x)
    {
        x >> word;
    }
    std::string getWord()
    {
        return word;
    }
private:
    std::string word;
};

class ComputerWord: PlayerWord
{
    ComputerWord()
    {
        
    }
};

//function that shows the hang man evertime the other player gets a incorrect word.
//This is a harder difficulty
int hangManHard(int incorrect)
{
    if (incorrect == 1)
    {
        cout << "" << endl;
        cout << "____" << endl;
        cout << "|    |" << endl;
        cout << "|    O" << endl;
        cout << "|   " << endl;
        cout << "|   " << endl;
        cout << "|   " << endl;
        cout << "|" << endl;
        cout << "|______" << endl;
    }
    else if (incorrect == 2)
    {
        cout << "" << endl;
        cout << "____" << endl;
        cout << "|    |" << endl;
        cout << "|    O" << endl;
        cout << "|    |" << endl;
        cout << "|    |" << endl;
        cout << "|   " << endl;
        cout << "|" << endl;
        cout << "|______" << endl;
    }
    else if (incorrect == 3)
    {
        cout << "" << endl;
        cout << "____" << endl;
        cout << "|    |" << endl;
        cout << "|    O" << endl;
        cout << "|    |-" << endl;
        cout << "|    |" << endl;
        cout << "|   " << endl;
        cout << "|" << endl;
        cout << "|______" << endl;
    }
    else if (incorrect == 4)
    {
        cout << "" << endl;
        cout << "____" << endl;
        cout << "|    |" << endl;
        cout << "|    O" << endl;
        cout << "|   -|-" << endl;
        cout << "|    |" << endl;
        cout << "|   " << endl;
        cout << "|" << endl;
        cout << "|______" << endl;
    }
    else if (incorrect == 5)
    {
        cout << "" << endl;
        cout << "____" << endl;
        cout << "|    |" << endl;
        cout << "|    O" << endl;
        cout << "|   -|-" << endl;
        cout << "|    |" << endl;
        cout << "|     |" << endl;
        cout << "|" << endl;
        cout << "|______" << endl;
    }
    else if (incorrect == 6)
    {
        cout << "" << endl;
        cout << "____" << endl;
        cout << "|    |" << endl;
        cout << "|    O" << endl;
        cout << "|   -|-" << endl;
        cout << "|    |" << endl;
        cout << "|   / |" << endl;
        cout << "|" << endl;
        cout << "|______" << endl;

    }
    return incorrect;
        
}
//function that shows the hang man evertime the other player gets a incorrect word.
//This is a easier difficulty

int hangManEasy(int incorrect)
{
    PlayerWord po;
    if (incorrect == 1)
    {
        cout << "" << endl;
        cout << "____" << endl;
        cout << "|    |" << endl;
        cout << "|    O" << endl;
        cout << "|   " << endl;
        cout << "|   " << endl;
        cout << "|   " << endl;
        cout << "|" << endl;
        cout << "|______" << endl;
    }
    else if (incorrect == 2)
    {
        cout << "" << endl;
        cout << "____" << endl;
        cout << "|    |" << endl;
        cout << "|    O" << endl;
        cout << "|    |" << endl;
        cout << "|    |" << endl;
        cout << "|   " << endl;
        cout << "|" << endl;
        cout << "|______" << endl;
    }
    else if (incorrect == 3)
    {
        cout << "" << endl;
        cout << "____" << endl;
        cout << "|    |" << endl;
        cout << "|    O" << endl;
        cout << "|    |-" << endl;
        cout << "|    |" << endl;
        cout << "|   " << endl;
        cout << "|" << endl;
        cout << "|______" << endl;
    }
    else if (incorrect == 4)
    {
        cout << "" << endl;
        cout << "____" << endl;
        cout << "|    |" << endl;
        cout << "|    O" << endl;
        cout << "|   -|-" << endl;
        cout << "|    |" << endl;
        cout << "|   " << endl;
        cout << "|" << endl;
        cout << "|______" << endl;
    }
    else if (incorrect == 5)
    {
        cout << "" << endl;
        cout << "____" << endl;
        cout << "|    |" << endl;
        cout << "|    O" << endl;
        cout << "|   -|-" << endl;
        cout << "|    |" << endl;
        cout << "|     |" << endl;
        cout << "|" << endl;
        cout << "|______" << endl;
    }
    else if (incorrect == 6)
    {
        cout << "" << endl;
        cout << "____" << endl;
        cout << "|    |" << endl;
        cout << "|    O" << endl;
        cout << "|   -|-" << endl;
        cout << "|    |" << endl;
        cout << "|   / |" << endl;
        cout << "|" << endl;
        cout << "|______" << endl;
        
    }
    else if (incorrect == 7)
    {
        cout << "" << endl;
        cout << "____" << endl;
        cout << "|    |" << endl;
        cout << "|    O" << endl;
        cout << "|   -|-o" << endl;
        cout << "|    |" << endl;
        cout << "|   / |" << endl;
        cout << "|" << endl;
        cout << "|______" << endl;
        
    }
    else if (incorrect == 8)
    {
        cout << "" << endl;
        cout << "____" << endl;
        cout << "|    |" << endl;
        cout << "|    O" << endl;
        cout << "|  o-|-o" << endl;
        cout << "|    |" << endl;
        cout << "|   / |" << endl;
        cout << "|" << endl;
        cout << "|______" << endl;
        
    }
    else if (incorrect == 9)
    {
        cout << "" << endl;
        cout << "____" << endl;
        cout << "|    |" << endl;
        cout << "|    O" << endl;
        cout << "|  o-|-o" << endl;
        cout << "|    |" << endl;
        cout << "|   / |" << endl;
        cout << "|  o" << endl;
        cout << "|______" << endl;
        
    }
    else if (incorrect == 10)
    {
        cout << "" << endl;
        cout << "____" << endl;
        cout << "|    |" << endl;
        cout << "|    O" << endl;
        cout << "|  o-|-o" << endl;
        cout << "|    |" << endl;
        cout << "|   / |" << endl;
        cout << "|  o  o"  << endl;
        cout << "|______" << endl;
        
    }
    return incorrect;
        
}

//2 player game function
int game()
{
    //this is the player object
    PlayerWord po;
    cout << "Player 1, choose a word: ";
    //the player chooses a word which adds to the Playerword class
    po.setWord(cin);
    //this is for the letter the second player chooses
    char letter;
    //setting a string for the player word
    string s = po.getWord();
    //this integer is for the character array for the word player 1 chose
    int n = s.length();
    //a counter for correct letters
    int correct = 0;
    //a counter for incorrect letters
    int incorrect = 0;
    //this sets the difficulty for the game.
    int difficulty = 0;
    //this character array for the word
    char char_array[n + 1];
    //this copys the string into a character array
    strcpy(char_array, s.c_str());
    string w(s.length(), '*');
    
    //the set up and design for the game
    cout << "" << endl;
    cout << "____" << endl;
    cout << "|    |" << endl;
    cout << "|    " << endl;
    cout << "|   " << endl;
    cout << "|   " << endl;
    cout << "|   " << endl;
    cout << "|" << endl;
    cout << "|______" << endl;

    cout << endl;
    
    cout << "Player 2, choose difficulty." << endl;
    cout << "Type 1 for easy or type 2 for hard: ";
    
    //prevents player from inputing wrong input
    try
    {
    cin >> difficulty;
        if (difficulty != 1 || difficulty != 2)
        {
            throw 99;
        }
    } catch (int x)
    {
        cout << "Invalid input" << endl;
        }
    
    //this is where the second player chooses words to guess the word player 1 chose
    cout << "Player 2, guess a letter of the word Player 1 chose:  ";
    for (int j = 0; j < n; j++)
    {
        cout << "The word you have is:\n\n";
        cout << w << endl;
        cout << "\nThere are " << w.length() << "letters in the word \n\n";
        //input for the letter
        cin >> letter;

        if (char_array[j] == letter)
        {
            w[j] = letter;
            cout << "Correct!" << endl;
            //counter adds to everytime word is correct by one
            correct++;
            //message appears when player wins
            if (correct >= n)
            {
                cout << "You Win!" << endl;
                cout << "The word was: " << po.getWord() << endl;
            }
        }
        else
        {
            cout << "Incorrect!" << endl;
            //to prevent the int to reaching the max
            j--;
            //counter adds to everytime word is incorrect by one
            incorrect++;
            //this directs the incorrect variable into the difficulty function
            if (difficulty == 1)
            {
            cout << hangManEasy(incorrect);
                if (incorrect == 10)
                {
                    cout << "Game Over!" << endl;
                    cout << "The word was: " << po.getWord() << endl;
                    exit(0);
                }
            }
            else if (difficulty == 2)
            {
                cout << hangManHard(incorrect);
                if (incorrect == 6)
                {
                    cout << "Game Over!" << endl;
                    cout << "The word was: " << po.getWord() << endl;
                    exit(0);
                }
                }
            }
        }
 
    return 0;
}
//one player game function
int ComputerGame()
{
    // the word the computer chooses for the player to guess
    string word;
    //array of 100 strings
    string wordList[99];
    //creates random seed - for the computer to choose a random word
    srand(time(NULL));
    //reads the word from variable
    ifstream randomWord;
    //fetches the word from the txt file
    randomWord.open("/Users/danereid/Library/Mobile Documents/com~apple~CloudDocs/Documents/School/Spring 2022/MAC 125/Project/Hangman 3/Hangman 3/Words.txt");
    //the letter the player guesses
    char letter;
    //counter for correct letters
    int correct = 0;
    //counter for incorrect letters
    int incorrect = 0;
    //this is set for the dificulty of the game
    int difficulty;
    //to prevent user from inputing wrong input
    
    for (int i = 0; i < 99; i++)
    {
        //filling array with word from the list
        randomWord >> wordList[i];
    }
    
    //returns a random number from 1 - 100
    int randomNum = rand() % 100;
    word = wordList[randomNum];
    randomWord.close();
    //makes the word a mystery to the player
    string s(word.length(), '*');
    
    //the set up and design for the game
    cout << "" << endl;
    cout << "____" << endl;
    cout << "|    |" << endl;
    cout << "|    " << endl;
    cout << "|   " << endl;
    cout << "|   " << endl;
    cout << "|   " << endl;
    cout << "|" << endl;
    cout << "|______" << endl;
    
    cout << endl;
    cout << "Choose difficulty." << endl;
    cout << "Type 1 for easy or type 2 for hard: ";
    //prevents player from inputing wrong input
    try
    {
    cin >> difficulty;
        if (difficulty != 1 || difficulty != 2)
        {
            throw 99;
        }
    }
    catch (int x)
    {
        cout << "Invalid input" << endl;
        }
    
    cout << "Guess a letter of the word the computer chose:  ";
    //to loop so the player can keep guessing
    while (incorrect >= 0)
    {
    for (int j = 0; j < s.length(); j++)
    {
        cout << "The word you have is:\n\n";
        cout << s << endl;
        cout << "\nThere are " << s.length() << "letters in the word \n\n";
        cin >> letter;
        
        if (word[j] == letter)
        {
            s[j] = letter;
            cout << "Correct!" << endl;
            correct++;
        }
        if (correct >= s.length())
        {
            cout << "You Win!" << endl;
            exit(1);
        }
        if (word[j] != letter)
        {
            cout << "Incorrect!" << endl;
            incorrect++;
            if (difficulty == 1)
            {
                cout << hangManEasy(incorrect);
                if (incorrect == 10)
                {
                    cout << "Game Over!" << endl;
                    cout << "The word was: " << word << endl;
                    exit(0);
                }
            }
            else if (difficulty == 2)
            {
                cout << hangManHard(incorrect);
                if (incorrect == 6)
                {
                    cout << "Game Over!" << endl;
                    cout << "The word was: " << word << endl;
                    exit(0);
                }
                }
            }
        }
    }
    
    
    
        
    return 0;
}
//this is the main menu function
//this is where you choose to start the game, learn the rules,
//and choose to vs a computer or another player.
int mainMenu()
{
    //for player to choose option in menu
    int menu;
    //counter for the rules. if its > 0 the menu will conintinue
    int rules = 0;
    //int for second player
    int secondPlayer;
    
    while (rules == 0)
    {
        cout << "Main Menu" << endl;
        cout << "1: Start Game." << endl;
        cout << "2: Rules." << endl;
        cin >> menu;
        if (menu == 1)
        {
            rules++;
            cout << "VS another player or computer?" << endl;
            cout << "1: Computer" << endl;
            cout << "2: Player" << endl;
            cin >> secondPlayer;
            switch (secondPlayer)
            {
                case 1:
                    ComputerGame();
                    break;
                case 2:
                    game();
                    break;
                    
            }
            
        }
        else if (menu == 2)
        {
            //rules of the game
            cout << "One player thinks of a word or phrase;";
            cout << "the others try to guess what it is one letter";
            cout << "at a time. The player draws a number of dashes";
            cout << "equivalent to the number of letters in the word.";
            cout << "If a guessing player suggests a letter that occurs";
            cout << "in the word, the other player fills in the blanks";
            cout << "with that letter in the right places." << endl;
    
        }
    }
    
    return 0;
}

//main function runs the main menu
int main()
{
    
    mainMenu();
    
    return 0;
}
/*
 char previousGuesses[9];
 previousGuesses[0] = '\0';
 
 */
/*
 unwieldy
 permit
 mouth
 umbrella
 squeal
 aromatic
 alleged
 walk
 houses
 wretched
 elated
 puzzling
 radiate
 embarrass
 plausible
 melodic
 boil
 argue
 trouble
 terrific
 murky
 yielding
 grade
 trees
 risk
 nosy
 bedroom
 well-groomed
 sugar
 vest
 beg
 book
 foot
 nondescript
 ordinary
 quill
 committee
 abashed
 eggs
 woozy
 stroke
 hospitable
 spectacular
 subsequent
 battle
 strange
 degree
 drum
 poised
 part
 rush
 confess
 grape
 spark
 friendly
 pale
 drink
 animal
 rustic
 title
 pollution
 trains
 obsequious
 dolls
 infamous
 heap
 desire
 connect
 iron
 groovy
 shut
 disagree
 glossy
 doubt
 material
 suffer
 apologise
 annoyed
 fertile
 enthusiastic
 payment
 wax
 vein
 tremble
 soothe
 book
 pine
 page
 prick
 marvelous
 boot
 narrow
 tremendous
 measure
 unwritten
 grandiose
 glow
 wound
 stingy
 end
 */
