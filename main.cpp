#include <CLI/CLI.hpp>
#include <iostream>

int main(int argc, char** argv){
    CLI::App thisApplication{"Dies ist Emres erstes eigenes CLI11-Projekt!", "CLI11-Programm-esrn"};

    int int_option{0};
    thisApplication.add_option("-i", int_option, "Integer angeben");
    std::cout << int_option << std::endl;
    try{
        thisApplication.parse(argc, argv);
    } catch(const CLI::ParseError& e){
        return thisApplication.exit(e);
    }
    std::cout << int_option << std::endl;
}