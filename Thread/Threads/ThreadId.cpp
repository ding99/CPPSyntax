#include <iostream>
#include <cstdlib>
#include <pthread.h>
#include <windows.h>

#include "ThreadId.h"

using namespace std;

#define NUM_THREADS 6

void* PrintHello(void* threadid) {
	int thid = *((int*)threadid);
	cout << " Hello thread " << thid << "\n";
	pthread_exit(NULL);
	return 0;
}

int startThreadId() {
	pthread_t threads[NUM_THREADS];
	int indexes[NUM_THREADS];
	int rc, i;

	for (i = 0; i < NUM_THREADS; i++) {
		cout << "Create thread " << i << "\n";
		indexes[i] = i;
		rc = pthread_create(&threads[i], NULL, PrintHello, (void*)&(indexes[i]));
		Sleep(10);
		if (rc) {
			cout << "Error: cannot create thread " << rc << endl;
			exit(-1);
		}
	}

	pthread_exit(NULL);
	return 0;
}