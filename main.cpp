#include <iostream>
#include <cpr/cpr.h>

int main()
{
    std:: string ans;
    std:: cout << "Enter the command: get, post, put, delete, patch"<< std::endl;
    std::cin >> ans;
    while ( ans != "get" && ans != "post" && ans != "put" && ans != "delete" && ans != "patch")
    {
        std:: cout << "Error command. Enter the command: get, post, put, delete, patch"<< std::endl;
        std::cin >> ans;
    }
    do {
        if (ans == "get") {
            cpr::Response r = cpr::Get(cpr::Url("http://httpbin.org/get"));
            std::cout << r.text << std::endl;
        }
        if (ans == "post") {
            cpr::Response r = cpr::Get(cpr::Url("http://httpbin.org/post"));
            std::cout << r.text << std::endl;
        }
        if (ans == "put") {
            cpr::Response r = cpr::Get(cpr::Url("http://httpbin.org/put"));
            std::cout << r.text << std::endl;
        }
        if (ans == "delete") {
            cpr::Response r = cpr::Get(cpr::Url("http://httpbin.org/delete"));
            std::cout << r.text << std::endl;
        }
        if (ans == "patch") {
            cpr::Response r = cpr::Get(cpr::Url("http://httpbin.org/patch"));
            std::cout << r.text << std::endl;
        }
        std::cout << "Enter the command: get, post, put, delete, patch or exit" << std::endl;
        std::cin >> ans;
        while (ans != "get" && ans != "post" && ans != "put" && ans != "delete" && ans != "patch" && ans != "exit") {
            std::cout << "Enter the command: get, post, put, delete, patch or exit" << std::endl;
            std::cin >> ans;
        }
    }while (ans != "exit");


}