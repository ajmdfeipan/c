#include <glib.h>

int main(int argc,char* argv)
{
    if (g_thread_supported() == 0)
        g_thread_init(NULL);
 
    g_print("g_main_loop_new\n");
 
    GMainLoop* loop=g_main_loop_new(NULL,FALSE);
     
    g_print("g_main_loop_run\n");
    g_main_loop_run(loop);  
     
    g_print("g_main_loop_unref\n");
    g_main_loop_unref(loop);
 
    return 0;
}