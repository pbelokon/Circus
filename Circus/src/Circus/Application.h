#pragma once

#include "Core.h"

namespace Circus {
   class CIRCUS_API Application
   {
   public: 
      Application(); 
      virtual ~Application();

      void Run(); 
   };

   // Tobe defined on clinet
   Application* CreateApplication(); 
}

