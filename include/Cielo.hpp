#pragma once
#include <vector>
#include "Dibujo.hpp"

class Cielo {
public:
    int x, y, ancho, alto;
    Dibujo dibujo_cielo;
    std::vector<Dibujo> cosas;

    Cielo(int x, int y, int ancho, int alto, ftxui::Color color = ftxui::Color::White)
        : x(x), y(y), ancho(ancho), alto(alto),
          dibujo_cielo(x, y, GenerarFiguraCielo(ancho, alto), color) {}

    static std::vector<std::u32string> GenerarFiguraCielo(int ancho, int alto) {
        std::vector<std::u32string> figura;
        std::u32string top = U"+" + std::u32string(ancho-2, U'-') + U"+";
        std::u32string mid = U"|" + std::u32string(ancho-2, U' ') + U"|";
        figura.push_back(top);
        for (int i = 0; i < alto-2; ++i) figura.push_back(mid);
        figura.push_back(top);
        return figura;
    }

    void AgregarCosa(const Dibujo& cosa) {
        // Asegura que el animal esté dentro del corral
        int ax = cosa.x;
        int ay = cosa.y;
        if (ax < x+1) ax = x+1;
        if (ax > x+ancho-3) ax = x+ancho-3;
        if (ay < y+1) ay = y+1;
        if (ay > y+alto-3) ay = y+alto-3;
        Dibujo cosa_dentro(ax, ay, cosa.figura, cosa.color);
        cosas.push_back(cosa_dentro);
    }

    void Dibujar(ftxui::Screen& screen) const {
        dibujo_cielo.Dibujar(screen);
        for (const auto& cosa : cosas) {
            cosa.Dibujar(screen);
        }
    }
};