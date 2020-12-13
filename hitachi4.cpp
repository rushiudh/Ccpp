
class Shape
{
public:
virtual void draw() = 0;
};

class Rectangle: public Shape
{

public:
  void draw()
{

//Some more member functions
}
};
class Circle :public Shape
{
public:

void draw(){
}
};

int main(){
  Shape obj;
  obj.draw();
}
