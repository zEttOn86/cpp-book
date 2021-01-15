#ifndef RECTANGLE_H_
#define RECTANGLE_H_
class Rectangle{
public:

    // int Area(){
    //     return height_ * width_;
    // }
    int Area();
    int height_;
    int width_;

};

inline int Rectangle::Area(){
    return  height_ * width_;
}

#endif