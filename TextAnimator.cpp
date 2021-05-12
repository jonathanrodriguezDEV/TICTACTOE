///////////////////////////////////////////////////////////////////////////////
/// @author Jonathan Rodriguez
/// @date 26 February 2019
/// @brief File contains implementation for TextAnimator.h functions.
///
///////////////////////////////////////////////////////////////////////////////

#include "TextAnimator.h"
#include <iostream>
#include <thread>        
#include <chrono>

///////////////////////////////////////////////////////////////////////////////
/// @brief Animated Text Printing (Slow)
/// @param _text String to print with animation.
///
void TextAnimator::slowPrint(const char* _text) {
  // Iterate through every char in the string, printing them out one at a time.
	for (int i = 0; i < strlen(_text); ++i) {
		std::cout << _text[i] << std::flush;
		std::this_thread::sleep_for(std::chrono::milliseconds(SLOW_RATE));
		
	}
}

///////////////////////////////////////////////////////////////////////////////
/// @brief Animated Text Printing (Title)
/// @param _text String to print as the title of the game.
///
void TextAnimator::titlePrint(const char* _text) {
	// Make * be the first and last char printed out as part of the title.
	char text[1000];
	strcat(text, "*");
	strcat(text, _text);
	strcat(text, "*");
	std::cout << std::endl;
	// Iterate through every char in the string, printing them out one at a time.
	for (int i = 0; i < strlen(text); ++i) {
		std::cout << "******************* " << text[i] << " *******************"
			<< std::endl;
		std::this_thread::sleep_for(std::chrono::milliseconds(TITLE_RATE));
		
	}
	std::cout << std::endl;
}