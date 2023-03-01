#include <iostream>
using namespace std;

class Auto
{
public:
    void tipoAuto()
    {
        cout << "Existen diferentes tipos de autos:" << endl;
    }
};
class Ferrari : public Auto
{
public:
    void tipoAuto()
    {
        cout << "Existe un auto denominado Ferrari" << endl;
    }
};
class Camaro : public Auto
{
public:
    void tipoAuto()
    {
        cout << "Existe un auto denominado Camaro" << endl;
    }
};
int main()
{
    Auto mAuto;
    Ferrari mFerrari;
    Camaro mCamaro;

    mAuto.tipoAuto();
    mFerrari.tipoAuto();
    mCamaro.tipoAuto();

    return 0;
}
