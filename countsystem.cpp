#include "countsystem.h"

CountSystem::CountSystem()
{

}

CountSystem::CountSystem(QString Line, int Sys1, int Sys2)
{
    this->line = Line;
    this->sys1 = Sys1;
    this->sys2 = Sys2;
}

// Метод для преобразования значений СС > 10
// из буквенных в целочисленные

int CountSystem::Convert_to_Int(char c){
    int nc;
    switch(c){
        case 'A':
            return 10;
        case 'B':
            return 11;
        case 'C':
            return 12;
        case 'D':
            return 13;
        case 'E':
            return 14;
        case 'F':
            return 15;
    default:
        nc = c;
        return nc - 48;

    }
}

// Метод для преобращования значений СС > 10
// из целочисленных в буквенные

QChar CountSystem::Convert_to_Char(int c){
    switch(c){
    case 10:
        return 'A';
    case 11:
        return 'B';
    case 12:
        return 'C';
    case 13:
        return 'D';
    case 14:
        return 'E';
    case 15:
        return 'F';
    default:
        return QString::number(c).at(0);
    }
}

// Перевод из заданной СС в 10-ную. Каждый элемент
// введённой строки умножаем на заданную СС в степени,
// равной индексу этого элемента и прибавляем полученный
// результат к переменной curr.

int CountSystem::fromQto10(QString q, int q_system){
    int curr = 0;
    int n = q.length();
    for(int i = 0; i < n; i++){
        curr += Convert_to_Int(q.at(i).toLatin1()) *
                pow(q_system, n - i - 1);
        qDebug() << curr;
    }
    return curr;
}

// Перевод из 10-ной СС в указанную пользователем.
// Пока целое число в 10-ной СС не станет равно нулю,
// в конец строки curr дописываем результат остаточного
// деления исходного числа на СС q_system и делим нацело
// наше исходной число на q_system

QString CountSystem::from10toQ(QString q, int q_system){
    int decimal = q.toInt();
    QString  curr = "";
    while(decimal != 0){
        curr = Convert_to_Char(decimal % q_system) + curr;
        decimal = decimal / q_system;
        qDebug() << curr;
        }
    return curr;
}

// Метод проверки вводимых значений. Выдаёт отрицание, если
// введённая строка не удовлетворяет указанной СС

bool CountSystem::Is_Line_Allowed(int s1, QString l1){
    for(int i=0; i<l1.length(); i++){
        if (!(Convert_to_Int(l1.at(i).toLatin1()) < s1)){
            return false;
        }
    }
    return true;
}

// Метод обработки введённых данных, в котором задействуются
// описанные выше методы

QString CountSystem::GoOn(QString myline, int q1, int q2){
    if(q1 == 10){
        return from10toQ(myline, q2);
    }
    else if(q2 == 10){
        return QString::number(fromQto10(myline, q1));
    }
    else{
        myline = QString::number(fromQto10(myline, q1));
        return from10toQ(myline, q2);
    }
}
