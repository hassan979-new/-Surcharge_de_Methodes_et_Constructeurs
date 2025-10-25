#include <iostream>
#include <vector>
using namespace std;

class Articles
{
public:
    string nom;
    double prixUnitaire;
    int quantite;
    double tauxTVA;

public:
    Articles(string n, double p, int q = 1, double t = 0.0)
    {
        nom = n;
        prixUnitaire = p;
        quantite = q;
        tauxTVA = t;
    }
};

class Facteur
{

    vector<Articles> articles;

public:
    void ajouterArticle(string n, double p)
    {
        articles.push_back(Articles(n, p));
    }

    void ajouterArticle(string n, double p, int q)
    {
        articles.push_back(Articles(n, p, q));
    }

    void ajouterArticle(string n, double p, int q, double t)
    {
        articles.push_back(Articles(n, p, q, t));
    }

    void afficherTotal()
    {
        double totalHT = 0.0;
        double totalTTC = 0.0;
        for (size_t i = 0; i < articles.size(); i++)
        {
            double montantHT = articles[i].prixUnitaire * articles[i].quantite;
            double montantTTC = montantHT * (1 + articles[i].tauxTVA / 100);

            cout << articles[i].nom << " : " << endl
                 << articles[i].prixUnitaire << " DH x " << articles[i].quantite
                 << " (TVA " << articles[i].tauxTVA << "%) >>> "
                 << montantTTC << " DH TTC" << endl
                 << endl;

            totalHT += montantHT;
            totalTTC += montantTTC;
        }

        cout << "+ Total HT : " << totalHT << " DH" << endl;
        cout << "+ Total TTC : " << totalTTC << " DH" << endl;
    }
};

int main(int argc, char const *argv[])
{
    Facteur f;

    f.ajouterArticle("Stylo", 3.0);
    f.ajouterArticle("Cahier", 7.0, 3);
    f.ajouterArticle("Calcutrice", 110, 2, 10);
    f.afficherTotal();
    return 0;
}
