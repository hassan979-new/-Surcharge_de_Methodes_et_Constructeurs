#include <iostream>
using namespace std;

class CompteBancaire
{
private:
    string nom;
    string code;
    double solde;
    int pin;

public:
    CompteBancaire(string n, string c, int p)
    {
        nom = n;
        code = c;
        pin = p;
        solde = 0.0;
    }

    CompteBancaire(string n, string c, int p, double s)
    {
        nom = n;
        code = c;
        pin = p;
        solde = s;
    }

    void retrait(double montant)
    {
        if (montant <= solde)
        {
            cout << "- Montan " << montant << " est retree de Solde : " << solde << endl
                 << "Compte: " << nom << " [" << code << "]" << endl;
            solde -= montant;
        }
        else
        {
            cout << "le solde n'est pas suffisant!" << endl;
        }
    }
    void retrait(double montant, int p)
    {
        if (montant <= solde && pin == p)
        {
            cout << "- Montan " << montant << " est retree de Solde : " << solde << endl
                 << "Compte: " << nom << " [" << code << "]" << endl;

            solde -= montant;
        }
        else
        {
            cout << "le code pin est incorrecte ou le solde n'est pas suffisant!" << endl;
        }
    }

    void afficherSolde()
    {
        cout << "Compte: " << nom << " [" << code << "]" << endl
             << "Solde: " << solde << endl;
    }
};

int main(int argc, char const *argv[])
{
    CompteBancaire c1("Hassan", "12345", 123);
    CompteBancaire c2("Taha", "13233", 345, 500);

    c1.retrait(400);
    c2.retrait(300, 345);

    c1.afficherSolde();
    c2.afficherSolde();

    return 0;
}
