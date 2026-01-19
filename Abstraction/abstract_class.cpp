    #include<iostream>
    using namespace std;

    //Abstract class with pure virtual function
    class Shape{
    public:
        virtual void draw() = 0;

        //regular function with implementation
        void info(){
        cout<<"This is a shape"<<endl;
        }

        //virtual destructor
        virtual ~Shape(){}

    };

    //Derived class Circle implementing the pure virtual function
    class Circle : public Shape{
    public:
        void draw() override{
        cout<<"Drawing a Circle"<<endl;
        }
    };

    //Derived class Square implementing the pure virtual function
    class Square : public Shape{
    public:
        void draw() override{
        cout<<"Draw a Square"<<endl;
        }
    };

    int main(){

    //Pointers to base class that will point to derived class objects
    Shape* shape1 = new Circle();
    Shape* shape2 = new Square();

    //Calling the overridden draw function
    shape1->draw(); // Drawing a Circle
    (*shape1).draw();

    shape2->draw(); //Drawing a Square
    (*shape2).draw();

    //Calling the base class function
    shape1->info();  //output - This is shape
    shape2->info();  //output - This is shape

    //Clean up
    delete shape1;
    delete shape2;


    }
