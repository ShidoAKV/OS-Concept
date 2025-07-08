// // Online C++ compiler to run C++ program online
// #include <iostream>
// #include <thread>
// #include <mutex>


// std::mutex mtx;
// void print(int threadid){
//     for(int i=0;i<3;i++){
//         mtx.lock();
// std::cout<<"thread in the critical section"<<i<<" "<<threadid<<std::endl;
//         mtx.unlock();
//     }
// }

// // for the conditiional variable

// std::conditional_variable

// int main() {
//     // Write C++ code here
//     std::thread t1(print,1);
//     std::thread t2(print,2);
//     t1.join();
//     t2.join();
   

//     return 0;
// }
// #include <iostream>
// #include <thread>
// #include <mutex>
// #include <condition_variable>
// #include <chrono>

// // Custom Semaphore class (C++11 compatible)
// class Semaphore {
// private:
//     std::mutex mtx;
//     std::condition_variable cv;
//     int count;

// public:
//     // Constructor with initial count
//     Semaphore(int count_ = 0) : count(count_) {}

//     // Wait / acquire a token
//     void acquire() {
//         std::unique_lock<std::mutex> lock(mtx);
//         cv.wait(lock, [this]() { return count > 0; });
//         count--;
//     }

//     // Release / give a token
//     void release() {
//         std::lock_guard<std::mutex> lock(mtx);
//         count++;
//         cv.notify_one();
//     }
// };

// // Create a semaphore with 0 initial count (locked)
// Semaphore sem(0);

// void worker() {
//     std::cout << "Worker: Waiting for signal...\n";
//     sem.acquire();  // Block here until notified
//     std::cout << "Worker: Got the signal and continues work.\n";
// }

// void notifier() {
//     std::this_thread::sleep_for(std::chrono::seconds(2)); // Simulate delay
//     std::cout << "Notifier: Sending signal to worker.\n";
//     sem.release();  // Unblock worker
// }

// int main() {
//     std::thread t1(worker);
//     std::thread t2(notifier);

//     t1.join();
//     t2.join();

//     std::cout << "Main: All done!\n";
//     return 0;
// }
