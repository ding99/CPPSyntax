#include <iostream>
#include <pthread.h>

#pragma comment(lib, "pthreadVC2.lib")

#include "multiThreads.h"

#define NUM_THREADS 5

void* sayHello(void* args) {
	std::cout << "Hello Thread" << std::endl;
	return 0;
}

int startThreads() {
	pthread_t tids[NUM_THREADS];

	for (int i = 0; i < NUM_THREADS; ++i) {
		int ret = pthread_create(&tids[i], NULL, sayHello, NULL);
		if (ret != 0)
			std::cout << "pthread_create error: error_code=" << ret << std::endl;
	}

	pthread_exit(NULL);
	return 0;
}