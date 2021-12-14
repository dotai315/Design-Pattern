#include "singleton.h"

static Singleton* instance = NULL;

void singletonInit()
{
    instance = NULL;
}

Singleton* getInstance()
{
    if(instance == NULL)
    {
        instance = (Singleton*)malloc(sizeof(Singleton));
    }

    return instance;
}

void freeSingleton()
{
    if(instance != NULL)
    {
        free(instance);
    }
}