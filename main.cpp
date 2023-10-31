#include <queue>
#include <mutex>
#include <iostream>
#include <thread>

template<typename T>
class ThreadSafeQueue
{
public:
    ThreadSafeQueue() {}

    void push(const T& value)
    {
        std::lock_guard<std::mutex> lock(mutex);
        queue.push(value);
    }

    void pop()
    {
        std::lock_guard<std::mutex> lock(mutex);
        queue.pop();
    }

    size_t size()
    {
        std::lock_guard<std::mutex> lock(mutex);
        return queue.size();
    }

    bool empty()
    {
        std::lock_guard<std::mutex> lock(mutex);
        return queue.empty();
    }

private:
    std::queue<T> queue;
    std::mutex mutex;
};

std::queue<int> queue;
std::mutex mutex;

void producer()
{
    for (int i = 0; i < 10; ++i) {
        std::lock_guard<std::mutex> lock(mutex);
        queue.push(i);
        std::this_thread::sleep_for(std::chrono::milliseconds(100));
    }
}

void consumer()
{
    while (true) {
        std::lock_guard<std::mutex> lock(mutex);
        if (!queue.empty()) {
            int element = queue.front();
            queue.pop();
            std::cout << "Element: " << element << std::endl;
            std::this_thread::sleep_for(std::chrono::milliseconds(200));
        } else {
            break;
        }
    }
}

int main()
{
    std::thread producerThread(producer);
    std::thread consumerThread(consumer);

    producerThread.join();
    consumerThread.join();

    return 0;
}
