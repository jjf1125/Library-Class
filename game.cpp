#include <iostream>
#include <iomanip>
#include <istream>
#include <math.h>
#include <assert.h>
#include <string>
#include <algorithm>
#include <fstream>
#include <cctype>
#include <vector>
using namespace std;
#ifndef PLAYER_H
#define PLAYER_H
#ifndef TEAM_H
#define TEAM_H

class Player
{
    private:
        string name;
        double points;
    public:
        Player();
        Player(string, double);
        string getName();
        double getPoints();
        void setName(string);
        void setPoints(double);
};
#endif

Player::Player()
{
    name = "";
    points = 0.0;
}
Player::Player(string inputName, double inputPoints)
{
    name = inputName;
    points = inputPoints;
}
string Player::getName()
{
    return name;
}
double Player::getPoints()
{
    return points;
}
void Player::setName(string newName)
{
    name = newName;
}
void Player::setPoints(double newPoints)
{
    points = newPoints;
}

class Team
{
    private:
        string teamName;
        vector<Player> players;
    public:
        Team();
        Team(string);
        void setTeamName(string);
        void readRoster(string);
        string getPlayerName(int);
        double getPlayerPoints(int);
        int getNumPlayers();
        string getTeamName();
};
#endif

int split(string s, char d, string arr[], int len)
{
    int count = 0;
    string word;
    if(s == "")//If string is blank, returns 0
    {
        return 0;
    }
    else
    {
        s = s + d;
        if(s[0] == d)//IF string at 0 equiv to determinator, sets the string to substring 
        {
            s = s.substr(1, s.length()-2);
        }
        for(int x = 0; x < s.length(); x++)//x increases every time it loops
        {
            if(s[x] == d && s[x + 1] == d)//If string at x and x + 1 equiv to deter, adds 1 to x
            {
                x++;
            }
            if(s[x] == d && word != "")//When string at x is equiv to determinator and word is blank
            {
                arr[count] = word;//Sets array at count to the word
                count++;//Adds 1 to count
                word = "";//Sets word to blank
            }
            else
            {
                word = word + s[x];
            }
        }
        if(count > len)//If count greater than the length, sets count to -1
        {
            count = -1;
        }
        return count;
    }
}

Team::Team()
{
        teamName = "";
        players;
}
Team::Team(string nameTeam)
{
        teamName = nameTeam;
        players;
}
void Team::setTeamName(string nameTeam)
{
        teamName = nameTeam;
}
void Team::readRoster(string fileName)
{
        string temp = "";
        ifstream text;
        text.open(fileName);
        while(getline(text, temp))
        {
                if(temp != "")
                {
                        string tempArr[2];
                        double tempPoints;
                        string tempName;
                        split(temp, ',', tempArr, 2);
                        tempName = tempArr[0];
                        tempPoints = stod(tempArr[1]);
                        Player x = Player(tempName, tempPoints);
                        players.push_back(x);
                }
        }
}
string Team::getPlayerName(int x)
{
        if(x > players.size() || x < 0)
        {
                cout << "ERROR" << endl;
        }
        else
        {
                return players[x].getName();
        }
}
double Team::getPlayerPoints(int p)
{
        if(p >= players.size() || p < 0)
        {
                return -1;
        }
        else
        {
                return players[p].getPoints();
        }
}
int Team::getNumPlayers()
{
        return players.size();
}
string Team::getTeamName()
{
        return teamName;
}

string game(Team team1, Team team2)
{
    string winner = "";
    double pointTeam1;
    double pointTeam2;
    if(team1.getNumPlayers() < 4 || team2.getNumPlayers() < 4)
    {
        winner = "forfeit";
    }
    else
    {
        for(int x = 0; x < 4; x++)
        {
            pointTeam1 = pointTeam1 + team1.getPlayerPoints(x);
            pointTeam2 = pointTeam2 + team2.getPlayerPoints(x);
        }
        if(pointTeam1 == pointTeam2)
        {
            winner = "draw";
        }
        else
        {
            if(pointTeam1 > pointTeam2)
            {
                winner = team1.getTeamName();
            }
            else
            {
                winner = team2.getTeamName();
            }
        }
    }
    return winner;
}

int main()
{
    Team team1("Seg Faultline");
    team1.readRoster("roster1.txt");
    Team team2("Team Maim");
    team2.readRoster("roster2.txt");
    string winner = game(team1, team2);
    cout << "The winner is: " << winner << endl;
}