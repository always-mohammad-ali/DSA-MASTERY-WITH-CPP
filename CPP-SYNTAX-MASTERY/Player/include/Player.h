#ifndef PLAYER_H
#define PLAYER_H
#include <iostream>
#include <string>
using namespace std;


class Player
{
    public:
        Player();
        Player(string n, int j, int m);

        void displayInfo();

        void setName(string n);
        void setJerseyNumber(int j);
        void setMatchPlayed(int m);

        string getName();
        int getJerseyNumber();
        int getMatchPlayed();

        virtual ~Player();

    protected:

    private:

    string name;
    int jerseyNumber;
    int matchPlayed;

};

#endif // PLAYER_H
