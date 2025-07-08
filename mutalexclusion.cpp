// // #include <iostream>
// // #include <thread>
// // #include <mutex>
// // #include <vector>

// // using namespace std;

// // const int MAX_NUM = 100;
// // int counter = 1;           // Shared counter
// // mutex mtx;                 // Mutex to protect counter

// // void printNumbers(int threadId) {
// //     while (true) {
// //         mtx.lock();

// //         if (counter > MAX_NUM) {
// //             mtx.unlock();
// //             break;
// //         }

// //         cout << "Thread " << threadId << " prints: " << counter << endl;
// //         counter++;

// //         mtx.unlock();

// //         this_thread::sleep_for(chrono::milliseconds(5)); // Simulate work
// //     }
// // }

// // int main() {// You can increase this as needed
// //    const int NUM_THREADS=2;
   
// //     vector<thread> threads;

// //     // Create threads using a loop
// //     for (int i = 1; i <= NUM_THREADS; ++i) {
// //         threads.push_back(thread(printNumbers, i));
// //     }

// //     // Join threads
// //     for (auto& t : threads) {
// //         t.join();
// //     }

// //     cout << "All numbers printed." << endl;
// //     return 0;
// // }
// #include <iostream>
// #include <thread>
// #include <mutex>

// std::mutex mtx;
// int counter = 0;

// void increment() {
//     for (int i = 0; i < 1000; ++i) {
//         mtx.lock();      // Enter critical section
//         counter++;
//         mtx.unlock();    // Exit critical section
//     }
// }

// int main() {
//     std::thread t1(increment);
//     std::thread t2(increment);

//     t1.join();
//     t2.join();

//     std::cout << "Final counter: " << counter << "\n";
//     return 0;
// }
