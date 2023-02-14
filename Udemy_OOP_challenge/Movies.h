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

    bool add_movie(std::string val_name, std::string val_rating, int val_timws_watched);

    bool increment_watched(std::string val_name);

    void display() const;




};


#endif