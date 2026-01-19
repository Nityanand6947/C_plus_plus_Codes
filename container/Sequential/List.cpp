/*
Functions used in this:
    -front()
    -back()
    -push_front()
    -push_back()
    -pop_front();
    -pop_back()
    -insert() //for inserting at specific position of the element
    -size()
    -begin() //it is cursor of begin
    -end() //it is cursor of end
    -advance(it, 7); moves the iterator it to the 7th position.
    -insert(it, 456); inserts 456 at the specified iterator position.

    If you're using std::advance with li.begin() directly in std::list::insert,
     it won't work because std::advance modifies an existing iterator and doesn’t
      return a new iterator. Instead, you need to store the result of li.begin()
       in an iterator variable, then advance that iterator.



*/
#include <iostream>
#include <list>
using namespace std;

int main()
{
    list<int> li;

    if (li.empty())
    {
        cout << "List is empty" << endl;
    }
    else
    {
        cout << "List is not empty" << endl;
    }

    li.push_front(23);
    li.push_front(17);
    li.push_back(40);
    li.push_front(1);
    li.push_front(111);
    li.push_back(900);

    //Write here
     //   advance(auto li.begin(), 5);
    // advance(li.begin(), 5);
    li.insert(li.begin(), 20);

    cout << "The size element is : " << li.size() << endl;
    cout << "The front element is : " << li.front() << endl;
    cout << "The back element is : " << li.back() << endl;

    for (int n : li)
    {
        std::cout << n << " ";
    }
    cout << endl;

    for (auto it = li.begin(); it != li.end(); it++)
    {
        cout << *it << " ";
    }
}