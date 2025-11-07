
#include <ftxui/screen/screen.hpp>
#include <ftxui/screen/color.hpp>
#include <thread>
#include <chrono>
#include <iostream>
#include <Dibujo.hpp>
#include <GestorDibujos.hpp>
#include <Cielo.hpp>
using namespace ftxui;

int main()
{
    // Crear la ventana
    auto screen = Screen::Create(
        Dimension::Fixed(80),
        Dimension::Fixed(24));

    // Agregar código de los elementos de la granja
    const std::vector<std::u32string> avion1 = {                 
U"    -=\\`\\ ",      
U" |\ ____\\_\\__ ",   
U"=\\c`\"\"\"\"\"\"\" \"`)",
U"  `~~~~~/ /~~`",  
U"    -==/ /",      
U"      '-'       "};
    const std::vector<std::u32string> globo1 = {
U"    .--.===.--.",
U"  .%%.;::|888.#`.",
U" /%%/::::|8888\##\ ",
U"|%%/:::::|88888\##|",
U"|%%|:::::|88888|##|",
U"\%%|:::::|88888|##/",
U" \%\:::::|88888/#/",
U"  \%\::::|8888/#/",
U"   `%\:::|888/#'",
U"     `\__|__/'",
U"      [VVVVV]",
U"       \|_|/",
U"       [XXX]",
U"       -----"};
    const std::vector<std::u32string> nube1 = {                                     
U"   __   _   ", 
U" _(  )_( )_ ", 
U"(_   _    _)", 
U"  (_) (__)  "};

    GestorDibujos gestor;
    gestor.Agregar(Dibujo(2, 1, avion1, ftxui::Color::White));     // avion blanco
    gestor.Agregar(Dibujo(15, 2, globo1, ftxui::Color::RosyBrown));     // globo cafe
    gestor.Agregar(Dibujo(5, 4, nube1, ftxui::Color::White));      // nube blanca
    gestor.Agregar(Dibujo(25, 3, nube1, ftxui::Color::White));     // nube blanca
    gestor.Agregar(Dibujo(40, 5, nube1, ftxui::Color::White));     // nube blanca
    gestor.Agregar(Dibujo(8, 10, avion1, ftxui::Color::GrayLight));  // avion gris
    gestor.Agregar(Dibujo(80, 8, nube1, ftxui::Color::White));     // nube blanca
    gestor.Agregar(Dibujo(60, 1, nube1, ftxui::Color::White));     // nube blanca
    gestor.Agregar(Dibujo(100, 3, nube1, ftxui::Color::White));     // nube blanca

    int frames = 800;
    for (int frame = 0; frame < frames; ++frame)
    {
        // Limpia la pantalla
        screen.Clear();
        gestor.dibujos[0].x = 2 + (frame % 80); //avion 1
        gestor.dibujos[1].x = 40 - (frame % 80); // globo
        gestor.dibujos[5].x = 8 + (frame % 80); // avion 2

        gestor.DibujarTodos(screen);

        // Imprime la pantalla y resetea el cursor
        std::cout << screen.ToString();
        std::cout << screen.ResetPosition();
        std::cout << std::flush;

        std::this_thread::sleep_for(std::chrono::milliseconds(120));
    }
    return 0;
}