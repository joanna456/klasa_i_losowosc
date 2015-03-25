//---------------------------------------------------------------------------


#pragma hdrstop

#include "ManagerGry.h"

//---------------------------------------------------------------------------
#pragma package(smart_init)
//---------------------------------------------------------------------------
DaneGrafikiPlanszy DaneGrafiki;
TImage ** KontrolkiGrafiki;

ManagerGry::ManagerGry()
{
        DaneGrafiki = DaneGrafikiPlanszy();
        DaneGrafiki.WczytajDaneGrafiki();                                          

        KontrolkiGrafiki = new TImage*[DaneGrafiki.IloscZmiennychGrafik + 1];
}

ManagerGry::~ManagerGry()
{
        delete [] KontrolkiGrafiki;
}

void ManagerGry::WyswietlGrafike(TWinControl * komponentNadrzedny)
{
        KontrolkiGrafiki[0] = new TImage(komponentNadrzedny);
        komponentNadrzedny->InsertComponent(KontrolkiGrafiki[0]);
        KontrolkiGrafiki[0]->Parent = komponentNadrzedny;
        KontrolkiGrafiki[0]->Width = DaneGrafiki.GrafikaTla.Rozmiar.SzerokoscX;
        KontrolkiGrafiki[0]->Height = DaneGrafiki.GrafikaTla.Rozmiar.WysokoscY;
        KontrolkiGrafiki[0]->Left = DaneGrafiki.GrafikaTla.Pozycja.PunktX;
        KontrolkiGrafiki[0]->Top = DaneGrafiki.GrafikaTla.Pozycja.PunktY;
        KontrolkiGrafiki[0]->Transparent = true;
        KontrolkiGrafiki[0]->Picture->LoadFromFile(DaneGrafiki.GrafikaTla.SciezkaGrafiki);

        KontrolkiGrafiki[1] = new TImage(komponentNadrzedny);
        komponentNadrzedny->InsertComponent(KontrolkiGrafiki[1]);
        KontrolkiGrafiki[1]->Parent = komponentNadrzedny;
        KontrolkiGrafiki[1]->Width = DaneGrafiki.ZmienneElementyGrafiki[0].Rozmiar.SzerokoscX;
        KontrolkiGrafiki[1]->Height = DaneGrafiki.ZmienneElementyGrafiki[0].Rozmiar.WysokoscY;
        KontrolkiGrafiki[1]->Left = DaneGrafiki.ZmienneElementyGrafiki[0].Pozycja.PunktX;
        KontrolkiGrafiki[1]->Top = DaneGrafiki.ZmienneElementyGrafiki[0].Pozycja.PunktY;
        KontrolkiGrafiki[1]->Transparent = true;
        KontrolkiGrafiki[1]->Picture->LoadFromFile(
                DaneGrafiki.ZmienneElementyGrafiki[0].SciezkaGrafiki);

        KontrolkiGrafiki[2] = new TImage(komponentNadrzedny);
        komponentNadrzedny->InsertComponent(KontrolkiGrafiki[2]);
        KontrolkiGrafiki[2]->Parent = komponentNadrzedny;
        KontrolkiGrafiki[2]->Width = DaneGrafiki.ZmienneElementyGrafiki[1].Rozmiar.SzerokoscX;
        KontrolkiGrafiki[2]->Height = DaneGrafiki.ZmienneElementyGrafiki[1].Rozmiar.WysokoscY;
        KontrolkiGrafiki[2]->Left = DaneGrafiki.ZmienneElementyGrafiki[1].Pozycja.PunktX;
        KontrolkiGrafiki[2]->Top = DaneGrafiki.ZmienneElementyGrafiki[1].Pozycja.PunktY;
        KontrolkiGrafiki[2]->Transparent = true;
        KontrolkiGrafiki[2]->Picture->LoadFromFile(
                DaneGrafiki.ZmienneElementyGrafiki[1].SciezkaGrafiki);

        KontrolkiGrafiki[3]= new TImage(komponentNadrzedny);
        komponentNadrzedny->InsertComponent(KontrolkiGrafiki[3]);
        KontrolkiGrafiki[3]->Parent = komponentNadrzedny;
        KontrolkiGrafiki[3]->Width = DaneGrafiki.ZmienneElementyGrafiki[2].Rozmiar.SzerokoscX;
        KontrolkiGrafiki[3]->Height = DaneGrafiki.ZmienneElementyGrafiki[2].Rozmiar.WysokoscY;
        KontrolkiGrafiki[3]->Left = DaneGrafiki.ZmienneElementyGrafiki[2].Pozycja.PunktX;
        KontrolkiGrafiki[3]->Top = DaneGrafiki.ZmienneElementyGrafiki[2].Pozycja.PunktY;
        KontrolkiGrafiki[3]->Transparent = true;
        KontrolkiGrafiki[3]->Picture->LoadFromFile(
                DaneGrafiki.ZmienneElementyGrafiki[2].SciezkaGrafiki);

        KontrolkiGrafiki[4] = new TImage(komponentNadrzedny);
        komponentNadrzedny->InsertComponent(KontrolkiGrafiki[4]);
        KontrolkiGrafiki[4]->Parent = komponentNadrzedny;
        KontrolkiGrafiki[4]->Width = DaneGrafiki.ZmienneElementyGrafiki[3].Rozmiar.SzerokoscX;
        KontrolkiGrafiki[4]->Height = DaneGrafiki.ZmienneElementyGrafiki[3].Rozmiar.WysokoscY;
        KontrolkiGrafiki[4]->Left = DaneGrafiki.ZmienneElementyGrafiki[3].Pozycja.PunktX;
        KontrolkiGrafiki[4]->Top = DaneGrafiki.ZmienneElementyGrafiki[3].Pozycja.PunktY;
        KontrolkiGrafiki[4]->Transparent = true;
        KontrolkiGrafiki[4]->Picture->LoadFromFile(
                DaneGrafiki.ZmienneElementyGrafiki[3].SciezkaGrafiki);
}

void ManagerGry::PodmienObrazek(int numerObrazka)
{
        for (int i = 1; i < DaneGrafiki.IloscZmiennychGrafik + 1; i++)
        {
                KontrolkiGrafiki[i]->Visible = false;
        }
        KontrolkiGrafiki[numerObrazka]->Visible = true;
}

void ManagerGry::GenerujSekwencje()
{
        randomize();
        for(int i=0; i<30; i++)
        {
                int wylosowanyNumerObrazka = random(DaneGrafiki.IloscZmiennychGrafik);
                PodmienObrazek(wylosowanyNumerObrazka);
                Application->ProcessMessages();
                Sleep(500);
        }



}


