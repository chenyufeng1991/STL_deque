//
//  main.cpp
//  STL_deque
//
//  Created by chenyufeng on 8/12/16.
//  Copyright © 2016 chenyufeng. All rights reserved.
//

#include <iostream>
#include <deque>

using namespace std;

void PrintDeque(deque<int> pDeque);

int main(int argc, const char * argv[])
{
    deque<int> deque1;
    deque<int> deque2(deque1);
    deque<int> deque3(10);
    deque<int> deque4(10,0);

    deque1.push_back(1);
    deque1.push_back(2);
    deque1.push_back(3);
    deque1.push_back(4);
    PrintDeque(deque1);

    deque1.push_front(5);
    deque1.push_front(6);
    PrintDeque(deque1);

    cout << "头部元素为：" << deque1.front() << endl;
    cout << "尾部元素为：" << deque1.back() << endl;

    cout << "某位置的元素为：" << deque1.at(2) << endl;
    cout << "某位置的元素为：" << deque1[2] << endl;


    return 0;
}

void PrintDeque(deque<int> pDeque)
{
    cout << "deque元素为：";
    deque<int>::iterator dequeIter;
    for (dequeIter = pDeque.begin(); dequeIter != pDeque.end(); dequeIter++)
    {
        cout << *dequeIter << " ";
    }

    cout << endl;
}










