#include <iostream>
#include <thread>
#include <math.h>


class Dzialo {

private:
    int x;
    int y;
    double kat;
    int vop;
    int vol;
    int r;

public:
    Dzialo(int sx, int sy, double skat, int svop, int svol, int sr);
    void obrotPrawo();
    void obrotLewo();
    void strzel();
    int getX() {
        return x;
    }
    int getY() {
        return y;
    }
    int getKat() {
        return kat;
    }
};


void Dzialo::obrotPrawo() {
    kat = kat + vop;
}

void Dzialo::obrotLewo() {
    kat = kat + vol;
}



class pocisk{
private:
    double kat;
    int v;
    int x;
    int y;
    int vx;
    int vy;
public:
    pocisk(double skat, int v, int sx, int sy, int svx, int svy);
    void kierunek();
    void przesun();
    int getX() {
        return x;
    }
    int getY() {
        return y;
    }
    int getKat() {
        return kat;
    }
};
pocisk::pocisk(double skat, int v, int sx, int sy, int svx, int svy) {

}
void pocisk::kierunek(){
    vx = std::cos(kat) * v;
    vx = std::sin(kat) * v;
}

int main() {

    return 0;
}