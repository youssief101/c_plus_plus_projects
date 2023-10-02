#include "myFunctions.h"

// check if a given name is a full name 
bool isValidName(string str) {
  int space_ctr = 0;    // counter of spaces in a given name
  
  for (auto c : str)
    if (isspace(c))
      ++space_ctr;

  return space_ctr >= 2;
}

// check if a name is already registered in the system 
bool isReg(string str, string (&refToSubs)[], int size) {
  for (int i = 0; i < size; ++i)
    if (str == refToSubs[i])
      return true;
  
  return false;
}

// check if a name is already registered in the system, and update the user index value
bool isReg(string str, string (&refToSubs)[], int size, int &refToIndex) {
  for (int i = 0; i < size; ++i)
    if (str == refToSubs[i]) {
      refToIndex = i;
      return true;
    }
  return false;
}

// give a unique id for the user
void giveID(int index, int (&refToIDs)[]) {
  static int idValue = 0;
  refToIDs[index] = ++idValue;
}

// check if user id is equivalent to the user names
bool checkUserID(int (&refToIDs)[], int index, int givenID) {
  return givenID == refToIDs[index];
}

// add the given user to the system
void addUserToSystem(string str, string (&refToSubs)[], int (&refToIDs2)[], int size) {
  for (int i = 0; i < size; ++i) {
    if (refToSubs[i].empty()) {
      refToSubs[i] = str;
      giveID(i, refToIDs2);
      return;
    }
  }
}
