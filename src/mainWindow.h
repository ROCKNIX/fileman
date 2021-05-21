#ifndef _MAINWINDOW_H_
#define _MAINWINDOW_H_

#include <string>
#include <SDL.h>
#include "window.h"
#include "fileLister.h"

class MainWindow : public IWindow
{

   public:

   // Destructor
   virtual ~MainWindow(void);

   // Constructor
   MainWindow(const std::string &p_title);

   // Draw window
   virtual void render(const bool p_focus);

   private:

   // Forbidden
   MainWindow(const MainWindow &p_source);
   const MainWindow &operator =(const MainWindow &p_source);

   // Key pressed
   virtual void keyPressedValidate(void);
   virtual void keyPressedBack(void);

   // Open highlighted dir
   void openHighlightedDir(void);

   // File lister
   CFileLister m_fileLister;

   // Textures for icons
   SDL_Texture *m_iconFile;
   SDL_Texture *m_iconDir;
   SDL_Texture *m_iconUp;

};

#endif
