// #include <iostream>
// #include <queue>
// #include <thread>
// #include <mutex>
// #include <condition_variable>

// const int MAX_SIZE = 5;
// std::queue<int> buffer;
// std::mutex mtx;
// std::condition_variable not_full, not_empty;

// void producer(int id) {
//     int item = 0;
//     while (true) {
//         std::unique_lock<std::mutex> lock(mtx);
//         not_full.wait(lock, [] { return buffer.size() < MAX_SIZE; });

//         item++;
//         buffer.push(item);
//         std::cout << "Producer " << id << " produced " << item << "\n";

//         lock.unlock();
//         not_empty.notify_all();
//         std::this_thread::sleep_for(std::chrono::milliseconds(500));
//     }
// }

// void consumer(int id) {
//     while (true) {
//         std::unique_lock<std::mutex> lock(mtx);
//         not_empty.wait(lock, [] { return !buffer.empty(); });

//         int item = buffer.front();
//         buffer.pop();
//         std::cout << "Consumer " << id << " consumed " << item << "\n";

//         lock.unlock();
//         not_full.notify_all();
//         std::this_thread::sleep_for(std::chrono::milliseconds(500));
//     }
// }

// int main() {
//     std::thread p1(producer, 1);
//     std::thread c1(consumer, 1);
//     std::thread c2(consumer, 2);

//     p1.join();
//     c1.join();
//     c2.join();
//     return 0;
// }
