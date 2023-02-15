#include <iostream>
#include <string>

#include "Movie.h"

Movie::Movie(std::string val_name, std::string val_rating, int val_times_wathed) 
    : name(val_name), rating(val_rating), times_watched(val_times_wathed) {
}

Movie::Movie(const Movie &source)
    : Movie{source.name, source.rating, source.times_watched}
{
}

Movie::~Movie(){
}

void Movie::display() const {
    std::cout << "Name: " <<  name << " Rating: " << rating << "Times wathced" << times_watched << std::endl;
}