//
// Created by marin on 05/04/2024.
//

#ifndef RUNTRACK_CPP_BOX_H
#define RUNTRACK_CPP_BOX_H

template <typename T>
class Box {
private:
    T element;
public:
    explicit Box(T element) : element(element) {}
    T getElement() const { return element; }
};

template <typename T>
class Box<T*> {
private:
    T* element;
public:
    explicit Box(T* element) : element(element) {}
    T getElement() const { return *element; }
};

#endif //RUNTRACK_CPP_BOX_H