#pragma once

#ifdef CL_PLATFORM_WINDOWS

extern Circus::Application* Circus::CreateApplication(); 

int main(int argc, char** argv) {
   auto app = Circus::CreateApplication(); 
   app->Run();
   delete app;
}
#endif // CL_PLATFORM_WINDOWS
