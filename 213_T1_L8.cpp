#include<bits/stdc++.h>
using namespace std;

class Shape
{
public:
    virtual std::string info()
    {
        return string("I am a Shape\n");
    }


};

class TwoDimensionalShape : public Shape
{
protected:
  float area, perimeter;
public:
  TwoDimensionalShape() : area(0), perimeter(0)
  {

  }

};

class ThreeDimensionalShape : public Shape
{
protected:
  float area, volume;
public:
  ThreeDimensionalShape() : area(0), volume(0)
  {

  }


};

class Triangle : public TwoDimensionalShape
{
    float base, height;
public:
    Triangle(float b=0,float h=0):base(b),height(h)
    {

    }
    float area()
    {
        return 0.5*base*height;
    }

    std::string info()
    {
        return string("I am a TwoDimensionalShape triangle\n");
    }
    void get() const
    {
        cout << "Sides of the triangles : ";
        cout <<  base << " " << height << "\n";
    }
  void set()
  {
    cout << "Enter sides of the triangle : ";
    cin >> base >> height;
  }

};

class Rectangle : public TwoDimensionalShape
{
    float length, width;
public:
    Rectangle(float l=0, float w=0):length(l),width(w)
    {

    }
    float area()
    {
        return length*width;
    }
    string info()
    {
        return Shape::info()+string("I am a TwoDimensionalShape Rectangle\n");
    }
    void get() const
    {
    cout << "Sides of the rectangle : ";
    cout << length << " " << width << "\n";
  }
  void set()
  {
    cout << "Enter sides of the rectangle : ";
    cin >> length >> width;
  }


};

class Circle : public TwoDimensionalShape
{
    float radius;
public:
    Circle(float r=0):radius(r)
    {

    }
    float area()
    {
        return 3.1416*radius*radius;
    }
    std::string info()
    {
        return string("I am a TwoDimensionalShape Circle\n");
    }
    void get() const
    {
        cout << "Radius of the circle is : ";
        cout << radius << "\n";
    }
   void set()
   {
        cout << "Enter the radius of the circle : ";
        cin >> radius;
   }
};

class Sphere : public ThreeDimensionalShape
{
    float radius;
public:
    Sphere(float r=0):radius(r)
    {

    }
    float area()
    {
        return 4*3.1416*radius*radius;
    }
    float volume()
    {
        return (4 / 3.0) * 3.1416 * radius * radius * radius;
    }
    std::string info()
    {
        return string("I am a ThreeDimensionalShape Sphere\n");
    }
    void get() const
    {
        cout << "The radius of the sphere is : ";
        cout << radius << "\n";
    }
   void set()
   {
        cout << "Enter the radius of the sphere : ";
        cin >> radius;
   }
};

class Cylinder : public ThreeDimensionalShape
{
  float height, radius;
public:
  Cylinder(float h=0, float r=0) : height(h), radius(r)
  {

  }
  float area()
  {
    return 2 * 3,1416 * radius * (height + radius);
  }
  float volume()
  {
    return 3.1416 * radius * radius * height;
  }
  void get() const
  {
    cout << "Height and radius of the cylinder : ";
    cout << height << " " << radius << endl;
  }
  void set()
  {
    cout << "Enter the height of the cylinder : ";
    cin >> height >> radius;
  }
  std::string info()
  {
    return string("I am a ThreeDimensionalShape Cylinder\n");
  }
};

class Cone : public ThreeDimensionalShape
{
  float height, radius;
public:
  Cone(float h=0, float r=0) : height(h), radius(r)
  {

  }
  float area()
  {
    return 2 * 3,1416 * radius * (height + radius);
  }
  float volume()
  {
    return 3.1416 * radius * radius * height / 3 ;
  }
  void get() const
  {
    cout << "Height and radius of the cone : ";
    cout << height << " " << radius << endl;
  }
  void set()
  {
    cout << "Enter the height of the cone : ";
    cin >> height >> radius;
  }
  std::string info()
  {
    return string("I am a ThreeDimensionalShape Cone\n");
  }
};

class Cube : public ThreeDimensionalShape
{
  float edge;
public:
  Cube(float e=0) : edge()
  {

  }
  float area()
  {
    return 6 * edge * edge;
  }
  float volume()
  {
    return edge * edge * edge;
  }
  void get() const
  {
    cout << "Edges of the cube is : ";
    cout << edge << "\n";
  }
  void set()
  {
    cout << "Enter the edge of the cube : ";
    cin >> edge;
  }
  std::string info()
  {
    return string("I am a ThreeDimensionalShape Cube\n");
  }
};

int main()
{
    //Shape sample;
    Shape* s[10];
    for(int i=0; i<10; i++)
        s[i] = nullptr;

    s[0]= new Triangle(10,10);
         Triangle tri;
         tri.set();
         tri.get();
         cout <<  "area=" << tri.area() << endl;
    s[1]= new Rectangle(10,10);
        Rectangle r;
        r.set();
        r.get();
        cout <<  "area=" << r.area() << endl;
    s[2]= new Circle(10);
        Circle cir;
        cir.set();
        cir.get();
        cout <<  "area=" << cir.area() << endl;
    s[3]= new Sphere(10);
        Sphere sp;
        sp.set();
        sp.get();
        cout <<  "area=" << sp.area() << " " << "volume=" << sp.volume() << endl;
    s[4]= new Cylinder(10,10);
        Cylinder cy;
        cy.set();
        cy.get();
        cout << "area="<<cy.area() << " " << "volume=" << cy.volume() << endl;
    s[5]= new Cone(10,10);
        Cone cn;
        cn.set();
        cn.get();
        cout <<  "area=" << cn.area() << " " << "volume=" << cn.volume() << endl;
    s[6]= new Cube(10);
        Cube cb;
        cb.set();
        cb.get();
        cout <<  "area=" << cb.area() << " " << "volume=" << cb.volume() << endl;
    for(int i=0; i<10; i++)
    {
        if(s[i])
            cout<<s[i]->info();
//            cout<<s[i]->info()<<" area :"<<s[i]->area()<<endl;
    }

    delete s[0];
    delete s[1];
    delete s[2];
    delete s[3];
    delete s[4];
    delete s[5];
    delete s[6];

    return 0;
}
