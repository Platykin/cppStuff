#ifndef _MOVIES_
#define _MOVIES_

#include "Movie.h"
#include <vector>
#include <string>


class Movies{
private:
    std::vector<Movie> movies;
public: 
    Movies(); //constructor
    ~Movies(); //destructor

    bool add_movie(std::string name, std::string rating, int watched){};




};


#endif