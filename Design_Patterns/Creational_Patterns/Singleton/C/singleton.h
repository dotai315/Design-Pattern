#ifndef SINGLETON_H_
#define SINGLETON_H_

#include <stdio.h>
#include <stdlib.h>

struct singleton
{

};

typedef struct singleton Singleton;

void singletonInit(void);
Singleton* getInstance();
void freeSingleton();

#endif