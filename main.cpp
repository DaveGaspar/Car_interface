#include <iostream>

class Car{
    public:
        virtual void move() = 0;
        virtual void close_doors() = 0;
        virtual void close_windows() = 0;
        virtual void start_engine() = 0;
        virtual void turn_on_wipers() = 0;
};

class BMW:public Car{
    private:
        std::string logo;
        int petrol;
        std::string control_panel;

        void move() override{
            std::cout << "Moving the BMW" << std::endl;
        }
        void close_doors() override{
            std::cout << "Closing the doors of BMW" << std::endl;
        }
        void close_windows() override{
            std::cout << "Closing the windows of BMW" << std::endl;
        }
        void start_engine() override{
            std::cout << "Starting the engine of BMW" << std::endl;
        }
        void turn_on_wipers() override{
            std::cout << "Turning on the wipers on BMW" << std::endl;
        }
};

class Tesla:public Car{
    private:
        std::string logo;
        int electricity;;
        std::string ai;

        void move() override{
            std::cout << "Moving the Tesla" << std::endl;
        }
        void close_doors() override{
            std::cout << "Closing the doors of Tesla" << std::endl;
        }
        void close_windows() override{
            std::cout << "Closing the windows of Tesla" << std::endl;
        }
        void start_engine() override{
            std::cout << "Starting the engine of Tesla" << std::endl;
        }
        void turn_on_wipers() override{
            std::cout << "Turning on the wipers on Tesla" << std::endl;
        }
};

int main(){

    Car* arr[2];

    arr[0] = new BMW;
    arr[1] = new Tesla;

    arr[0]->start_engine();
    arr[1]->start_engine();

    delete arr[0];
    arr[0] = nullptr;
    delete arr[1];
    arr[1] = nullptr;

    return 0;
}