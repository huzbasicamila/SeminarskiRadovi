//
// Created by Amila Huzbasic on 11/26/2023.
//

#ifndef SEMINARSKIRADOVI_OSOBA_H
#define SEMINARSKIRADOVI_OSOBA_H
class Osoba {
private:
    int jmbg;

public:
    Osoba(int jmbg, char* ime, char* prezime, int brGodina);
    char ime[20];
    char prezime[50];
    int brGodina;

    void setJMBG();
    int getJMBG();

    void setIme();
    char* getIme();

    void setPrezime();
    char* getPrezime();

    int getBrGodina();
    void setBrGodina();

    void setOsoba();
    ~Osoba()=default;
};
#endif //SEMINARSKIRADOVI_OSOBA_H
