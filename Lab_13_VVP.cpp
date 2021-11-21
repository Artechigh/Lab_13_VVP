
#include <iostream>
using namespace std;
int main()
{

    setlocale(LC_ALL, "Russian");
    std::cout << "Hello World!\n";

    cout << "Задание 1\n";
    cout << "Дано вещественное число — цена 1 кг конфет.\nВывести стоимость 0.1, 0.2, . . . , 1 кг конфет.\n";
    cout << "цена 1 кг конфет = ";
    double x;
    cin >> x;
    x = x / 10;
    cout << "стоимость 0.1 кг = " << x << "\n";
    cout << "стоимость 0.2 кг = " << x * 2 << "\n";
    cout << "стоимость 0.3 кг = " << x * 3 << "\n";
    cout << "стоимость 0.4 кг = " << x * 4 << "\n";
    cout << "стоимость 0.5 кг = " << x * 5 << "\n";
    cout << "стоимость 0.6 кг = " << x * 6 << "\n";
    cout << "стоимость 0.7 кг = " << x * 7 << "\n";
    cout << "стоимость 0.8 кг = " << x * 8 << "\n";
    cout << "стоимость 0.9 кг = " << x * 9 << "\n";

    cout << "Задание 2\n";
    cout << "Дано целое число N (> 0).\nНайти произведение 1.1 · 1.2 · 1.3 · . . . (N сомножителей).\n";
    cout << "N = ";
    int n;
    cin >> n;
    double mult, number;
    number = 1.1;
    mult = 1;
    while (n > 0)
    {
        mult = mult * number;
        number = number + 0.1;
        n--;
    }
    cout << "Ответ: ";
    cout << mult << "\n";

    cout << "Задание 3\n";
    cout << "Дано целое число N (> 0). Найти квадрат данного числа, используя для его вычисления следующую формулу:\nN2 = 1 + 3 + 5 + . . . + (2·N − 1).\nПосле добавления к сумме каждого слагаемого выводить текущее значение суммы\n";
    cout << "N = ";
    int n1, sum, k;
    sum = 0;
    k = 1;
    cin >> n1;
    while (k <= 2 * n1 - 1)
    {
        sum = sum + k;
        cout << "sum = " << sum << "\n";
        k = k + 2;

    }
    cout << "Ответ: ";
    cout << sum << "\n";

    cout << "Задание 4\n";
    cout << "Дано вещественное число A и целое число N (> 0).\nИспользуя один цикл, найти сумму 1 + A + A2 + A3 + . . . + AN\n";
    cout << "A = ";
    double a, sum2;
    cin >> a;
    cout << "N = ";
    int n2;
    cin >> n2;

    sum2 = 1;
    while (n2 > 0)
    {
        sum2 = sum2 + a * n2;
        n2--;
    }
    cout << "Ответ: ";
    cout << sum2 << "\n";

    cout << "Задание 5\n";
    cout << "Дано вещественное число A и целое число N (> 0).\nИспользуя один цикл, найти значение выражения\n1 - A + A2 - A3 + . . . +- AN . Условный оператор не использовать.\n";
    cout << "A = ";
    double a3, sum3;
    cin >> a3;
    cout << "N = ";
    int n3,nhelp,nstep=1;
    cin >> n3;
    nhelp = -1;
    sum3 = 1;
    while (nstep<=n3)
    {
        sum3 = sum3 + a3 * nstep * nhelp;
        nstep++;
        nhelp = -nhelp;
    }
    cout << "Ответ: ";
    cout << sum3 << "\n";
}
