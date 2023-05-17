#include<iostream>
class student{
    char sex;
    int age;
    int height;
    void play()
    {
       std::cout<<"playing";
    }
    void write()
    {
       std::cout<<"writing";
    }
    void eat()
    {
        std::cout<<"eating";
    }
    void run()
    {
        std::cout<<"running";
    }
    void read()
    {
        std::cout<<"reading";
    }
    void main()
    {
        student dipesh,radhesh,ram,shyam,hari;
        dipesh.play();
        radhesh.write();
        ram.eat();
        shyam.run();
        hari.read();
    }
}