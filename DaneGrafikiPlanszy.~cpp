//---------------------------------------------------------------------------

#include <vcl.h>
#pragma hdrstop

#include "DaneGrafikiPlanszy.h"
#pragma package(smart_init)
//---------------------------------------------------------------------------



DaneGrafikiPlanszy::DaneGrafikiPlanszy()
{
        IloscZmiennychGrafik = 0;
}

DaneGrafikiPlanszy::~DaneGrafikiPlanszy()
{
//        delete [] ZmienneElementyGrafiki;
}

void DaneGrafikiPlanszy::WczytajDaneGrafikiTla()
{
        AnsiString sciezkaGrafiki = "images/tlo.jpg";
        GrafikaTla = ElementGrafiki(-1, 1000, 507, 0, 0, sciezkaGrafiki);
}

void DaneGrafikiPlanszy::WczytajDaneZmiennychGrafik()
{
        IloscZmiennychGrafik = 4;
        
        ZmienneElementyGrafiki
                = new ElementGrafiki[IloscZmiennychGrafik];

        AnsiString sciezkaGrafiki1 = "images/p1a.bmp";
        ZmienneElementyGrafiki[0] = ElementGrafiki(1,
                146, 260,
                56, 204,
                sciezkaGrafiki1);

        AnsiString sciezkaGrafiki2 = "images/p2a.bmp";
        ZmienneElementyGrafiki[1] = ElementGrafiki(2,
                165, 130,
                303, 127,
                sciezkaGrafiki2);

        AnsiString sciezkaGrafiki3 = "images/p3a.bmp";
        ZmienneElementyGrafiki[2] = ElementGrafiki(3,
                143, 140,
                550, 127,
                sciezkaGrafiki3);

        AnsiString sciezkaGrafiki4 = "images/p4a.bmp";
        ZmienneElementyGrafiki[3] = ElementGrafiki(4,
                117, 210,
                804, 223,
                sciezkaGrafiki4);
}

void DaneGrafikiPlanszy::WczytajDaneGrafiki()
{
      WczytajDaneGrafikiTla();
      WczytajDaneZmiennychGrafik();
}
