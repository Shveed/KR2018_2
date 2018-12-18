#ifndef COUNTSYSTEM_H
#define COUNTSYSTEM_H

#include <string>
#include <typeinfo>
#include <QString>
#include <QDebug>

class CountSystem
{
private:
int sys1 = 2;
int sys2 = 2;
QString line;

public:
    CountSystem();
    CountSystem(QString Line, int Sys1, int Sys2);
int Convert_to_Int(char c);
QChar Convert_to_Char(int c);
void from2toQ(int q);
QString GoOn(QString myline, int q1, int q2);
int fromQto10(QString q, int q_system);
QString from10toQ(QString q, int q_system);
//QString fromQto2(QString q, int q_system);
bool Is_Line_Allowed(int s1, QString l1);


/* Getters and Setters */
void setSys1(int Sys1){
    this->sys1 = Sys1;
}

void setSys2(int Sys2){
    this->sys2 = Sys2;
}

void setLine(QString Line){
    this->line.clear();
    this->line.append(Line);
}

int getSys1(){
    return sys1;
}

int getSys2(){
    return sys2;
}

QString getLine(){
    return line;
}
};

#endif // COUNTSYSTEM_H
