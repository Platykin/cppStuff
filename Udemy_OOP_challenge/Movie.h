#ifndef _MOVIE_
#define _MOVIE_
#include "Movie.h"

#include <string>

class Movie {
private:
    friend class Movies;
    std::string name;
    std::string rating;
    int times_watched = 0;
private:
    Movie(std::string name, std::string rating, int times_watched); //contructor prototype

    Movie(const Movie &source); //copy contructor prototype

    ~Movie();


};

#endif