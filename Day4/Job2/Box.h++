//
// Created by marin on 05/04/2024.
//

#ifndef RUNTRACK_CPP_BOX_HPP
#define RUNTRACK_CPP_BOX_HPP


template <typename T>
class Box {
private:
    T element;
public:
    explicit Box(T element) : element(element) {}
    T getElement() const { return element; }
};


#endif //RUNTRACK_CPP_BOX_HPP
