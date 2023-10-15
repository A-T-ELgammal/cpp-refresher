#ifndef SHAPE_H
#define SHAPE_H
#include <string>
using std::string;
class Shape
{
public:
    Shape();
    // adding virtual destructor is must when use a virtual method
    //  using the polymorphism and if no need to do something in it
    //  use the default but with virtual not alone because default is not
    //  virtual
    virtual ~Shape();
    Shape(string background);
    // make it abstract that cannot make instantiation from
    //  virtual void drow() const = 0;
    virtual void drow();
    // make it final that cannot override this methon in other class
    // virtual void drow() const final;
    string getBackground();
    void setBackground(const string &background);

private:
    string background;
};

#endif
