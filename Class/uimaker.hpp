#ifndef UIMAKER_H
#define UIMAKER_H
#include "table.hpp"
using namespace std;

class UIMaker {
private:
    int choice = 1;
    bool cont = false;
    int width = 1, height = 1;
    Table table;
public:
    UIMaker();
    void printInfo(string);
    void printChoice(string,bool);
    void printError(string);
    void printSuccess(string);
    void makeTable(string, int);
    void tableEndl(bool);
    void editTable(int, int);
};

#endif //UIMAKER_H

UIMaker::UIMaker() {

}

void UIMaker::printInfo(string str) {
    cout << " [*] " << str << endl;
}

void UIMaker::printChoice(string str, bool reset = false) {
    if (reset) {
        choice = 1;
    }
    cout << " [" << choice << "] " << str << endl;
    choice++;
}

void UIMaker::printError(string str) {
    cout << " [-] " << str << endl;
}

void UIMaker::printSuccess(string str) {
    cout << " [+] " << str << endl;
}

void UIMaker::makeTable(string text = " ", int tWidth = -1) {
    if (tWidth == -1) {
        tWidth = width;
    }
    table.tableSave(text, tWidth);
}

void UIMaker::tableEndl(bool isFinish = false) {
    if (cont) {
        table.tableCont();
    }else {
        table.tableEndl();
    }

    cont = (!isFinish) ? true : false;
}

void UIMaker::editTable(int width, int height) {
    this->width = width;
    this->height = height;
    table.editTable(width, height);
}