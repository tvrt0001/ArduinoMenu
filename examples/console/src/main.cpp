/*
simple console
*/

#include <iostream>
using namespace std;

#include <menu.h>

/////////////////////////////////////////////////////////
const char* op1_text="Op 1\n";
const char* op2_text="Op ...\n";
const char* op3_text="Op 3\n";
const char* mainMenu_title="Main menu\n";

using Op1=ItemNav<
  StaticItem<
    StaticText<&op1_text>
  >
>;

Op1 op1;
StaticNav<Op1> nav;
StdOut<> out;

StaticText<
  &mainMenu_title,
  StaticMenu<
    Item<StaticText<&op1_text>>,
    Item<StaticText<&op2_text>>,
    Item<StaticText<&op3_text>>
  >
> mainMenu;

//-----------------------
int main() {
  cout<<"PIO Native program"<<endl;
  op1.printMenu(out);
  nav.printMenu(out);
  return 0;
}
