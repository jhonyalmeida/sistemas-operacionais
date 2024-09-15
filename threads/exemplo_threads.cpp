#include <iostream>
#include <thread>
#include <mutex>

using namespace std;

mutex mtx;

void sacar(int &saldo, int valor) {
    mtx.lock();
    saldo -= valor;
    mtx.unlock();
}

void depositar(int &saldo, int valor) {
    mtx.lock();
    saldo += valor;
    mtx.unlock();
}

void exemplo_threads() {
    int saldo = 100;

    thread a = thread(sacar, ref(saldo), 30);
    thread b = thread(depositar, ref(saldo), 50);

    a.join();
    b.join();

    cout << "\n" << "Saldo: " << saldo << "\n\n";
}

int main() {
    exemplo_threads();
    return 0;
}
