#ifndef _MOVIE_
#define _MOVIE_


#include <string>

class Movie {
private:
    std::string name;
    std::string rating;
    int times_watched = 0;
public:
    Movie(std::string name, std::string rating, int times_watched); //contructor prototype

    Movie(const Movie &source); //copy contructor prototype

    ~Movie(); //destructor prototype

    void set_name(std::string name) {this->name = name; }
    std::string get_name() const {return name;}

    void set_rating(std::string rating) {this->rating = rating; }
    std::string get_rating() const {return rating;}

    void set_watched (int watched) {this->times_watched = watched; }
    int get_watched() const {return times_watched; }

    void increment_watched() {++times_watched; }

    void display() const;


};

#endif