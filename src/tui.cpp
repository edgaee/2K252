#include <ftxui/dom/elements.hpp>
#include <ftxui/screen/screen.hpp>
#include <iostream>
#include <cstring>
#include <string>
#include <thread>
#include <chrono>

using namespace ftxui;
using namespace std;

string vaca = 
string("       (__)     ")+
string("`\\------(oo)     ")+
string(" ||    (__)     ")+
string(" ||w--||        ");




int main() {

  // Create a screen with full width and height fitting the document.
  auto screen = Screen::Create(
    Dimension::Full(),       // Width
    Dimension::Fixed(10) // Height
  );
 
  int x = 0;
  int y = 0;



while(true){
  x++;
  y++;
  auto& pixel = screen.PixelAt(x,y);
  pixel.bold = true;
  pixel.character = 'A';  
  // Print the screen to the console.  
  screen.Print();
  screen.Clear();
  this_thread::sleep_for(chrono::seconds(1));
}
}