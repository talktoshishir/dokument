#include <iostream>
#include <thread>

#include "concurUtility.hh"

class thread_guard
{
    std::thread t;
public:
    explicit thread_guard(std::thread& t_):
    t(t_)
    {}

    ~thread_guard(){
        if(t.joinable())
        {
            t.join();
        }
    }

    thread_guard(thread_guard const&)=delete;
    thread_guard& operator=(thread_guard const&)=delete;
};

//struct func;

void tGaurd(){
    int some_local_state=0;
    func my_func(some_local_state);
    std::thread t{[]{my_func{}();}};
    thread_guard g(t);
    do_something();
}
