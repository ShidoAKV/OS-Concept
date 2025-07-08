// #include <iostream>
// #include <thread>
// #include <mutex>
// #include <shared_mutex>
// #include <vector>
// #include <chrono>

// std::shared_mutex rw_mutex;
// int shared_data = 0;

// void reader(int id) {
//     while (true) {
//         std::shared_lock<std::shared_mutex> lock(rw_mutex);
//         std::cout << "Reader " << id << " reads data: " << shared_data << "\n";
//         std::this_thread::sleep_for(std::chrono::milliseconds(500));
//     }
// }

// void writer(int id) {
//     while (true) {
//         std::unique_lock<std::shared_mutex> lock(rw_mutex);
//         shared_data++;
//         std::cout << "Writer " << id << " writes data: " << shared_data << "\n";
//         std::this_thread::sleep_for(std::chrono::milliseconds(1000));
//     }
// }

// int main() {
//     std::vector<std::thread> threads;

//     threads.emplace_back(writer, 1);
//     threads.emplace_back(reader, 1);
//     threads.emplace_back(reader, 2);

//     for (auto& t : threads) {
//         t.join();
//     }

//     return 0;
// }
