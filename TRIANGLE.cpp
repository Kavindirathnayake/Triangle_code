/**************************
 * Includes
 *
 **************************/

#include <windows.h>
#include <gl/gl.h>


/**************************
 * Function Declarations
 *
 **************************/

LRESULT CALLBACK WndProc (HWND hWnd, UINT message,
WPARAM wParam, LPARAM lParam);
void EnableOpenGL (HWND hWnd, HDC *hDC, HGLRC *hRC);
void DisableOpenGL (HWND hWnd, HDC hDC, HGLRC hRC);


/**************************
 * WinMain
 *
 **************************/

int WINAPI WinMain (HINSTANCE hInstance,
                    HINSTANCE hPrevInstance,
                    LPSTR lpCmdLine,
                    int iCmdShow)
{
    WNDCLASS wc;
    HWND hWnd;
    HDC hDC;
    HGLRC hRC;        
    MSG msg;
    BOOL bQuit = FALSE;
    float theta = 0.0f;

    /* register window class */
    wc.style = CS_OWNDC;
    wc.lpfnWndProc = WndProc;
    wc.cbClsExtra = 0;
    wc.cbWndExtra = 0;
    wc.hInstance = hInstance;
    wc.hIcon = LoadIcon (NULL, IDI_APPLICATION);
    wc.hCursor = LoadCursor (NULL, IDC_ARROW);
    wc.hbrBackground = (HBRUSH) GetStockObject (BLACK_BRUSH);
    wc.lpszMenuName = NULL;
    wc.lpszClassName = "GLSample";
    RegisterClass (&wc);

    /* create main window */
    hWnd = CreateWindow (
      "GLSample", "OpenGL Sample", 
      WS_CAPTION | WS_POPUPWINDOW | WS_VISIBLE,
      0, 0, 1256, 1256,
      NULL, NULL, hInstance, NULL);

    /* enable OpenGL for the window */
    EnableOpenGL (hWnd, &hDC, &hRC);

    /* program main loop */
    while (!bQuit)
    {
        /* check for messages */
        if (PeekMessage (&msg, NULL, 0, 0, PM_REMOVE))
        {
            /* handle or dispatch messages */
            if (msg.message == WM_QUIT)
            {
                bQuit = TRUE;
            }
            else
            {
                TranslateMessage (&msg);
                DispatchMessage (&msg);
            }
        }
        else
        {
            /* OpenGL animation code goes here */

            glClearColor (0.0f, 0.0f, 0.0f, 0.0f);
            glClear (GL_COLOR_BUFFER_BIT);

            glPushMatrix ();
            //glRotatef (theta, 0.0f, 0.0f, 1.0f);
            
            
            

glBegin (GL_TRIANGLES);
glColor3f (0.10, 0.36,0.33);   glVertex2f (-0.79, 0.92);
glColor3f (0.10, 0.36,0.33);   glVertex2f (-0.53, 0.92);
glColor3f (0.10, 0.36,0.33);   glVertex2f (-0.79, 0.53);
glEnd ();


glBegin (GL_TRIANGLES);
glColor3f (0.15, 0.55,0.47);   glVertex2f (-0.79, 0.53);
glColor3f (0.15, 0.55,0.47);   glVertex2f (-0.79, 0.05);
glColor3f (0.15, 0.55,0.47);   glVertex2f (-0.26, 0.05);
glEnd ();

glBegin (GL_TRIANGLES);
glColor3f (0.14, 0.49,0.60);   glVertex2f (-0.53, 0.92);
glColor3f (0.14, 0.49,0.60);   glVertex2f (-0.79, 0.53);
glColor3f (0.14, 0.49,0.60);   glVertex2f (-0.26, 0.05);
glEnd ();

glBegin (GL_TRIANGLES);
glColor3f (0.21, 0.61,0.72);   glVertex2f (-0.53, 0.92);
glColor3f (0.21, 0.61,0.72);   glVertex2f (0.05, 0.92);
glColor3f (0.21, 0.61,0.72);   glVertex2f (-0.35, 0.32);
glEnd ();

glBegin (GL_TRIANGLES);
glColor3f (0.24, 0.62,0.66);   glVertex2f (-0.35, 0.32);
glColor3f (0.24, 0.62,0.66);   glVertex2f (-0.26, 0.05);
glColor3f (0.24, 0.62,0.66);   glVertex2f (0.00, 0.05);
glEnd ();

glBegin (GL_TRIANGLES);
glColor3f (0.23, 0.51,0.70);   glVertex2f (0.05, 0.92);
glColor3f (0.23, 0.51,0.70);   glVertex2f (-0.35, 0.32);
glColor3f (0.23, 0.51,0.70);   glVertex2f (-0.16, 0.17);
glEnd ();

glBegin (GL_TRIANGLES);
glColor3f (0.22, 0.39,0.64);   glVertex2f (-0.16, 0.17);
glColor3f (0.22, 0.39,0.64);   glVertex2f (0.00, 0.05);
glColor3f (0.22, 0.39,0.64);   glVertex2f (0.34, 0.05);
glEnd ();

glBegin (GL_TRIANGLES);
glColor3f (0.30, 0.31,0.56);   glVertex2f (-0.05, 0.58);
glColor3f (0.30, 0.31,0.56);   glVertex2f (-0.16, 0.17);
glColor3f (0.30, 0.31,0.56);   glVertex2f (0.34, 0.05);
glEnd ();

glBegin (GL_TRIANGLES);
glColor3f (0.28, 0.21,0.36);   glVertex2f (0.39, 0.92);
glColor3f (0.28, 0.21,0.36);   glVertex2f (-0.05, 0.58);
glColor3f (0.28, 0.21,0.36);   glVertex2f (0.05, 0.92);
glEnd ();

glBegin (GL_TRIANGLES);
glColor3f (0.18, 0.13,0.26);   glVertex2f (0.29, 0.84);
glColor3f (0.18, 0.13,0.26);   glVertex2f (-0.05, 0.58);
glColor3f (0.18, 0.13,0.26);   glVertex2f (0.24, 0.18);
glEnd ();

glBegin (GL_TRIANGLES);
glColor3f (0.28, 0.40,0.64);   glVertex2f (0.39, 0.92);
glColor3f (0.28, 0.40,0.64);   glVertex2f (0.84, 0.92);
glColor3f (0.28, 0.40,0.64);   glVertex2f (0.29, 0.84);
glEnd ();

glBegin (GL_TRIANGLES);
glColor3f (0.24, 0.44,0.68);   glVertex2f (0.29, 0.84);
glColor3f (0.24, 0.44,0.68);   glVertex2f (0.84, 0.92);
glColor3f (0.24, 0.44,0.68);   glVertex2f (0.27, 0.63);
glEnd ();

glBegin (GL_TRIANGLES);
glColor3f (0.26, 0.53,0.62);   glVertex2f (0.27, 0.63);
glColor3f (0.26, 0.53,0.62);   glVertex2f (0.24, 0.18);
glColor3f (0.26, 0.53,0.62);   glVertex2f (0.34, 0.05);
glEnd ();

glBegin (GL_TRIANGLES);
glColor3f (0.18, 0.73,0.64);   glVertex2f (0.32, 0.23);
glColor3f (0.18, 0.73,0.64);   glVertex2f (0.34, 0.05);
glColor3f (0.18, 0.73,0.64);   glVertex2f (0.84, 0.05);
glEnd ();

glBegin (GL_TRIANGLES);
glColor3f (0.16, 0.59,0.49);   glVertex2f (0.27, 0.63);
glColor3f (0.16, 0.59,0.49);   glVertex2f (0.32, 0.23);
glColor3f (0.16, 0.59,0.49);   glVertex2f (0.66, 0.11);
glEnd ();

glBegin (GL_TRIANGLES);
glColor3f (0.13, 0.40,0.44);   glVertex2f (0.84, 0.92);
glColor3f (0.13, 0.40,0.44);   glVertex2f (0.27, 0.63);
glColor3f (0.13, 0.40,0.44);   glVertex2f (0.50, 0.32);
glEnd ();

glBegin (GL_TRIANGLES);
glColor3f (0.18, 0.69,0.67);   glVertex2f (0.50, 0.32);
glColor3f (0.18, 0.69,0.67);   glVertex2f (0.66, 0.11);
glColor3f (0.18, 0.69,0.67);   glVertex2f (0.70, 0.68);
glEnd ();

glBegin (GL_TRIANGLES);
glColor3f (0.17, 0.68,0.61);   glVertex2f (0.70, 0.68);
glColor3f (0.17, 0.68,0.61);   glVertex2f (0.66, 0.11);
glColor3f (0.17, 0.68,0.61);   glVertex2f (0.84, 0.05);
glEnd ();

glBegin (GL_TRIANGLES);
glColor3f (0.14, 0.53,0.44);   glVertex2f (0.84, 0.92);
glColor3f (0.14, 0.53,0.44);   glVertex2f (0.70, 0.68);
glColor3f (0.14, 0.53,0.44);   glVertex2f (0.84, 0.05);
glEnd ();

   glPopMatrix ();

            SwapBuffers (hDC);

            //theta += 1.0f;
           // Sleep (1);
        }
    }

    /* shutdown OpenGL */
    DisableOpenGL (hWnd, hDC, hRC);

    /* destroy the window explicitly */
    DestroyWindow (hWnd);

    return msg.wParam;
}


/********************
 * Window Procedure
 *
 ********************/

LRESULT CALLBACK WndProc (HWND hWnd, UINT message,
                          WPARAM wParam, LPARAM lParam)
{

    switch (message)
    {
    case WM_CREATE:
        return 0;
    case WM_CLOSE:
        PostQuitMessage (0);
        return 0;

    case WM_DESTROY:
        return 0;

    case WM_KEYDOWN:
        switch (wParam)
        {
        case VK_ESCAPE:
            PostQuitMessage(0);
            return 0;
        }
        return 0;

    default:
        return DefWindowProc (hWnd, message, wParam, lParam);
    }
}


/*******************
 * Enable OpenGL
 *
 *******************/

void EnableOpenGL (HWND hWnd, HDC *hDC, HGLRC *hRC)
{
    PIXELFORMATDESCRIPTOR pfd;
    int iFormat;

    /* get the device context (DC) */
    *hDC = GetDC (hWnd);

    /* set the pixel format for the DC */
    ZeroMemory (&pfd, sizeof (pfd));
    pfd.nSize = sizeof (pfd);
    pfd.nVersion = 1;
    pfd.dwFlags = PFD_DRAW_TO_WINDOW | 
      PFD_SUPPORT_OPENGL | PFD_DOUBLEBUFFER;
    pfd.iPixelType = PFD_TYPE_RGBA;
    pfd.cColorBits = 24;
    pfd.cDepthBits = 16;
    pfd.iLayerType = PFD_MAIN_PLANE;
    iFormat = ChoosePixelFormat (*hDC, &pfd);
    SetPixelFormat (*hDC, iFormat, &pfd);

    /* create and enable the render context (RC) */
    *hRC = wglCreateContext( *hDC );
    wglMakeCurrent( *hDC, *hRC );

}


/******************
 * Disable OpenGL
 *
 ******************/

void DisableOpenGL (HWND hWnd, HDC hDC, HGLRC hRC)
{
    wglMakeCurrent (NULL, NULL);
    wglDeleteContext (hRC);
    ReleaseDC (hWnd, hDC);
}
