#include "ZBufferRaster.h"

cTri2D::cTri2D(Pt2dr P1, Pt2dr P2, Pt2dr P3):
    mP1 (P1),
    mP2 (P2),
    mP3 (P3),
    mIsInCam(true)
{
}

cTri2D::cTri2D():
    mP1 (Pt2dr(0.0,0.0)),
    mP2 (Pt2dr(0.0,0.0)),
    mP3 (Pt2dr(0.0,0.0)),
    mIsInCam(false)
{}

cTri2D cTri2D::Default()
{
   return cTri2D();
}

Pt3dr cTri2D::profOfPixel(Pt2dr ptInTri, cTri3D aTri3D, CamStenope * aCam)
{
    //comme le method ptsInTri2Dto3D in triangle.cpp
    Pt3dr vec_I=aTri3D.P2() - aTri3D.P1();
    Pt3dr vec_J=aTri3D.P3() - aTri3D.P1();

    Pt2dr vec_i = mP2 - mP1;
    Pt2dr vec_j = mP3 - mP1;

    Pt2dr aP = ptInTri - mP1;

    double alpha = (aP.x*vec_j.y-aP.y*vec_j.x)/(vec_i.x*vec_j.y-vec_j.x*vec_i.y);
    double beta = (aP.y-alpha*vec_i.y)/vec_j.y;

    Pt3dr pts3DInTri;
    pts3DInTri.x = alpha*vec_I.x + beta*vec_J.x;
    pts3DInTri.y = alpha*vec_I.y + beta*vec_J.y;
    pts3DInTri.z = alpha*vec_I.z + beta*vec_J.z;
    return( pts3DInTri + aTri3D.P1() );

}
