#include <iostream>
#include <string>

#include "Movies.h"
#include "Movie.h"


Movies::Movies(){
}

Movies::~Movies() {
}

    bool Movies::add_movie(std::string val_name, std::string val_rating, int val_times_watched){
        for (const Movie &movie: movies){
            if (movie.get_name == val_name){
                return false;
            }
        }
        Movie temp{name, rating, times_watched};
        movies.push_back(temp);
        return true;
    }