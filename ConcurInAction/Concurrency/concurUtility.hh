
void
do_something(){
    std::cout<<"Hello Concurrent World\n";
}

struct func{
    int& i;
    func(int& i_):i(i_){}
    void operator()(){
    for(unsigned j=0;j<1000000;++j){
        do_something();
    }
}
};
