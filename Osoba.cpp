//
// Created by Amila Huzbasic on 11/26/2023.
//
#include <iostream>
#include <cstring>
#include "Osoba.h"


Osoba::Osoba(int jmbg, char *ime, char *prezime, int brGodina) {
    this->jmbg=2008001195008;
    strcpy_s(this->ime, "Amila");
    strcpy_s(this->prezime, "Huzbasic");
    this->brGodina=22;

}

void Osoba::setJMBG() {
    std::cout<<"Unesi JMBG: ";
    std::cin>>jmbg;
    std::cin.ignore();
}

int Osoba::getJMBG() {
    return this->jmbg;
}

void Osoba::setIme() {
    std::cout<<"Unesi ime: ";
    std::cin.getline(this->ime, 20);
}

char* Osoba::getIme() {
    return this->ime;
}

void Osoba::setPrezime() {
    std::cout<<"Unesi prezime: ";
    std::cin.getline(this->prezime, 50);

}
char* Osoba::getPrezime() {
    return this->prezime;
}

void Osoba::setBrGodina() {
    std::cout<<"Unesi broj godina: ";
    std::cin>> this->brGodina;
    std::cin.ignore();
}

int Osoba::getBrGodina() {
    return this->brGodina;
}

void Osoba::setOsoba() {
    setJMBG();
    setIme();
    setPrezime();
    setBrGodina();
}