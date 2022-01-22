// #include <SDL2/SDL.h>
// #include <SDL2/SDL_video.h>

#ifndef JWF_WINDOW
#define JFW_WINDOW

struct SDL_Window;

namespace JFW_Core
{
    class JFW_Window 
    {
        public:
            JFW_Window(const int height, const int width, const char* title);

            void resize();
            void setExitCallback();
            void setInitCallback();
            void setResizeCallback();
            
            static JFW_Window* init(const int height, const int width, const char* title); 
            
            ~JFW_Window();

        private:
            SDL_Window* m_window;
            int m_height;
            int m_width;
            char* m_title;
    };

}

#endif
