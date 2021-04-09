// FILE WHICH CONTAINS ALL THE HEADER FILES SO THERE SHOULDN'T BE ANY NEED TO WRITE HEADERS FOR EACH PIECE OF CODE OR COMMANDS.
#include "std_lib_facilities.h"


// LIST OF FUNCTIONS THAT WE WILL BE USING DURING THE WHOLE EXECUTION OF THE PROGRAM.
void Rules_Of_The_Game            ( void );
void Inital_Page_Of_The_Game      ( void );


// THE FUNCTION WHICH WILL SHOW THE RULES OF THE GAME AFTER LOGO OF THE GAME HAS BEEN COMPLETELY PROCESSED.
void Rules_Of_The_Game( void ){

// IT WILL JUST CLEAR THE SCREEN.
system( "cls" );

// RULES OF A PARTICULAR CHESS GAME. BUT SINCE THIS GAME HAS PIECES OF CHESS BUT IT IS NOT COMPLETELY A CHESS GAME. THAT'S WHY RULES TO MOVE THE PIECES ARE SAME AS WE HAVE IN CHESS.
// THAT'S WHY WE WILL FOLLOW THE MOVES OF A CHESS GAME.
cout << "\n";
cout << " ======================================================================================================================================================================"         << endl;
cout << " THESE ARE THE RULES OF A PARTICULAR CHESS GAME: "                                                                                                                <<endl << endl << endl;
cout << "   1) THIS PARTICULAR CHESSBOARD GAME IS A TWO DIMENSIONAL GAME AND HAS SIZE (2 * 3) RATHER THAN (8*8)."                                                                          <<endl;
cout << "   2) THERE ARE JUST THREE TYPES OF PIECES: KING, BISHOP AND ROOK."                                                                                                               <<endl;
cout << "   3) BUT THERE ARE TWO BISHOPS AND TWO ROOKS. ONE BISHOP AND ROOK ARE BLACK AND OTHER BISHOP AND ROOK ARE WHITE."                                                                <<endl;
cout << "   4) THERE ARE JUST SIX BOXES IN THIS GAME."                                                                                                                                     <<endl;
cout << "   5) THE FIVE BOXES ARE FILLED WITH THE PIECES OF THE CHESS. SO THERE IS ONLY ONE BOX LEFT. THAT'S WHY EACH PIECE CAN MOVE BY JUST ONE SQUARE NOT MORE THAT THAT."               <<endl;
cout << "   6) A KING CAN MOVE IN ANY DIRECTION INCLUDING UP, DOWN, RIGTH, LEFT AND DIAGONALLY UP RIGHT, UP LEFT, DOWN RIGHT AND DOWN LEFT TOO."                                           <<endl;
cout << "   7) A BISHOP CAN MOVE DIAGONNALY ONLY. WHICH MEANS IT CAN ONLY MOVE DIAGONALLY UP RIGHT, UP LEFT, DOWN RIGHT AND DOWN LEFT."                                                    <<endl;
cout << "   8) A ROOK CAN MOVE UP, DOWN, RIGHT AND LEFT AS IT MOVES IN A STRAIGHT LINE NOT DIAGONALLY. "                                                                                   <<endl;
cout << " ======================================================================================================================================================================" << endl << endl;

// IT WILL ASK PLAYER TO PRESS THE ENTER KEY SO THAT IT CAN SHOW THE OTHER RULES TOO AND AFTER THAT IT WILL CLEAR THE SCREEN.
cout << " PRESS ENTER TO SEE THE OTHER RULES........ ";
cin.ignore( numeric_limits <streamsize> :: max( ), '\n');
system( "cls" );


// THESE RULES WILL TELL PLAYER ABOUT THE MAIN FUNCTION OF THIS GAME.
cout << "\n";
cout << " ================================================================================================================================================="         << endl;
cout << " HOW WILL THIS GAME WORK: "                                                                                                                 << endl << endl << endl;
cout << " 1) WHEN A NEW PLAYER STARTS A NEW GAME IT WILL ASK ABOUT THE NUMBER OF PLAYERS."                                                                           << endl;
cout << " 2) BUT TO KEEP THE GAME SIMPLE WE HAVE LIMITIZED THE NUMBER OF PLAYERS TO THREE."                                                                          << endl;
cout << " 3) SO YOU CAN'T ENTER NUMBER OF PLAYERS TO BE MORE THAN THREE OR EQUALS TO OR EVEN LESS THAN ZERO."                                                        << endl;
cout << " 4) AFTER ENTERING NUMBER OF PLAYERS IT WILL ASK PLAYERS TO ENTER THEIR RESPECTIVE NAMES."                                                                  << endl;
cout << " 5) IF ONE PLAYER IS PLAYING THE GAME THE GAME WILL START AND WHEN IT REACHES THE END POINT."                                                               << endl;
cout << " 6) IT WILL SHOW THE PLAYER ABOUT NUMBER OF MOVES HE/SHE TOOK TO REACH THE END OF THE GAME."                                                                << endl;
cout << " 7) WHEN MULTIPLE PLAYERS ARE PLAYING THE GAME, IT WILL FIRST ASK TO ENTER NAMES OF ALL THE PLAYERS."                                                       << endl;
cout << " 8) AFTER ENTERING NAMES IT WILL START THE GAME FOR PLAYER # 1 AFTER HE/SHE REACHES THE END POINT."                                                         << endl;
cout << " 9) THE NUMBER OF MOVES WILL BE RECORDED AND THEN THE OTHER PLAYERS WILL PLAY THE GAME."                                                                    << endl;
cout << " 10) AND EVENTUALLY WHEN ALL THE PLAYERS HAVE PLAYED THE GAME. THE GAME WILL END."                                                                          << endl;
cout << " 11) AT THE END OF THE GAME IT WILL SHOW THE PLAYERS ABOUT WHO TOOK THE MINIMUN MOVES AND WHO TOOK THE MAXIMUM MOVES TO REACH THE END OF THE GAME."         << endl;
cout << " =================================================================================================================================================" << endl << endl;

// IT WILL ASK USER TO PRESS ENTER KEY SO THAT IT CAN SHOW THE FINAL RULES OF THE GAME TOO AND AFTER PLAYER PRESSES ENTER KEY IT WILL CLEAR THE SCREEN.
cout << "PRESS ENTER TO SEE HOW YOU WILL MOVE THE PIECES........ ";
cin.ignore ( numeric_limits < streamsize > :: max( ), '\n');
system( "cls" );


// THE FINAL RULES OF THE GAME ON HOW TO MOVE PIECES.
cout << "\n";
cout << " ==========================================================================================================================="          << endl;
cout << " THESE ARE THE RULES OF HOW TO MOVE THE PIECES:"                                                                       <<endl << endl  << endl;
cout << "  1) WHEN THE GAME WILL START OR AFTER ANY MOVE THERE CAN BE MAXIMUM 5 MOVES."                                                         << endl;
cout << "  2) PLAYER WILL ENTER THE NAME OF THE PIECE WHICH HE/SHE WANTS TO MOVE."                                                              << endl;
cout << "  3) PROGRAM WILL TELL THE PLAYER IF THE SPACE FOR THAT PARTICULAR PIECE IS EMPTY OR NOT."                                             << endl;
cout << "  4) IF THERE IS NO FREE SPACE AVAILABLE THE PROGRAM WILL SHOW AN ERROR AND ASK PLAYER TO ENTER THE NAME OF THE ANOTHER PIECE."        << endl;
cout << "  5) IF THERE IS A FREE SPACE IT WILL ASK PLAYER IF HE/SHE WANTS TO MOVE OR NOT."                                                      << endl;
cout << "  6) IF PLAYER WANTS TO MOVE HE/SHE WILL ENTER EITHER YES TO MOVE OR NO FOR NOT TO MOVE."                                              << endl;
cout << "  7) AFTER IT HAS BEEN MOVED IT WILL ASK IF HE/SHE WANTS TO UNDO THE MOVE OR NOT."                                                     << endl;
cout << "  8) IF THE PLAYER PRESSES YES IT WILL UNDO THE MOVE EITHER IT WILL NOT."                                                              << endl;
cout << "  9) THEN IT WILL ASK FOR THE OTHER MOVE OR OTHER PIECE TO MOVE."                                                                      << endl;
cout << " ============================================================================================================================" << endl << endl;

// IT WILL ASK USER TO PRESS ENTER KEY AFTER THAT IT WILL CLEAR THE SCREEN ANF WILL MOVE TO THE INITAL PAGE OF THE GAME. WHERE IT WILL ASK FOR THE POSSIBLE OPTIONS.
cout << "PRESS ENTER TO MOVE TO THE INITAL PAGE OF THE GAME........ ";
cin.ignore ( numeric_limits < streamsize > :: max( ), '\n');
system( "cls" );

// CALLING THE INITAL PAGE OF THE GAME.
Inital_Page_Of_The_Game( );
}