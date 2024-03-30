#pragma once

class Object {
private:
    static int count;

public:
    Object();
    // Object(const Object& other);
    // Object(int initialCount);
    virtual ~Object();
    static int getCount() {return count;}
};
