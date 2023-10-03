#include <Circus.h>

class Sandbox : public Circus::Application {
public:
   Sandbox() {

   }

   ~Sandbox() {

   }
};

Circus::Application* Circus::CreateApplication() {
   return new Sandbox(); 
}