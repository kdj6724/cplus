// 13.2
// tabtenn0.cpp
#include <iostream>
#include "tabtenn0.h"

TableTennisPlayer::TableTennisPlayer (const string &fn, const string &ln, bool ht)
                                    : firstname(fn), lastname(ln), hasTable(ht) {
}

void TableTennisPlayer::Name() const {
  std::cout << lastname << ", " << firstname;
}
