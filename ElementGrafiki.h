//---------------------------------------------------------------------------

#ifndef ElementGrafikiH
#define ElementGrafikiH
//---------------------------------------------------------------------------
#include <Classes.hpp>
#include "RozmiarGrafiki.h"
#include "PozycjaGrafiki.h"
//---------------------------------------------------------------------------
class ElementGrafiki {
public:
        ElementGrafiki();
        ElementGrafiki(int id,
                int szerokoscX, int wysokoscY,
                int pozycjaX, int pozycjaY,
                AnsiString sciezkaGrafiki);
                
        ~ElementGrafiki();

        int Id;
        RozmiarGrafiki Rozmiar;
        PozycjaGrafiki Pozycja;
        AnsiString SciezkaGrafiki;
};
#endif
