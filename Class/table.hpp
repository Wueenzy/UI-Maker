#ifndef TABLE_HPP
#define TABLE_HPP
#include "argparse.hpp"
using namespace std;

class Table {
private:
    int count;
    int beforeSize;
    vector<string> tables;
    vector<int> tWidth;
    int width = 10, height = 1;
    void _printRow(string, string, int);
    void _printTextRow(string, string);
public:
    Table();
    void tableSave(string, int);
    void tableEndl();
    void tableCont();
    void editTable(int, int);
};

#endif //TABLE_HPP

Table::Table() {

}

void Table::tableSave(string str, int width) {
    tables.push_back(str);
    tWidth.push_back(width);
}

void Table::_printRow(string delimiter, string fill, int size = 0) {
  count = 0;
  cout << delimiter;
  for (string str : tables) {
    for (int i = 0; i < tWidth[size]; i++) {
      count++;
      cout << fill;
    }
    cout << delimiter;
    size++;
  }
}

void Table::_printTextRow(string delimiter, string fill) {
    int size = 0;
    for (string str : tables) {
        int bufferWidth = tWidth[size] - str.length();
        cout << delimiter;
        for (int j = 0; j < (int)bufferWidth/2; j++) {
            cout << fill;
        }
        cout << str;
        for (int j = 0; j < bufferWidth - (int)bufferWidth/2; j++) {
            cout << fill;
        }
        size++;
    }
    cout << delimiter;
}

void Table::tableEndl() {
    int size = 0;
    _printRow("+", "-");
    cout << endl;
    for (int i = 0; i < height; i++) {
        if (i == (int)height/2) {
            _printTextRow("|", " ");
            cout << endl;
        }else {
            _printRow("|", " ");
            cout << endl;
        }
    }
    _printRow("+", "-");
    beforeSize = tWidth.size();
    tables.clear();
    tWidth.clear();
}

void Table::tableCont() {
    int contCount = 0;
    int size = 0;
    for (string str : tables) {
        contCount += tWidth[size];
        size++;
    }
    if (count < contCount) {
        size = tWidth.size() - beforeSize;
        for (int i = 0; i < contCount-count; i++) {
            if (i % tWidth[size] == 0 && i != 0) {
                cout << '+';
                size++;
            }
            cout << '-';
        }
        cout << "+";
        cout << endl;
        count = contCount;
    }else {
        cout << endl;
    }

    for (int i = 0; i < height; i++) {
        if (i == (int)height/2) {
            _printTextRow("|", " ");
            cout << endl;
        }else {
            _printRow("|", " ");
            cout << endl;
        }
    }
    _printRow("+", "-");
    beforeSize = tWidth.size();
    tables.clear();
    tWidth.clear();
}

void Table::editTable(int width, int height) {
    this->width = width;
    this->height = height;
}
