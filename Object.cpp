#include "Object.h"

int Object::count = 0;

Object::Object() {
    count++;
}

Object::~Object() {
    count--;
}


// Object::Object(const Object& other) {
//     count += other.count;
// }

// Object::Object(int initialCount) {
//     count = initialCount;
// }