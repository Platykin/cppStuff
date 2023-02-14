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

    ~Movie(); //destructor prototype

    void set_name(std::string name) {this->name = name; }
    std::string get_name(std::string name) {return name;}

    void set_rating(std::string name) {this->rating = rating; }
    std::string get_rating(std::string rating) {return rating;}

    void set_watched (int watched) {this->times_watched = watched; }
    int get_watched(int watched) {return watched; }

    void increment_watched() {++times_watched; }

    void display() const;


};

#endif