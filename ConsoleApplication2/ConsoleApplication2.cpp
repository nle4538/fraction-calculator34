// ConsoleApplication2.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//

#include <iostream>

using namespace std;

class Fraction {
public:
    int numerator1; //числитель
    int denominator1; //знаменатель
    int numerator2;
    int denominator2;
public:
    Fraction() {
        numerator1 = 1;
        denominator1 = 1;
        numerator2 = 1;
        denominator2 = 1;
    }
    Fraction(int a1, int b1, int a2, int b2) {
        numerator1 = a1;
        denominator1 = b1;
        numerator2 = a2;
        denominator2 = b2;
    }
    Fraction(const Fraction& obj) {
        numerator1 = obj.numerator1;
        denominator1 = obj.denominator1;
        numerator2 = obj.numerator2;
        denominator2 = obj.denominator2;
    }
    Fraction(int a1, int b1) {
        numerator1 = a1;
        denominator1 = 1;
        numerator2 = 1;
        denominator2 = 1;
    }

    void sum() const { //сложение
        if (denominator1 == denominator2) {
            int sum_denominator1 = numerator1 + numerator2;
            int sum_numerator = denominator1;
            cout << "        " << numerator1 << "   " << numerator2 << "    " << sum_denominator1 << endl;
            cout << "Ответ: " << "--" << " + " << "--" << " = " << "--" << endl;
            cout << "        " << denominator1 << "   " << denominator2 << "    " << sum_numerator << endl;
        }
        else {
            int result_numerator = numerator1 * denominator2 + numerator2 * denominator1;
            int result_denominator = denominator1 * denominator2;
            int otv_numerator = 0;
            int otv_denominator = 0;

            if (result_denominator < result_numerator) {
                for (int i = result_numerator; i >= 1; i--) {
                    if (result_numerator % i == 0 && result_denominator % i == 0) {
                        otv_numerator =  result_numerator / i ;
                        otv_denominator = result_denominator / i;
                    }
                }
            }

            if (result_numerator > result_denominator) {
                for (int i = 1; i < result_numerator; i++) {
                    if (result_numerator % i == 0 && result_denominator % i == 0) {
                        otv_numerator = result_numerator / i;
                        otv_denominator = result_denominator / i;
                    }
                }
            }
            if (otv_numerator > 0 && otv_denominator > 0) {
                cout << "        " << numerator1 << "   " << numerator2 << "    " << result_numerator << "   " << otv_numerator << endl;
                cout << "Ответ: " << "--" << " + " << "--" << " = " << "--" << " = " << "--" << endl;
                cout << "        " << denominator1 << "   " << denominator2 << "    " << result_denominator << "   " << otv_denominator << endl;
            }
            else {
                cout << "        " << numerator1 << "   " << numerator2 << "    " << result_numerator << "   "  << endl;
                cout << "Ответ: " << "--" << " + " << "--" << " = " << "--" << endl;
                cout << "        " << denominator1 << "   " << denominator2 << "    " << result_denominator << "   " << endl;
            }
        }
    }

    void subtraction() const { //вычитание
        if (denominator1 == denominator2) {
            int result_numerator = numerator1 - numerator2;
            cout << "        " << numerator1 << "   " << numerator2 << "    " << result_numerator << endl;
            cout << "Ответ: " << "--" << " - " << "--" << " = " << "--" << endl;
            cout << "        " << denominator1 << "   " << denominator2 << "    " << denominator1 << endl;
        }
        else {
            int result_numerator = numerator1 * denominator2 - numerator2 * denominator1;
            int result_denominator = denominator1 * denominator2;

            int otv_numerator = 0;
            int otv_denominator = 0;

            if (result_denominator < result_numerator) {
                for (int i = result_numerator; i >= 1; i--) {
                    if (result_numerator % i == 0 && result_denominator % i == 0) {
                        otv_numerator = result_numerator / i;
                        otv_denominator = result_denominator / i;
                    }
                }
            }

            if (result_numerator > result_denominator) {
                for (int i = 1; i < result_numerator; i++) {
                    if (result_numerator % i == 0 && result_denominator % i == 0) {
                        otv_numerator = result_numerator / i;
                        otv_denominator = result_denominator / i;
                    }
                }
            }
            if (otv_numerator > 0 && otv_denominator > 0) {
                cout << "        " << numerator1 << "   " << numerator2 << "    " << result_numerator << "   " << otv_numerator << endl;
                cout << "Ответ: " << "--" << " - " << "--" << " = " << "--" << " = " << "--" << endl;
                cout << "        " << denominator1 << "   " << denominator2 << "    " << result_denominator << "   " << otv_denominator << endl;
            }
            else {
                cout << "        " << numerator1 << "   " << numerator2 << "    " << result_numerator << "   " << endl;
                cout << "Ответ: " << "--" << " - " << "--" << " = " << "--" << endl;
                cout << "        " << denominator1 << "   " << denominator2 << "    " << result_denominator << "   " << endl;
            }
        }
    }
    void multiplication() const { //умножение
        int result_numerator = numerator1 * numerator2;
        int result_denominator = denominator1 * denominator2;
        int otv_numerator = 0;
        int otv_denominator = 0;

        if (result_denominator < result_numerator) {
            for (int i = result_numerator; i >= 1; i--) {
                if (result_numerator % i == 0 && result_denominator % i == 0) {
                    otv_numerator = result_numerator / i;
                    otv_denominator = result_denominator / i;
                }
            }
        }

        if (result_numerator > result_denominator) {
            for (int i = 1; i < result_numerator; i++) {
                if (result_numerator % i == 0 && result_denominator % i == 0) {
                    otv_numerator = result_numerator / i;
                    otv_denominator = result_denominator / i;
                }
            }
        }
        if (otv_numerator > 0 && otv_denominator > 0) {
            cout << "        " << numerator1 << "   " << numerator2 << "    " << result_numerator << "   " << otv_numerator << endl;
            cout << "Ответ: " << "--" << " * " << "--" << " = " << "--" << " = " << "--" << endl;
            cout << "        " << denominator1 << "   " << denominator2 << "    " << result_denominator << "   " << otv_denominator << endl;
        }
        else {
            cout << "        " << numerator1 << "   " << numerator2 << "    " << result_numerator << "   " << endl;
            cout << "Ответ: " << "--" << " * " << "--" << " = " << "--" << endl;
            cout << "        " << denominator1 << "   " << denominator2 << "    " << result_denominator << "   " << endl;
        }
    }

    void division() const { //деление
        int result_numerator = numerator1 * denominator2;
        int result_denominator = numerator2 * denominator1;
        int otv_numerator = 0;
        int otv_denominator = 0;

        if (result_denominator < result_numerator) {
            for (int i = result_numerator; i >= 1; i--) {
                if (result_numerator % i == 0 && result_denominator % i == 0) {
                    otv_numerator = result_numerator / i;
                    otv_denominator = result_denominator / i;                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                            
                }
            }
        }

        if (result_numerator > result_denominator) {
            for (int i = 1; i < result_numerator; i++) {
                if (result_numerator % i == 0 && result_denominator % i == 0) {
                    otv_numerator = result_numerator / i;
                    otv_denominator = result_denominator / i;
                }
            }
        }
        if (otv_numerator > 0 && otv_denominator > 0) {
            cout << "        " << numerator1 << "   " << numerator2 << "    " << result_numerator << "   " << otv_numerator << endl;
            cout << "Ответ: " << "--" << " / " << "--" << " = " << "--" << " = " << "--" << endl;
            cout << "        " << denominator1 << "   " << denominator2 << "    " << result_denominator << "   " << otv_denominator << endl;
        }
        else {
            cout << "        " << numerator1 << "   " << numerator2 << "    " << result_numerator << "   " << endl;
            cout << "Ответ: " << "--" << " / " << "--" << " = " << "--" << endl;
            cout << "        " << denominator1 << "   " << denominator2 << "    " << result_denominator << "   " << endl;
        }
    }

    void sravnenie() const { //сравнение

        if (numerator2 == numerator1 && denominator2 == denominator1) {
            cout << "Дроби равны" << endl;
        }
        if (numerator1 < numerator2 && denominator1 < denominator2)
        {
            cout << "               " << numerator1 << endl;
            cout << "Самая большая: " << "--" << endl;
            cout << "               " << denominator1 << endl;
        }
        if (numerator2 < numerator1 && denominator2 < denominator1)
        {
            cout << "               " << numerator2 << endl;
            cout << "Самая большая: " << "--" << endl;
            cout << "               " << denominator2 << endl;
        }
        if (numerator1 <= numerator2 && denominator1 < denominator2) {
            cout << "               " << numerator1 << endl;
            cout << "Самая большая: " << "--" << endl;
            cout << "               " << denominator1 << endl;
        }
        if (numerator2 <= numerator1 && denominator2 < denominator1) {
            cout << "               " << numerator2 << endl;
            cout << "Самая большая: " << "--" << endl;
            cout << "               " << denominator2 << endl;
        }
    }

    ~Fraction()
    {
        cout << "Деструктор сработал" << endl;
    }

};

int main()
{
    setlocale(LC_ALL, "RU");
    int a1;
    int b1;
    int a2;
    int b2;
    int ariv;
    int drop;
    cout << "Заполните значения первой дроби" << endl;
    cout << "Введите числитель: " << endl;
    cin >> a1;
    cout << "Введите знаметаль: " << endl;
    cin >> b1;
    switch (b1)
    {
    case 0:
        cout << "ВНИМАНИЕ знаметаль равен 0, будет о" << endl;
        break;
    }
    cout << "Вторая дробь, выберите:\n" << "1 - Копирование из первой дроби\n" << "2 - Ввести самому" << endl;
    cin >> drop;
    switch (drop) {
    case 1:
        a2 = a1;
        b2 = b1;
        break;
    case 2:
        cout << "Введите числитель: " << endl;
        cin >> a2;
        cout << "Введите знаметаль: " << endl;
        cin >> b2;
        break;
    default:
        cout << "нет значения такого" << endl;
        break;
    }
    Fraction fr(a1, b1, a2, b2);
    cout << "Введите ариф. операцию:\n" << "1 - Сложение\n" << "2 - Вычитание \n" << "3 - Умножение \n" << "4 - Деление\n" << "5 - Сравнение" << endl;
    cin >> ariv;
    switch (ariv)
    {
    case 1:
        fr.sum();
        break;
    case 2:
        fr.subtraction();
        break;
    case 3:
        fr.multiplication();
        break;
    case 4:
        fr.division();
        break;
    case 5:
        fr.sravnenie();
        break;
    default:
        cout << "нету такого выражения" << endl;
        break;
    }
}



//int main() {
//    setlocale(LC_ALL, "RU");
//    cout << "       " << "1" << "   " << "1" << "    " << "7" << endl;
//    cout << "Ответ: " <<"-" << " + " << "-" << " = " << "--" << endl;
//    cout << "       " << "4" << "   " << "4" << "   " << "12" << endl;
//}

