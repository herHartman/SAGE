#include "JFW_window.h"
#include <SDL2/SDL.h>
#include <SDL2/SDL_error.h>
#include <SDL2/SDL_video.h>

using namespace JFW_Core;

JFW_Core::JFW_Window::JFW_Window(const int height, const int width, const char* title) : 
    m_height(height), m_width(width), m_title(title) {}

JFW_Window* JFW_Window::init(const int height, const int width, const char* title) 
{
    JFW_Window* resultWindow = new JFW_Window(height, width, title);

    SDL_Window* sdlWindow = SDL_CreateWindow(
            title, 
            SDL_WINDOWPOS_UNDEFINED,
            SDL_WINDOWPOS_UNDEFINED,
            height, 
            width,
            SDL_WINDOW_OPENGL
     );

    if (sdlWindow == NULL)
    {
        printf("Could not create window: %s\n", SDL_GetError());
        return nullptr;
    }

    resultWindow->m_window = sdlWindow;
    return resultWindow;
}
