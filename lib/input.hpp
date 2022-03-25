#pragma once

#include <iostream>
#include <utility>

class Input {
  public:
    static void greetAction(std::ostream &outStream);
    static char getAction(std::istream &inStream, std::ostream &outStream,
                          std::ostream &errStream);
    static void greetPosition(std::ostream &outStream);
    static std::pair<int, int> getPosition(std::istream &inStream,
                                           std::ostream &outStream,
                                           std::ostream &errStream);
};
