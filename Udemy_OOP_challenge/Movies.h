#ifndef _MOVIES_
#define _MOVIES_

#include "Movie.h"
#include <vector>
#include <string>


class Movies{
private:
    friend class Movie;
    std::vector <Movie> movies;
public: 
    Movies(std::vector <Movie> val_movies); //constructor
    ~Movies(); //destructor






};


#endif