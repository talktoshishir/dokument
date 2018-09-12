#include <iostream>
#include <thread>

void hello()
{
std::cout<<"Hello Concurrent World\n";
}

void threadHello()
{
std::thread t(hello);
t.join();
}
