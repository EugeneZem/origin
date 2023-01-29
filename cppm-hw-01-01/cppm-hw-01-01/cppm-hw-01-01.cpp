// cppm-hw-01-01.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//

#include <iostream>
#include <fstream>

int* create_array(int n) {
    int* arr = new int[n]();
    return arr;
}

int main() {
    setlocale(LC_ALL, "Russian");

    std::ifstream fin;
    fin.open("in.txt");

    if (!fin.is_open()) {
        std::cout << "Файл in.txt не найден." << std::endl;
        return 1;
    }

    int a;
    fin >> a;
    int* arr1 = create_array(a);
    for (int i = 0; i < a; i++) {
        fin >> arr1[i];
    }

    int b;
    fin >> b;
    int* arr2 = create_array(b);
    for (int i = 0; i < b; i++) {
        fin >> arr2[i];
    }

    fin.close();

    std::ofstream fout("out.txt");

    fout << b << std::endl;
    for (int i = 0; i < b; i++) {
        if (i == 0) {
            fout << arr2[b-1] << " ";
        } else {
            fout << arr2[i - 1] << " ";
        }
    }

    fout << std::endl << a << std::endl;
    for (int i = 0; i < a; i++) {
        if (i == a - 1) {
            fout << arr1[0] << " ";
        }
        else {
            fout << arr1[i + 1] << " ";
        }
    }

    delete[] arr1;
    delete[] arr2;
    fout.close();
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
