// Library.cpp : 此文件包含 "main" 函数。程序执行将在此处开始并结束。
//

#include <iostream>
#include "UserSystem.hpp"
class Book
{
public:
    int Id;
    int Count;
    int LendCount;
    string Name;
    float Price;
};
class LibrarySystem
{
public:
    std::vector<Book>books = vector<Book>();
    LibrarySystem() {
    }
    void AddBook(Book& book) {
        books.push_back(book);
    }
    void RemoveBook(int id) {
        books.erase(books.begin() + id - 1);
    }
};



int main()
{
    UserSystem uSystem ;
    auto u = uSystem.CreateUser("abc");
    std::cout << u.ToString()<<endl;
    std::cout << "Hello World!\n";
}

