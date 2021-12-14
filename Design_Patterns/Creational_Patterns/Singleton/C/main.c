#include "singleton.h"

int main(void)
{
    singletonInit();

    Singleton* s = getInstance();
    Singleton* r = getInstance();

    printf("%p %p\n", s, r);

    freeSingleton();
    
    return EXIT_SUCCESS;
}