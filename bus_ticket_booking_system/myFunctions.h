#ifndef MYFUNCTION_H
#define MYFUNCTION_H

#include <string>
using namespace std;

bool isValidName(string str);
bool isReg(string str, string (&refToSubs)[], int size);
bool isReg(string str, string (&refToSubs)[], int size, int &refToIndex);
void giveID(int index, int (&refToIDs)[]);
bool checkUserID(int (&refToIDs)[], int index, int givenID);
void addUserToSystem(string str, string (&refToSubs)[], int (&refToIDs)[], int size);

#endif
