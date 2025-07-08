// #include <iostream>
// #include <thread>
// #include <mutex>
// #include <vector>
// #include <chrono>

// const int N = 5;
// std::mutex forks[N];

// void philosopher(int id) {
//     int left = id;
//     int right = (id + 1) % N;

//     while (true) {
//         std::cout << "Philosopher " << id << " is thinking.\n";
//         std::this_thread::sleep_for(std::chrono::milliseconds(500));

//         // Pick up forks (odd-even solution)
//         if (id % 2 == 0) {
//             forks[left].lock();
//             forks[right].lock();
//         } else {
//             forks[right].lock();
//             forks[left].lock();
//         }

//         std::cout << "Philosopher " << id << " is eating.\n";
//         std::this_thread::sleep_for(std::chrono::milliseconds(1000));

//         forks[left].unlock();
//         forks[right].unlock();
//     }
// }

// int main() {
//     std::vector<std::thread> philosophers;
//     for (int i = 0; i < N; ++i) {
//         philosophers.emplace_back(philosopher, i);
//     }

//     for (auto& t : philosophers) {
//         t.join();
//     }

//     return 0;
// }
