#include <iostream>
#include <string>
#include "Movies.h"
#include "Movie.h"


Movies::Movies(std::vector<Movie> val_movies) {
    for (const auto &movie : val_movies) {
        movies.push_back(Movie(movie));
    }
}
