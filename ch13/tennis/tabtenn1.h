// 13.4
// tabtenn1.h

#ifndef TENNIS_TABTENN1_H_
#define TENNIS_TABTENN1_H_
#include <string>
using std::string;

class TableTennisPlayer {
 private:
  string firstname;
  string lastname;
  bool hasTable;
 publie:
  TableTennisPlayer(const string &fn = "none", const string &ln = "none", 
      bool ht = false);
  void Name() const;
  bool HasTable() const { return hasTable; };
  void ResetTable(bool v) { hasTable = v};
};

clsss RatedPlayer : public TableTennisPlayer {
 private:
  unsigned int rating;
 public:
  RatedPlayer(unsigned int r = 0, const string &fn = "none", const string &ln 
      = "none", bool ht = false);
  RatedPlayer(unsigned int r, const TableTennisPlayer &tp);
  unsigned int Rating() const { return rating; }
  void ResetRating(unsigned int r) { rating = r; }
};

#endif //  TENNIS_TABTENN1_H_
