#include <iostream>
#include <stdio.h>
#include <math.h>



class Vec
{
private:
    int x;
    int y;
    int z;

public:
    Vec() {
        x = 0;
        y = 0;
        z = 0;
    }
    Vec(int x1, int y1, int z1) {
        x = x1;
        y = y1;
        z = z1;
    }
    Vec(int x1, int y1) {
        x = x1;
        y = y1;
        z = 0;
    }
    ~Vec() {}
    void Normalize()
    {
        float denom;
        int a = x * x + y * y + z * z;
        denom = sqrt(a);
        std::cout << x / denom;
        std::cout << " " << y / denom;
        std::cout << " " << z / denom;
    }
    void Zero()
    {
        x = 0;
        y = 0;
        z = 0;
    }
    void IsZero()
    {
        bool isZero;
        isZero = false;
        if (x == 0 && y == 0 && z == 0)
        {
            isZero = true;
            std::cout << "true";
        }
        else
        {
            isZero = false;
            std::cout << "false";
        }

    }
    void DistanceTo(Vec* vec2/*, const Vec**/)
    {
        float res;
        int sq = ((vec2->x * vec2->x) + (x * x) - 2 * vec2->x * x) + ((vec2->y * vec2->y) + (y * y) - 2 * vec2->y * y) + ((vec2->z * vec2->z) + (z * z) - 2 * vec2->z * z);
        res = sqrt(sq);
        std::cout << std::endl << "Distance: " << res;
    }
    Vec operator+(const Vec& veca) const
    {
        Vec resul;
        resul.x = this->x + veca.x;
        resul.y = this->y + veca.y;
        resul.z = this->z + veca.z;

        std::cout << " " << resul.x;
        std::cout << " " << resul.y;
        std::cout << " " << resul.z;

        return resul;
    }

    Vec operator-(const Vec& veca) const
    {
        Vec resul;
        resul.x = this->x - veca.x;
        resul.y = this->y - veca.y;
        resul.z = this->z - veca.z;

        std::cout << " " << resul.x;
        std::cout << " " << resul.y;
        std::cout << " " << resul.z;

        return resul;
    }

    bool operator+=(const Vec& veca) const
    {
        return this->x >= veca.x && this->y >= veca.y && this->z >= veca.z;
    }

    bool operator-=(const Vec& veca) const
    {
        return this->x <= veca.x && this->y <= veca.y && this->z <= veca.z;
    }

    Vec& operator=(const Vec& veca)
    {
        this->x = veca.x;
        this->y = veca.y;
        this->z = veca.z;
    }

    bool operator==(const Vec& veca) const
    {
        return  this->x == veca.x && this->y == veca.y && this->z == veca.z;
    }
};


int main() {

    Vec v3();
    Vec ve3d(1, 2, 3);
    Vec v2d(4, 5);
    Vec ve3d2(6, 7, 8);

    ve3d.Normalize();
    ////////////Distance///////////////
    ve3d.DistanceTo(&ve3d2);


    std::cout << std::endl;
    ///////IsZero's funcions/////////////////
    ve3d.IsZero();

    std::cout << std::endl;
    ///////Zero's funcions/////////////////
    ve3d.Zero();
    ve3d.IsZero();




    return 0;



}