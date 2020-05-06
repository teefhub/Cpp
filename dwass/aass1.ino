/*initialise the inputs by
assigning buttons as according to the pins which they are connected. 
*/
int ledpin1 = 1;                     // pin of led define here
int ledbutton1 = 2;                     // pin of ledbutton define here
int ledpin2 = 3;                     // pin of led define here
int ledbutton2 = 4;                     // pin of ledbutton define here
int ledpin3 = 5;                     // pin of led define here
int ledbutton3 = 6;                     // pin of ledbutton define here
int ledpin4 = 7;                     // pin of led define here
int ledbutton4 = 8;                     // pin of ledbutton define here
int ledpin5 = 9;                     // pin of led define here
int ledbutton5 = 10;                     // pin of ledbutton define here
int ledpin6 = 11;                     // pin of led define here
int ledbutton6 = 12;                     // pin of ledbutton define here
int score = 0;
int startTimer = 5000;                  //in miliseconds, giving the user 5 seconds to remember before the lights switch off.
int LEDScreen;


// setting what our inputs and outputs are for the game
    void setup()
    {
        pinMode(lenpin, OUTPUT);                 // set led OUTPUT
        pinMode(ledbutton, OUTPUT);                 // set ledbutton OUTPUT
    }

//initial sequence for the game before user input
void displayInitalSequence() {
    Print on LEDScreen " Press any button to start"
    if anybutton is pressed
    return displaySequence
}

//main game sequence for the game after user has provided input
void displaySequence()
{
    Print on LEDScreen "Memorise the Sequence"   /*output the sequence for the user to memorise*/
    print random LEDs in sequence
    Start timer after last LED displayed for 5000ms
    Print on LEDScreen "Repeat the sequence of the buttons shown"
    if ( buttons pressed == the exact sequence) 
    {
        Display LED's pressed in green
        Print on LEDSCreen "CORRECT"
        then increase total LEDs sequence by 1 (upto 100)       /*incrementally increase the sequence and to verify the user’s outputs as either correct or incorrect*/
        repeat displaySequence
    }
    else 
    {
        Display LED's in red
        Print on LEDScreen "INCORRECT"
        return scorecalculator
    }
}


/*calculate the scoring*/
void scorecalculator(){
    if ( buttonspressed == true)
    {
    ++score
    }
    Print on LEDScreen "Your Score is"
    return score;
}

//end sequence of the game
void displayEndSequence () {
    Print on LED Screen "Press any button to start again"
    if ( anybutton pressed == true )
    go to displaySequence
}

















