#define CATCH_CONFIG_MAIN // this tells catch to provide a main() - only do this in one cpp file 
#include "catch.hpp"
#include "functions_to_implement.cpp"
#include <vector>
using namespace std; 

TEST_CASE ("Factroials are computed.", "[factorial]")
{
    // REQUIRE(Factorial(0) == 0); // checks if this is true or false and when it's false it stops the entire thing 
    REQUIRE(Factorial(1) == 1); 
    REQUIRE(Factorial(2) == 2); 
    REQUIRE(Factorial(3) == 6); 
    REQUIRE(Factorial(10) == 3628800); 
}

TEST_CASE("Incrementing values in integer vector", "[VectorPlusN]")
{
    vector<int> v{1,2,3,4,5,6,7,8,9,10};

    SECTION("checking with adding a positive number")
    {
        int n = 5; 
        int random = rand()%v.size(); 
        vector <int> res = VectorPlusN(v,5);
        REQUIRE(v.size() == res.size());
        REQUIRE(res[0] == 6);
        REQUIRE(res[v.size() - 1] == 15);
        REQUIRE(res[random] == v[random]+n);
    }

    SECTION("checking with adding a negative number")
    {
        int n = -5; 
        int random = rand()%v.size(); 
        vector <int> res = VectorPlusN(v,-5);
        REQUIRE(v.size() == res.size());
        REQUIRE(res[0] == -4);
        REQUIRE(res[v.size() - 1] == 5);
        REQUIRE(res[random] == v[random]+n);
    }

}

TEST_CASE("Multiplying values in integer vector", "[VectorMultiplyN]")
{
    vector<int> v{1,2,3,4,5,6,7,8,9,10};

    SECTION("checking with multiplying a positive number")
    {
        int n = 5; 
        int random = rand()%v.size(); 
        vector <int> res = VectorTimesN(v,5);
        REQUIRE(v.size() == res.size());
        REQUIRE(res[0] == 5);
        REQUIRE(res[v.size() - 1] == 50);
        REQUIRE(res[random] == v[random]*n);
    }

    SECTION("checking with multiplying a negative number")
    {
        int n = -5; 
        int random = rand()%v.size(); 
        vector <int> res = VectorTimesN(v,-5);
        REQUIRE(v.size() == res.size());
        REQUIRE(res[0] == -5);
        REQUIRE(res[v.size() - 1] == -50);
        REQUIRE(res[random] == v[random]*n);
    }

}