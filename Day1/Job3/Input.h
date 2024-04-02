//
// Created by Clément on 02/04/2024.
//

#ifndef RUNTRACK_CPP_INPUT_H
#define RUNTRACK_CPP_INPUT_H


class Input {
public:
    // get 5 integers from the user
    static int getUserInput();
    // do the average of the 5 integers taking a list of integers as parameter
    static void average(const int *list);
};


#endif //RUNTRACK_CPP_INPUT_H
