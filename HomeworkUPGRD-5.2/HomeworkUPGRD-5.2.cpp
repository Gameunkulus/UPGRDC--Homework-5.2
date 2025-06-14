// HomeworkUPGRD-5.2.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//

#include <iostream>
#include <set>;
#include <list>;
#include <map>;

using namespace std;

class Counter {
protected:
    string text;
    multimap< int, char, greater<int> > my_map;
    set<char> my_set1;

public:
    Counter(string text) {
        this->text = text;
        int length = text.length();
        for (int i = 0; i < length; i++) {
            my_set1.insert(text[i]);
        }
    };

    void sortByText() {


        for (auto& i : text) {
            int repeatNum = count(text.begin(), text.end(), i);
            my_map.emplace(repeatNum, i);
        };

    };

    void printList() {
        cout << "[OUT]: " << endl;
        for (auto& i : my_map)
        {
            cout << i.first << ": " << i.second << endl;
        }
    };
};

int main()
{
    std::cout << "Hello World!\n";
}

// Запуск программы: CTRL+F5 или меню "Отладка" > "Запуск без отладки"
// Отладка программы: F5 или меню "Отладка" > "Запустить отладку"

// Советы по началу работы 
//   1. В окне обозревателя решений можно добавлять файлы и управлять ими.
//   2. В окне Team Explorer можно подключиться к системе управления версиями.
//   3. В окне "Выходные данные" можно просматривать выходные данные сборки и другие сообщения.
//   4. В окне "Список ошибок" можно просматривать ошибки.
//   5. Последовательно выберите пункты меню "Проект" > "Добавить новый элемент", чтобы создать файлы кода, или "Проект" > "Добавить существующий элемент", чтобы добавить в проект существующие файлы кода.
//   6. Чтобы снова открыть этот проект позже, выберите пункты меню "Файл" > "Открыть" > "Проект" и выберите SLN-файл.
