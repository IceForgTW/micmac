/*Header-MicMac-eLiSe-25/06/2007

    MicMac : Multi Image Correspondances par Methodes Automatiques de Correlation
    eLiSe  : ELements of an Image Software Environnement

    www.micmac.ign.fr

   
    Copyright : Institut Geographique National
    Author : Marc Pierrot Deseilligny
    Contributors : Gregoire Maillet, Didier Boldo.

[1] M. Pierrot-Deseilligny, N. Paparoditis.
    "A multiresolution and optimization-based image matching approach:
    An application to surface reconstruction from SPOT5-HRS stereo imagery."
    In IAPRS vol XXXVI-1/W41 in ISPRS Workshop On Topographic Mapping From Space
    (With Special Emphasis on Small Satellites), Ankara, Turquie, 02-2006.

[2] M. Pierrot-Deseilligny, "MicMac, un lociel de mise en correspondance
    d'images, adapte au contexte geograhique" to appears in 
    Bulletin d'information de l'Institut Geographique National, 2007.

Francais :

   MicMac est un logiciel de mise en correspondance d'image adapte 
   au contexte de recherche en information geographique. Il s'appuie sur
   la bibliotheque de manipulation d'image eLiSe. Il est distibue sous la
   licences Cecill-B.  Voir en bas de fichier et  http://www.cecill.info.


English :

    MicMac is an open source software specialized in image matching
    for research in geographic information. MicMac is built on the
    eLiSe image library. MicMac is governed by the  "Cecill-B licence".
    See below and http://www.cecill.info.

Header-MicMac-eLiSe-25/06/2007*/

#include "Vino.h"


#if (ELISE_X11)

void cAppli_Vino::End()
{
    SaveState();
    std::cout << "   ******************************************\n";
    std::cout << "   *                                        *\n";
    std::cout << "   *    V-isualizer of                      *\n";
    std::cout << "   *    I-mages                             *\n";
    std::cout << "   *    N-ot                                *\n";
    std::cout << "   *    O-versized                          *\n";
    std::cout << "   *                                        *\n";
    std::cout << "   ******************************************\n";

    exit(EXIT_SUCCESS);

}



void  cAppli_Vino::MenuPopUp()
{
    mPopUpCur = 0;
    if ((!mCtrl0) && (!mShift0)) mPopUpCur = mPopUpBase;

    if (mPopUpCur==0)  return;

    mModeGrab=eModeVinoPopUp;

    mPopUpCur->UpCenter(Pt2di(mP0Click));
    mW->grab(*this);
    mCaseCur = mPopUpCur->PopAndGet();


    if (mPopUpCur==mPopUpBase)
    {
        if (mCaseCur== mCaseExit)
        {
            End();
        }

        if (mCaseCur== mCaseZoomRect)
        {
            ZoomRect();
        }
        if (mCaseCur== mCaseEdit)
        {
           EditData();
        }

        if (    (mCaseCur==mCaseHStat)
             || (mCaseCur==mCaseHMinMax)
             || (mCaseCur==mCaseHEqual)
           )
        {
            HistoSetDyn();
        }

       if (mCaseCur==mCaseInterpPpv)
       {
           SetInterpoleMode(eInterpolPPV,true);
       }
       if (mCaseCur==mCaseInterpBilin)
       {
           SetInterpoleMode(eInterpolBiLin,true);
       }
    }
}

void cAppli_Vino::SetInterpoleMode(eModeInterpolation aMode,bool DoRefresh)
{
   mMode = aMode;

   if (mMode==eInterpolPPV)
   {
      mScr->SetAlwaysQuickInZoom(true);
      ZoomBilin() = false;
   }
   else
   {
      mScr->SetAlwaysQuickInZoom(false);
      ZoomBilin() = true;
   }
   SaveState();
   if (DoRefresh)
      Refresh();
}

void cAppli_Vino::Refresh()
{
   mScr->LoadAndVisuIm();
}



CaseGPUMT * cAppli_Vino::CaseBase(const std::string& aName,const Pt2di aNumCase)
{
    Im2D_U_INT1  anIc = Icone(aName,mSzCase,Floutage(),false);
    return new CaseGPUMT (*mPopUpBase,"i",aNumCase, anIc.in_proj());
}

ChoixParmiCaseGPUMT * cAppli_Vino::CaseChoix(ChoixParmiCaseGPUMT * aCasePrec,const std::string& aName,const Pt2di aNumCase,int aNumVal)
{
    Im2D_U_INT1  anIcPos = Icone(aName,mSzCase,Floutage(),false);
    Im2D_U_INT1  anIcNeg = Icone(aName,mSzCase,Floutage(),true);

    return new ChoixParmiCaseGPUMT
               (
                    *mPopUpBase,"1 0",aNumCase,
                    anIcPos.in_proj(),
                    anIcNeg.in_proj(),
                    aNumVal,
                    aCasePrec
               );
}



void cAppli_Vino::InitMenu()
{
    mSzCase        = Pt2di(70,40);
    mPopUpBase = new GridPopUpMenuTransp(*mW,mSzCase,Pt2di(3,3),Pt2di(1,1));

    mCaseExit         = CaseBase("Exit",Pt2di(0,0));
    mCaseZoomRect     = CaseBase("Zoom\nRect",Pt2di(1,0));
    mCaseEdit         = CaseBase("Edit\ndata",Pt2di(2,0));
    mCaseInterpPpv    = CaseChoix(             0,"Interp\nPpv"  ,Pt2di(0,1),0);
    mCaseInterpBilin  = CaseChoix(mCaseInterpPpv,"Interp\nBilin",Pt2di(1,1),1);

    mCaseHStat  = CaseBase("Histo\nStat2",Pt2di(0,2));
    mCaseHMinMax  = CaseBase("Histo\nMinMax",Pt2di(1,2));
    mCaseHEqual   = CaseBase("Histo\nEqual",Pt2di(2,2));


}






#endif



/*Footer-MicMac-eLiSe-25/06/2007

Ce logiciel est un programme informatique servant à la mise en
correspondances d'images pour la reconstruction du relief.

Ce logiciel est régi par la licence CeCILL-B soumise au droit français et
respectant les principes de diffusion des logiciels libres. Vous pouvez
utiliser, modifier et/ou redistribuer ce programme sous les conditions
de la licence CeCILL-B telle que diffusée par le CEA, le CNRS et l'INRIA 
sur le site "http://www.cecill.info".

En contrepartie de l'accessibilité au code source et des droits de copie,
de modification et de redistribution accordés par cette licence, il n'est
offert aux utilisateurs qu'une garantie limitée.  Pour les mêmes raisons,
seule une responsabilité restreinte pèse sur l'auteur du programme,  le
titulaire des droits patrimoniaux et les concédants successifs.

A cet égard  l'attention de l'utilisateur est attirée sur les risques
associés au chargement,  à l'utilisation,  à la modification et/ou au
développement et à la reproduction du logiciel par l'utilisateur étant 
donné sa spécificité de logiciel libre, qui peut le rendre complexe à 
manipuler et qui le réserve donc à des développeurs et des professionnels
avertis possédant  des  connaissances  informatiques approfondies.  Les
utilisateurs sont donc invités à charger  et  tester  l'adéquation  du
logiciel à leurs besoins dans des conditions permettant d'assurer la
sécurité de leurs systèmes et ou de leurs données et, plus généralement, 
à l'utiliser et l'exploiter dans les mêmes conditions de sécurité. 

Le fait que vous puissiez accéder à cet en-tête signifie que vous avez 
pris connaissance de la licence CeCILL-B, et que vous en avez accepté les
termes.
Footer-MicMac-eLiSe-25/06/2007*/
