#include <stdio.h>
#include <pthread.h>

// Define a global counter variable
int counter = 0;

// Define a mutex object for synchronization
pthread_mutex_t mutex;

// Define a function that increments the counter
void *increment(void *arg)
{
    int i;
    // Increment the counter a million times
    for (i = 0; i < 1000000; i++)
    {
        // Acquire the lock to prevent race conditions
        pthread_mutex_lock(&mutex);
        counter++;
        // Release the lock so other threads can access the counter
        pthread_mutex_unlock(&mutex);
    }
    return NULL;
}

int main()
{
    int i;
    pthread_t threads[10];

    // Initialize the mutex object
    pthread_mutex_init(&mutex, NULL);

    // Create 10 threads and start them
    for (i = 0; i < 10; i++)
    {
        pthread_create(&threads[i], NULL, increment, NULL);
    }

    // Wait for all threads to finish
    for (i = 0; i < 10; i++)
    {
        pthread_join(threads[i], NULL);
    }

    // Print the final value of the counter
    printf("Final counter value: %d\n", counter);

    // Clean up the mutex object
    pthread_mutex_destroy(&mutex);

    return 0;
}