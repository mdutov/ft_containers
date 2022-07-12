#include <iostream>
#include <algorithm>
#include <cctype>
#include <utility>

#include <vector>
#include "../vector.hpp"

#include <stack>
#include "../stack.hpp"

#include <set>
#include "../set.hpp"

#include <map>
#include "../map.hpp"


/*
    to output all elements of containers

    // std::vector<int>::reverse_iterator it_beg = arr.rbegin();
    // std::vector<int>::reverse_iterator it_end = arr.rend();
    // while(it_beg != it_end)
    // {
    //     std::cout << *it_beg << std::endl;
    //     ++it_beg;
    // }
*/


int main()
{

{
    //---------  VECTOR ----------
    std::cout << "\n\n---------  VECTOR ----------\n\n";

    //---------   std   ----------

    unsigned int start_time = clock(); 

    std::vector<int> arr ;
    for(int i = 0; i < 10000; i++)
        arr.push_back(i);


    std::cout << "std::size = " << arr.size() << "     std::cap = " << arr.capacity() << std::endl;

    unsigned int end_time = clock();                    // конечное время
    unsigned int search_time = (end_time - start_time); // искомое время
    std::cout << "std::time = " << search_time << "\n\n";

    //----------   ft   -------------

    start_time = clock(); 

    ft::vector<int> ars;
    for(int i = 0; i < 10000; i++)
        ars.push_back(i);


    std::cout << "ft::size = " << ars.size() << "     ft::cap = " << arr.capacity() << std::endl;

    end_time = clock();                    // конечное время
    search_time = (end_time - start_time); // искомое время
    std::cout << "ft::time = " << search_time << "\n\n";
} 


{
    //---------  STACK ----------
    std::cout << "\n\n---------  STACK ----------\n\n";

    //---------   std   ----------

    unsigned int start_time = clock(); 

    std::stack<int> arr ;
    for(int i = 0; i < 10000; i++)
        arr.push(i);


    std::cout << "std::size = " << arr.size() << std::endl;

    unsigned int end_time = clock();                    // конечное время
    unsigned int search_time = (end_time - start_time); // искомое время
    std::cout << "std::time = " << search_time << "\n\n";

    //----------   ft   -------------

    start_time = clock(); 

    ft::stack<int> ars;
    for(int i = 0; i < 10000; i++)
        ars.push(i);


    std::cout << "ft::size = " << ars.size() << std::endl;

    end_time = clock();                    // конечное время
    search_time = (end_time - start_time); // искомое время
    std::cout << "ft::time = " << search_time << "\n\n";
}


{
    //---------  SET ----------
    std::cout << "\n\n---------  SET ----------\n\n";

    //---------   std   ----------

    unsigned int start_time = clock(); 

    std::set<int> arr ;
    for(int i = 0; i < 10000; i++)
        arr.insert(i);


    std::cout << "std::size = " << arr.size() << std::endl;

    unsigned int end_time = clock();                    // конечное время
    unsigned int search_time = (end_time - start_time); // искомое время
    std::cout << "std::time = " << search_time << "\n\n";

    //----------   ft   -------------

    start_time = clock(); 

    ft::set<int> ars;
    for(int i = 0; i < 10000; i++)
        ars.insert(i);


    std::cout << "ft::size = " << ars.size() << std::endl;

    end_time = clock();                    // конечное время
    search_time = (end_time - start_time); // искомое время
    std::cout << "ft::time = " << search_time << "\n\n";
}


{
    //---------  MAP ----------
    std::cout << "\n\n---------  MAP ----------\n\n";

    //---------   std   ----------

    unsigned int start_time = clock(); 

// map<int, char> m = {{1, 'a'}, {3, 'b'}, {5, 'c'}, {7, 'd'}};
    std::map<int, char> arr ;
    for(int i = 0; i < 10000; i++)
        arr.insert(std::pair<int, char>(i, 'c'));


    std::cout << "std::size = " << arr.size() << std::endl;

    unsigned int end_time = clock();                    // конечное время
    unsigned int search_time = (end_time - start_time); // искомое время
    std::cout << "std::time = " << search_time << "\n\n";

    //----------   ft   -------------

    start_time = clock(); 

    std::map<int, char> ars ;
    for(int i = 0; i < 10000; i++)
        ars.insert(std::pair<int, char>(i, 'c'));


    std::cout << "ft::size = " << ars.size() << std::endl;

    end_time = clock();                    // конечное время
    search_time = (end_time - start_time); // искомое время
    std::cout << "ft::time = " << search_time << "\n\n";
}


}