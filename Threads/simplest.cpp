#include <iostream>
#include <pthread.h>

#include "Simplest.h"

#pragma comment(lib, "pthreadVC2.lib")

#define NUM_THREADS 5

void* sayHello(void* args) {
	std::cout << "Hello Thread\n";
	return 0;
}

int startSimplest() {
	pthread_t thids[NUM_THREADS];

	for (int i = 0; i < NUM_THREADS; ++i) {
		int ret = pthread_create(&thids[i], NULL, sayHello, NULL);
		if (ret != 0)
			std::cout << "pthread_create error: error_code=" << ret << std::endl;
	}

	pthread_exit(NULL);
	return 0;
}