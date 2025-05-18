#ifndef UTILS_H
#define UTILS_H

#include <cstdlib>  // pra usar system()

// Função para limpar a tela
inline void clearScreen() {
#ifdef _WIN32
    system("cls");  // Windows
#else
    system("clear");  // Linux ou Mac
#endif
}

#endif // UTILS_H
