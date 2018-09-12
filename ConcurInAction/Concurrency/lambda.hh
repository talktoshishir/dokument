#include <iostream>
using namespace std;

void
lambdaHome()
  {
      auto lambda0 = []() { cout << " 0: Code within a lambda expression" << endl; };
      lambda0();
      auto lambda1 = [](void) { cout << " 1: Code within a lambda expression" << endl; };
      lambda1();
      auto lambda2 = [](void) -> void { cout << " 2: Code within a lambda expression" << endl; };
      lambda2();
  }


#include <algorithm>
#include <vector>

void
lambdaPrintAll()
{
    vector<int> numbers { 1, 2, 3, 4, 5, 10, 15, 20, 25, 35, 45, 50 };
    for_each(numbers.begin(), numbers.end(), [] (int y)
    {
        cout << y << endl;
    });
}

void
lambdaGreaterThan5()
{
    vector<int> numbers { 1, 2, 3, 4, 5, 10, 15, 20, 25, 35, 45, 50 };
    auto greater_than_5_count = count_if(numbers.begin(), numbers.end(), [](int x) { return (x > 5); });
    cout << "The number of elements greater than 5 is: " << greater_than_5_count << "." << endl;
}

void
lambdaDivisorSum()
{
    int sum = 0;
    int divisor = 3;
    vector<int> numbers { 1, 2, 3, 4, 5, 10, 15, 20, 25, 35, 45, 50 };
    for_each(numbers.begin(), numbers.end(), [=, &sum] (int y) // =, &, this
    {
        if (y % divisor == 0)
        {
            cout << y << endl;
            sum += y;
        }
    });

    cout << sum << endl;
}



#include <functional>

std::function<void(int)> create_function()
{
    return [](int x)
    {
        cout<<x<<endl;
        //cout<< (x < 100)?x:1313;
    };
}

void run_within_for_each(std::function<void (int)> func)
{
    vector<int> numbers{ 1, 2, 3, 4, 5, 10, 15, 20, 25, 35, 45, 50 };

    for_each(numbers.begin(), numbers.end(), func);
}

void
lambdaFunctionalWrapper()
{
    auto func1 = [](int y)
    {
        cout << y << endl;
    };

    auto func2 = [](int z)
    {
        cout << z * 2 << endl;
    };

    run_within_for_each(func1);
    run_within_for_each(func2);
    run_within_for_each(create_function());
}
