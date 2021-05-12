///////////////////////////////////////////////////////////////////////////////
/// @author Jonathan Rodriguez
/// @date 26 February 2019
/// @brief File contains definitions animated print functions.
///
///////////////////////////////////////////////////////////////////////////////

#ifndef _TEXT_ANIMATOR_H_
#define _TEXT_ANIMATOR_H_

const static int TITLE_RATE = 450;  ///< Rate for animated title in 
                                    ///< milliseconds.
const static int SLOW_RATE  = 50;   ///< Rate for animated slow print in 
                                    ///< milliseconds.

class TextAnimator {
  public:
    ///////////////////////////////////////////////////////////////////////////
    /// @brief Animated Text Printing (Title)
    /// @param _text String to print as the title of the game.
    ///
    static void slowPrint(const char* _text);
    ///////////////////////////////////////////////////////////////////////////
    /// @brief Animated Text Printing (Slow)
    /// @param _text String to print with animation.
    ///
    static void titlePrint(const char* _text);

};

#endif

