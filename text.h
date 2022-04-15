#ifndef TEXT_H
#define TEXT_H

#include <string>
using std::string;

struct Text{
    static string currentRoom(string& description);



};

namespace text{
const static string welcome = "Welcome to Escape\n"
                              "There is a robber in the house!\n"
                              "You have to leave the house but the door is locked.\n"
                              "Find the key and avoid the robber!";

const string a = "You are in the hall.";

const string d = "You escaped the house! Run!\n";

const string f = "You have entered the living room.";

const string h = "You have entered the toilet.\n"
                 "The robber sees you!";

const string g = "You have entered the bedroom.\n"
                 "You found the key!\n"
                 "Make your way to the front door!";

const static string Map = "[Toilet] --- [Living Room] --- [Bedroom]\n"
                          "                  |                     \n"
                          "                  |                     \n"
                          "                [Hall]                  \n"
                          "                  |                     \n"
                          "                  |                     \n"
                          "             [Front Door]               \n";
}
#endif // TEXT_H
