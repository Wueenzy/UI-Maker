#include "Class/uimaker.hpp"
using namespace std;

UIMaker uimaker;

int main() {

    uimaker.editTable(10,5);
    uimaker.makeTable("1", 20);
    uimaker.makeTable("2", 15);
    uimaker.makeTable("3");
    uimaker.makeTable("4");
    uimaker.tableEndl();
    uimaker.makeTable("5", 20);
    uimaker.makeTable("6",15);
    uimaker.makeTable("7");
    uimaker.makeTable("8");
    uimaker.makeTable("9");
    uimaker.tableEndl();
    uimaker.makeTable("10", 20);
    uimaker.makeTable("11",15);
    uimaker.makeTable("12");
    uimaker.makeTable("13");
    uimaker.makeTable("14");
    uimaker.makeTable("15");
    uimaker.tableEndl(true);

    cout << endl << endl << endl;

    uimaker.editTable(15,5);
    uimaker.makeTable("1", 20);
    uimaker.makeTable("2", 15);
    uimaker.makeTable("3");
    uimaker.makeTable("4");
    uimaker.tableEndl();
    uimaker.makeTable("5", 20);
    uimaker.makeTable("6",15);
    uimaker.makeTable("7");
    uimaker.makeTable("8");
    uimaker.makeTable("9");
    uimaker.tableEndl();
    uimaker.makeTable("10", 20);
    uimaker.makeTable("11",15);
    uimaker.makeTable("12");
    uimaker.makeTable("13");
    uimaker.makeTable("14");
    uimaker.makeTable("15");
    uimaker.tableEndl();
    return 0;
}