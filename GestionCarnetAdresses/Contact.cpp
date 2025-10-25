#include <iostream>
using namespace std;

class Conatct
{
private:
    string nom;
    string telephone;
    string email;

public:
    Conatct(string n)
    {
        nom = n;
        telephone = "Auccun";
        email = "Auccun";
    }

    Conatct(string n, string t)
    {
        nom = n;
        telephone = t;
        email = "Auccun";
    }

    Conatct(string n, string t, string e)
    {
        nom = n;
        telephone = t;
        email = e;
    }

    void afficher()
    {
        cout << "<<Contact>>" << endl
             << "Le nom : " << nom << endl
             << "Telephone : " << telephone << endl
             << "Email : " << email << endl;
    }

    ~Conatct()
    {
        cout << ("fin") << endl;
    }
};

int main(int argc, char const *argv[])
{
    Conatct c1("Hassan");
    Conatct c2("Taha", "0604068755");
    Conatct c3("Oussam", "0666040150", "Oussam@gmail.com");

    c1.afficher();
    c2.afficher();
    c3.afficher();

    return 0;
}
