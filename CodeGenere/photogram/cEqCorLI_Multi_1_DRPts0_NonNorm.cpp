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
// File Automatically generated by eLiSe

#include "general/all.h"
#include "private/all.h"
#include "cEqCorLI_Multi_1_DRPts0_NonNorm.h"


cEqCorLI_Multi_1_DRPts0_NonNorm::cEqCorLI_Multi_1_DRPts0_NonNorm():
    cElCompiledFonc(1)
{
   AddIntRef (cIncIntervale("OrA",0,6));
   AddIntRef (cIncIntervale("OrB",6,12));
   AddIntRef (cIncIntervale("OrPts",12,18));
   Close(false);
}



void cEqCorLI_Multi_1_DRPts0_NonNorm::ComputeVal()
{
   double tmp0_ = mCompCoord[12];
   double tmp1_ = cos(tmp0_);
   double tmp2_ = mCompCoord[13];
   double tmp3_ = mCompCoord[14];
   double tmp4_ = sin(tmp0_);
   double tmp5_ = -(tmp4_);
   double tmp6_ = sin(tmp3_);
   double tmp7_ = sin(tmp2_);
   double tmp8_ = -(tmp7_);
   double tmp9_ = tmp1_*tmp8_;
   double tmp10_ = cos(tmp3_);
   double tmp11_ = mCompCoord[0];
   double tmp12_ = mCompCoord[1];
   double tmp13_ = cos(tmp12_);
   double tmp14_ = cos(tmp2_);
   double tmp15_ = -(tmp6_);
   double tmp16_ = tmp4_*tmp8_;
   double tmp17_ = sin(tmp11_);
   double tmp18_ = cos(tmp11_);
   double tmp19_ = sin(tmp12_);
   double tmp20_ = mCompCoord[2];
   double tmp21_ = tmp1_*tmp14_;
   double tmp22_ = tmp21_*mLocP3X_A_0;
   double tmp23_ = tmp5_*tmp10_;
   double tmp24_ = tmp9_*tmp6_;
   double tmp25_ = tmp23_+tmp24_;
   double tmp26_ = (tmp25_)*mLocP3Y_A_0;
   double tmp27_ = tmp22_+tmp26_;
   double tmp28_ = tmp5_*tmp15_;
   double tmp29_ = tmp9_*tmp10_;
   double tmp30_ = tmp28_+tmp29_;
   double tmp31_ = (tmp30_)*mLocP3Z_A_0;
   double tmp32_ = tmp27_+tmp31_;
   double tmp33_ = mCompCoord[15];
   double tmp34_ = tmp32_+tmp33_;
   double tmp35_ = mCompCoord[3];
   double tmp36_ = (tmp34_)-tmp35_;
   double tmp37_ = sin(tmp20_);
   double tmp38_ = -(tmp37_);
   double tmp39_ = -(tmp19_);
   double tmp40_ = cos(tmp20_);
   double tmp41_ = tmp4_*tmp14_;
   double tmp42_ = tmp41_*mLocP3X_A_0;
   double tmp43_ = tmp1_*tmp10_;
   double tmp44_ = tmp16_*tmp6_;
   double tmp45_ = tmp43_+tmp44_;
   double tmp46_ = (tmp45_)*mLocP3Y_A_0;
   double tmp47_ = tmp42_+tmp46_;
   double tmp48_ = tmp1_*tmp15_;
   double tmp49_ = tmp16_*tmp10_;
   double tmp50_ = tmp48_+tmp49_;
   double tmp51_ = (tmp50_)*mLocP3Z_A_0;
   double tmp52_ = tmp47_+tmp51_;
   double tmp53_ = mCompCoord[16];
   double tmp54_ = tmp52_+tmp53_;
   double tmp55_ = mCompCoord[4];
   double tmp56_ = (tmp54_)-tmp55_;
   double tmp57_ = tmp7_*mLocP3X_A_0;
   double tmp58_ = tmp14_*tmp6_;
   double tmp59_ = tmp58_*mLocP3Y_A_0;
   double tmp60_ = tmp57_+tmp59_;
   double tmp61_ = tmp14_*tmp10_;
   double tmp62_ = tmp61_*mLocP3Z_A_0;
   double tmp63_ = tmp60_+tmp62_;
   double tmp64_ = mCompCoord[17];
   double tmp65_ = tmp63_+tmp64_;
   double tmp66_ = mCompCoord[5];
   double tmp67_ = (tmp65_)-tmp66_;
   double tmp68_ = -(tmp17_);
   double tmp69_ = tmp18_*tmp39_;
   double tmp70_ = tmp17_*tmp39_;
   double tmp71_ = tmp68_*tmp38_;
   double tmp72_ = tmp69_*tmp40_;
   double tmp73_ = tmp71_+tmp72_;
   double tmp74_ = (tmp73_)*(tmp36_);
   double tmp75_ = tmp18_*tmp38_;
   double tmp76_ = tmp70_*tmp40_;
   double tmp77_ = tmp75_+tmp76_;
   double tmp78_ = (tmp77_)*(tmp56_);
   double tmp79_ = tmp74_+tmp78_;
   double tmp80_ = tmp13_*tmp40_;
   double tmp81_ = tmp80_*(tmp67_);
   double tmp82_ = tmp79_+tmp81_;
   double tmp83_ = mCompCoord[6];
   double tmp84_ = mCompCoord[7];
   double tmp85_ = cos(tmp84_);
   double tmp86_ = sin(tmp83_);
   double tmp87_ = cos(tmp83_);
   double tmp88_ = sin(tmp84_);
   double tmp89_ = mCompCoord[8];
   double tmp90_ = tmp21_*mLocP3X_B_0;
   double tmp91_ = (tmp25_)*mLocP3Y_B_0;
   double tmp92_ = tmp90_+tmp91_;
   double tmp93_ = (tmp30_)*mLocP3Z_B_0;
   double tmp94_ = tmp92_+tmp93_;
   double tmp95_ = tmp94_+tmp33_;
   double tmp96_ = mCompCoord[9];
   double tmp97_ = (tmp95_)-tmp96_;
   double tmp98_ = sin(tmp89_);
   double tmp99_ = -(tmp98_);
   double tmp100_ = -(tmp88_);
   double tmp101_ = cos(tmp89_);
   double tmp102_ = tmp41_*mLocP3X_B_0;
   double tmp103_ = (tmp45_)*mLocP3Y_B_0;
   double tmp104_ = tmp102_+tmp103_;
   double tmp105_ = (tmp50_)*mLocP3Z_B_0;
   double tmp106_ = tmp104_+tmp105_;
   double tmp107_ = tmp106_+tmp53_;
   double tmp108_ = mCompCoord[10];
   double tmp109_ = (tmp107_)-tmp108_;
   double tmp110_ = tmp7_*mLocP3X_B_0;
   double tmp111_ = tmp58_*mLocP3Y_B_0;
   double tmp112_ = tmp110_+tmp111_;
   double tmp113_ = tmp61_*mLocP3Z_B_0;
   double tmp114_ = tmp112_+tmp113_;
   double tmp115_ = tmp114_+tmp64_;
   double tmp116_ = mCompCoord[11];
   double tmp117_ = (tmp115_)-tmp116_;
   double tmp118_ = -(tmp86_);
   double tmp119_ = tmp87_*tmp100_;
   double tmp120_ = tmp86_*tmp100_;
   double tmp121_ = tmp118_*tmp99_;
   double tmp122_ = tmp119_*tmp101_;
   double tmp123_ = tmp121_+tmp122_;
   double tmp124_ = (tmp123_)*(tmp97_);
   double tmp125_ = tmp87_*tmp99_;
   double tmp126_ = tmp120_*tmp101_;
   double tmp127_ = tmp125_+tmp126_;
   double tmp128_ = (tmp127_)*(tmp109_);
   double tmp129_ = tmp124_+tmp128_;
   double tmp130_ = tmp85_*tmp101_;
   double tmp131_ = tmp130_*(tmp117_);
   double tmp132_ = tmp129_+tmp131_;

  mVal[0] = (mLocCste_A_0+mLocCoeffU_A_0*((tmp18_*tmp13_*(tmp36_)+tmp17_*tmp13_*(tmp56_)+tmp19_*(tmp67_))/(tmp82_))+mLocCoeffV_A_0*(((tmp68_*tmp40_+tmp69_*tmp37_)*(tmp36_)+(tmp18_*tmp40_+tmp70_*tmp37_)*(tmp56_)+tmp13_*tmp37_*(tmp67_))/(tmp82_)))-(mLocCste_B_0+mLocCoeffU_B_0*((tmp87_*tmp85_*(tmp97_)+tmp86_*tmp85_*(tmp109_)+tmp88_*(tmp117_))/(tmp132_))+mLocCoeffV_B_0*(((tmp118_*tmp101_+tmp119_*tmp98_)*(tmp97_)+(tmp87_*tmp101_+tmp120_*tmp98_)*(tmp109_)+tmp85_*tmp98_*(tmp117_))/(tmp132_)));

}


void cEqCorLI_Multi_1_DRPts0_NonNorm::ComputeValDeriv()
{
   double tmp0_ = mCompCoord[12];
   double tmp1_ = cos(tmp0_);
   double tmp2_ = mCompCoord[13];
   double tmp3_ = mCompCoord[14];
   double tmp4_ = sin(tmp0_);
   double tmp5_ = -(tmp4_);
   double tmp6_ = sin(tmp3_);
   double tmp7_ = sin(tmp2_);
   double tmp8_ = -(tmp7_);
   double tmp9_ = tmp1_*tmp8_;
   double tmp10_ = cos(tmp3_);
   double tmp11_ = mCompCoord[0];
   double tmp12_ = mCompCoord[1];
   double tmp13_ = cos(tmp12_);
   double tmp14_ = cos(tmp2_);
   double tmp15_ = -(tmp6_);
   double tmp16_ = tmp4_*tmp8_;
   double tmp17_ = sin(tmp11_);
   double tmp18_ = cos(tmp11_);
   double tmp19_ = sin(tmp12_);
   double tmp20_ = mCompCoord[2];
   double tmp21_ = tmp1_*tmp14_;
   double tmp22_ = tmp21_*mLocP3X_A_0;
   double tmp23_ = tmp5_*tmp10_;
   double tmp24_ = tmp9_*tmp6_;
   double tmp25_ = tmp23_+tmp24_;
   double tmp26_ = (tmp25_)*mLocP3Y_A_0;
   double tmp27_ = tmp22_+tmp26_;
   double tmp28_ = tmp5_*tmp15_;
   double tmp29_ = tmp9_*tmp10_;
   double tmp30_ = tmp28_+tmp29_;
   double tmp31_ = (tmp30_)*mLocP3Z_A_0;
   double tmp32_ = tmp27_+tmp31_;
   double tmp33_ = mCompCoord[15];
   double tmp34_ = tmp32_+tmp33_;
   double tmp35_ = mCompCoord[3];
   double tmp36_ = (tmp34_)-tmp35_;
   double tmp37_ = sin(tmp20_);
   double tmp38_ = -(tmp37_);
   double tmp39_ = -(tmp19_);
   double tmp40_ = cos(tmp20_);
   double tmp41_ = tmp4_*tmp14_;
   double tmp42_ = tmp41_*mLocP3X_A_0;
   double tmp43_ = tmp1_*tmp10_;
   double tmp44_ = tmp16_*tmp6_;
   double tmp45_ = tmp43_+tmp44_;
   double tmp46_ = (tmp45_)*mLocP3Y_A_0;
   double tmp47_ = tmp42_+tmp46_;
   double tmp48_ = tmp1_*tmp15_;
   double tmp49_ = tmp16_*tmp10_;
   double tmp50_ = tmp48_+tmp49_;
   double tmp51_ = (tmp50_)*mLocP3Z_A_0;
   double tmp52_ = tmp47_+tmp51_;
   double tmp53_ = mCompCoord[16];
   double tmp54_ = tmp52_+tmp53_;
   double tmp55_ = mCompCoord[4];
   double tmp56_ = (tmp54_)-tmp55_;
   double tmp57_ = tmp7_*mLocP3X_A_0;
   double tmp58_ = tmp14_*tmp6_;
   double tmp59_ = tmp58_*mLocP3Y_A_0;
   double tmp60_ = tmp57_+tmp59_;
   double tmp61_ = tmp14_*tmp10_;
   double tmp62_ = tmp61_*mLocP3Z_A_0;
   double tmp63_ = tmp60_+tmp62_;
   double tmp64_ = mCompCoord[17];
   double tmp65_ = tmp63_+tmp64_;
   double tmp66_ = mCompCoord[5];
   double tmp67_ = (tmp65_)-tmp66_;
   double tmp68_ = -(tmp17_);
   double tmp69_ = tmp18_*tmp39_;
   double tmp70_ = tmp17_*tmp39_;
   double tmp71_ = tmp68_*tmp38_;
   double tmp72_ = tmp69_*tmp40_;
   double tmp73_ = tmp71_+tmp72_;
   double tmp74_ = (tmp73_)*(tmp36_);
   double tmp75_ = tmp18_*tmp38_;
   double tmp76_ = tmp70_*tmp40_;
   double tmp77_ = tmp75_+tmp76_;
   double tmp78_ = (tmp77_)*(tmp56_);
   double tmp79_ = tmp74_+tmp78_;
   double tmp80_ = tmp13_*tmp40_;
   double tmp81_ = tmp80_*(tmp67_);
   double tmp82_ = tmp79_+tmp81_;
   double tmp83_ = mCompCoord[6];
   double tmp84_ = mCompCoord[7];
   double tmp85_ = cos(tmp84_);
   double tmp86_ = sin(tmp83_);
   double tmp87_ = cos(tmp83_);
   double tmp88_ = sin(tmp84_);
   double tmp89_ = mCompCoord[8];
   double tmp90_ = tmp21_*mLocP3X_B_0;
   double tmp91_ = (tmp25_)*mLocP3Y_B_0;
   double tmp92_ = tmp90_+tmp91_;
   double tmp93_ = (tmp30_)*mLocP3Z_B_0;
   double tmp94_ = tmp92_+tmp93_;
   double tmp95_ = tmp94_+tmp33_;
   double tmp96_ = mCompCoord[9];
   double tmp97_ = (tmp95_)-tmp96_;
   double tmp98_ = sin(tmp89_);
   double tmp99_ = -(tmp98_);
   double tmp100_ = -(tmp88_);
   double tmp101_ = cos(tmp89_);
   double tmp102_ = tmp41_*mLocP3X_B_0;
   double tmp103_ = (tmp45_)*mLocP3Y_B_0;
   double tmp104_ = tmp102_+tmp103_;
   double tmp105_ = (tmp50_)*mLocP3Z_B_0;
   double tmp106_ = tmp104_+tmp105_;
   double tmp107_ = tmp106_+tmp53_;
   double tmp108_ = mCompCoord[10];
   double tmp109_ = (tmp107_)-tmp108_;
   double tmp110_ = tmp7_*mLocP3X_B_0;
   double tmp111_ = tmp58_*mLocP3Y_B_0;
   double tmp112_ = tmp110_+tmp111_;
   double tmp113_ = tmp61_*mLocP3Z_B_0;
   double tmp114_ = tmp112_+tmp113_;
   double tmp115_ = tmp114_+tmp64_;
   double tmp116_ = mCompCoord[11];
   double tmp117_ = (tmp115_)-tmp116_;
   double tmp118_ = -(tmp86_);
   double tmp119_ = tmp87_*tmp100_;
   double tmp120_ = tmp86_*tmp100_;
   double tmp121_ = tmp118_*tmp99_;
   double tmp122_ = tmp119_*tmp101_;
   double tmp123_ = tmp121_+tmp122_;
   double tmp124_ = (tmp123_)*(tmp97_);
   double tmp125_ = tmp87_*tmp99_;
   double tmp126_ = tmp120_*tmp101_;
   double tmp127_ = tmp125_+tmp126_;
   double tmp128_ = (tmp127_)*(tmp109_);
   double tmp129_ = tmp124_+tmp128_;
   double tmp130_ = tmp85_*tmp101_;
   double tmp131_ = tmp130_*(tmp117_);
   double tmp132_ = tmp129_+tmp131_;
   double tmp133_ = tmp18_*tmp13_;
   double tmp134_ = tmp133_*(tmp36_);
   double tmp135_ = tmp17_*tmp13_;
   double tmp136_ = tmp135_*(tmp56_);
   double tmp137_ = tmp134_+tmp136_;
   double tmp138_ = tmp19_*(tmp67_);
   double tmp139_ = tmp137_+tmp138_;
   double tmp140_ = -(1);
   double tmp141_ = tmp140_*tmp17_;
   double tmp142_ = -(tmp18_);
   double tmp143_ = tmp141_*tmp39_;
   double tmp144_ = tmp69_*tmp37_;
   double tmp145_ = tmp68_*tmp40_;
   double tmp146_ = tmp145_+tmp144_;
   double tmp147_ = (tmp146_)*(tmp36_);
   double tmp148_ = tmp18_*tmp40_;
   double tmp149_ = tmp70_*tmp37_;
   double tmp150_ = tmp148_+tmp149_;
   double tmp151_ = (tmp150_)*(tmp56_);
   double tmp152_ = tmp147_+tmp151_;
   double tmp153_ = tmp13_*tmp37_;
   double tmp154_ = tmp153_*(tmp67_);
   double tmp155_ = tmp152_+tmp154_;
   double tmp156_ = tmp142_*tmp38_;
   double tmp157_ = tmp143_*tmp40_;
   double tmp158_ = tmp156_+tmp157_;
   double tmp159_ = (tmp158_)*(tmp36_);
   double tmp160_ = tmp141_*tmp38_;
   double tmp161_ = tmp160_+tmp72_;
   double tmp162_ = (tmp161_)*(tmp56_);
   double tmp163_ = tmp159_+tmp162_;
   double tmp164_ = ElSquare(tmp82_);
   double tmp165_ = tmp140_*tmp19_;
   double tmp166_ = -(tmp13_);
   double tmp167_ = tmp166_*tmp18_;
   double tmp168_ = tmp166_*tmp17_;
   double tmp169_ = tmp167_*tmp40_;
   double tmp170_ = tmp169_*(tmp36_);
   double tmp171_ = tmp168_*tmp40_;
   double tmp172_ = tmp171_*(tmp56_);
   double tmp173_ = tmp170_+tmp172_;
   double tmp174_ = tmp165_*tmp40_;
   double tmp175_ = tmp174_*(tmp67_);
   double tmp176_ = tmp173_+tmp175_;
   double tmp177_ = -(tmp40_);
   double tmp178_ = tmp140_*tmp37_;
   double tmp179_ = tmp177_*tmp68_;
   double tmp180_ = tmp178_*tmp69_;
   double tmp181_ = tmp179_+tmp180_;
   double tmp182_ = (tmp181_)*(tmp36_);
   double tmp183_ = tmp177_*tmp18_;
   double tmp184_ = tmp178_*tmp70_;
   double tmp185_ = tmp183_+tmp184_;
   double tmp186_ = (tmp185_)*(tmp56_);
   double tmp187_ = tmp182_+tmp186_;
   double tmp188_ = tmp178_*tmp13_;
   double tmp189_ = tmp188_*(tmp67_);
   double tmp190_ = tmp187_+tmp189_;
   double tmp191_ = tmp140_*(tmp73_);
   double tmp192_ = tmp140_*(tmp77_);
   double tmp193_ = tmp140_*tmp80_;
   double tmp194_ = tmp87_*tmp85_;
   double tmp195_ = tmp194_*(tmp97_);
   double tmp196_ = tmp86_*tmp85_;
   double tmp197_ = tmp196_*(tmp109_);
   double tmp198_ = tmp195_+tmp197_;
   double tmp199_ = tmp88_*(tmp117_);
   double tmp200_ = tmp198_+tmp199_;
   double tmp201_ = tmp140_*tmp86_;
   double tmp202_ = -(tmp87_);
   double tmp203_ = tmp201_*tmp100_;
   double tmp204_ = tmp119_*tmp98_;
   double tmp205_ = tmp118_*tmp101_;
   double tmp206_ = tmp205_+tmp204_;
   double tmp207_ = (tmp206_)*(tmp97_);
   double tmp208_ = tmp87_*tmp101_;
   double tmp209_ = tmp120_*tmp98_;
   double tmp210_ = tmp208_+tmp209_;
   double tmp211_ = (tmp210_)*(tmp109_);
   double tmp212_ = tmp207_+tmp211_;
   double tmp213_ = tmp85_*tmp98_;
   double tmp214_ = tmp213_*(tmp117_);
   double tmp215_ = tmp212_+tmp214_;
   double tmp216_ = tmp202_*tmp99_;
   double tmp217_ = tmp203_*tmp101_;
   double tmp218_ = tmp216_+tmp217_;
   double tmp219_ = (tmp218_)*(tmp97_);
   double tmp220_ = tmp201_*tmp99_;
   double tmp221_ = tmp220_+tmp122_;
   double tmp222_ = (tmp221_)*(tmp109_);
   double tmp223_ = tmp219_+tmp222_;
   double tmp224_ = ElSquare(tmp132_);
   double tmp225_ = tmp140_*tmp88_;
   double tmp226_ = -(tmp85_);
   double tmp227_ = tmp226_*tmp87_;
   double tmp228_ = tmp226_*tmp86_;
   double tmp229_ = tmp227_*tmp101_;
   double tmp230_ = tmp229_*(tmp97_);
   double tmp231_ = tmp228_*tmp101_;
   double tmp232_ = tmp231_*(tmp109_);
   double tmp233_ = tmp230_+tmp232_;
   double tmp234_ = tmp225_*tmp101_;
   double tmp235_ = tmp234_*(tmp117_);
   double tmp236_ = tmp233_+tmp235_;
   double tmp237_ = -(tmp101_);
   double tmp238_ = tmp140_*tmp98_;
   double tmp239_ = tmp237_*tmp118_;
   double tmp240_ = tmp238_*tmp119_;
   double tmp241_ = tmp239_+tmp240_;
   double tmp242_ = (tmp241_)*(tmp97_);
   double tmp243_ = tmp237_*tmp87_;
   double tmp244_ = tmp238_*tmp120_;
   double tmp245_ = tmp243_+tmp244_;
   double tmp246_ = (tmp245_)*(tmp109_);
   double tmp247_ = tmp242_+tmp246_;
   double tmp248_ = tmp238_*tmp85_;
   double tmp249_ = tmp248_*(tmp117_);
   double tmp250_ = tmp247_+tmp249_;
   double tmp251_ = tmp140_*(tmp123_);
   double tmp252_ = tmp140_*(tmp127_);
   double tmp253_ = tmp140_*tmp130_;
   double tmp254_ = tmp140_*tmp4_;
   double tmp255_ = -(tmp1_);
   double tmp256_ = tmp254_*tmp8_;
   double tmp257_ = tmp254_*tmp14_;
   double tmp258_ = tmp257_*mLocP3X_A_0;
   double tmp259_ = tmp255_*tmp10_;
   double tmp260_ = tmp256_*tmp6_;
   double tmp261_ = tmp259_+tmp260_;
   double tmp262_ = (tmp261_)*mLocP3Y_A_0;
   double tmp263_ = tmp258_+tmp262_;
   double tmp264_ = tmp255_*tmp15_;
   double tmp265_ = tmp256_*tmp10_;
   double tmp266_ = tmp264_+tmp265_;
   double tmp267_ = (tmp266_)*mLocP3Z_A_0;
   double tmp268_ = tmp263_+tmp267_;
   double tmp269_ = tmp254_*tmp10_;
   double tmp270_ = tmp269_+tmp24_;
   double tmp271_ = (tmp270_)*mLocP3Y_A_0;
   double tmp272_ = tmp22_+tmp271_;
   double tmp273_ = tmp254_*tmp15_;
   double tmp274_ = tmp273_+tmp29_;
   double tmp275_ = (tmp274_)*mLocP3Z_A_0;
   double tmp276_ = tmp272_+tmp275_;
   double tmp277_ = (tmp268_)*(tmp73_);
   double tmp278_ = (tmp276_)*(tmp77_);
   double tmp279_ = tmp277_+tmp278_;
   double tmp280_ = tmp257_*mLocP3X_B_0;
   double tmp281_ = (tmp261_)*mLocP3Y_B_0;
   double tmp282_ = tmp280_+tmp281_;
   double tmp283_ = (tmp266_)*mLocP3Z_B_0;
   double tmp284_ = tmp282_+tmp283_;
   double tmp285_ = (tmp270_)*mLocP3Y_B_0;
   double tmp286_ = tmp90_+tmp285_;
   double tmp287_ = (tmp274_)*mLocP3Z_B_0;
   double tmp288_ = tmp286_+tmp287_;
   double tmp289_ = (tmp284_)*(tmp123_);
   double tmp290_ = (tmp288_)*(tmp127_);
   double tmp291_ = tmp289_+tmp290_;
   double tmp292_ = -(tmp14_);
   double tmp293_ = tmp292_*tmp1_;
   double tmp294_ = tmp140_*tmp7_;
   double tmp295_ = tmp292_*tmp4_;
   double tmp296_ = tmp294_*tmp1_;
   double tmp297_ = tmp296_*mLocP3X_A_0;
   double tmp298_ = tmp293_*tmp6_;
   double tmp299_ = tmp298_*mLocP3Y_A_0;
   double tmp300_ = tmp297_+tmp299_;
   double tmp301_ = tmp293_*tmp10_;
   double tmp302_ = tmp301_*mLocP3Z_A_0;
   double tmp303_ = tmp300_+tmp302_;
   double tmp304_ = tmp294_*tmp4_;
   double tmp305_ = tmp304_*mLocP3X_A_0;
   double tmp306_ = tmp295_*tmp6_;
   double tmp307_ = tmp306_*mLocP3Y_A_0;
   double tmp308_ = tmp305_+tmp307_;
   double tmp309_ = tmp295_*tmp10_;
   double tmp310_ = tmp309_*mLocP3Z_A_0;
   double tmp311_ = tmp308_+tmp310_;
   double tmp312_ = tmp14_*mLocP3X_A_0;
   double tmp313_ = tmp294_*tmp6_;
   double tmp314_ = tmp313_*mLocP3Y_A_0;
   double tmp315_ = tmp312_+tmp314_;
   double tmp316_ = tmp294_*tmp10_;
   double tmp317_ = tmp316_*mLocP3Z_A_0;
   double tmp318_ = tmp315_+tmp317_;
   double tmp319_ = (tmp303_)*(tmp73_);
   double tmp320_ = (tmp311_)*(tmp77_);
   double tmp321_ = tmp319_+tmp320_;
   double tmp322_ = (tmp318_)*tmp80_;
   double tmp323_ = tmp321_+tmp322_;
   double tmp324_ = tmp296_*mLocP3X_B_0;
   double tmp325_ = tmp298_*mLocP3Y_B_0;
   double tmp326_ = tmp324_+tmp325_;
   double tmp327_ = tmp301_*mLocP3Z_B_0;
   double tmp328_ = tmp326_+tmp327_;
   double tmp329_ = tmp304_*mLocP3X_B_0;
   double tmp330_ = tmp306_*mLocP3Y_B_0;
   double tmp331_ = tmp329_+tmp330_;
   double tmp332_ = tmp309_*mLocP3Z_B_0;
   double tmp333_ = tmp331_+tmp332_;
   double tmp334_ = tmp14_*mLocP3X_B_0;
   double tmp335_ = tmp313_*mLocP3Y_B_0;
   double tmp336_ = tmp334_+tmp335_;
   double tmp337_ = tmp316_*mLocP3Z_B_0;
   double tmp338_ = tmp336_+tmp337_;
   double tmp339_ = (tmp328_)*(tmp123_);
   double tmp340_ = (tmp333_)*(tmp127_);
   double tmp341_ = tmp339_+tmp340_;
   double tmp342_ = (tmp338_)*tmp130_;
   double tmp343_ = tmp341_+tmp342_;
   double tmp344_ = tmp140_*tmp6_;
   double tmp345_ = -(tmp10_);
   double tmp346_ = tmp344_*tmp5_;
   double tmp347_ = tmp10_*tmp9_;
   double tmp348_ = tmp346_+tmp347_;
   double tmp349_ = (tmp348_)*mLocP3Y_A_0;
   double tmp350_ = tmp345_*tmp5_;
   double tmp351_ = tmp344_*tmp9_;
   double tmp352_ = tmp350_+tmp351_;
   double tmp353_ = (tmp352_)*mLocP3Z_A_0;
   double tmp354_ = tmp349_+tmp353_;
   double tmp355_ = tmp344_*tmp1_;
   double tmp356_ = tmp10_*tmp16_;
   double tmp357_ = tmp355_+tmp356_;
   double tmp358_ = (tmp357_)*mLocP3Y_A_0;
   double tmp359_ = tmp345_*tmp1_;
   double tmp360_ = tmp344_*tmp16_;
   double tmp361_ = tmp359_+tmp360_;
   double tmp362_ = (tmp361_)*mLocP3Z_A_0;
   double tmp363_ = tmp358_+tmp362_;
   double tmp364_ = tmp10_*tmp14_;
   double tmp365_ = tmp364_*mLocP3Y_A_0;
   double tmp366_ = tmp344_*tmp14_;
   double tmp367_ = tmp366_*mLocP3Z_A_0;
   double tmp368_ = tmp365_+tmp367_;
   double tmp369_ = (tmp354_)*(tmp73_);
   double tmp370_ = (tmp363_)*(tmp77_);
   double tmp371_ = tmp369_+tmp370_;
   double tmp372_ = (tmp368_)*tmp80_;
   double tmp373_ = tmp371_+tmp372_;
   double tmp374_ = (tmp348_)*mLocP3Y_B_0;
   double tmp375_ = (tmp352_)*mLocP3Z_B_0;
   double tmp376_ = tmp374_+tmp375_;
   double tmp377_ = (tmp357_)*mLocP3Y_B_0;
   double tmp378_ = (tmp361_)*mLocP3Z_B_0;
   double tmp379_ = tmp377_+tmp378_;
   double tmp380_ = tmp364_*mLocP3Y_B_0;
   double tmp381_ = tmp366_*mLocP3Z_B_0;
   double tmp382_ = tmp380_+tmp381_;
   double tmp383_ = (tmp376_)*(tmp123_);
   double tmp384_ = (tmp379_)*(tmp127_);
   double tmp385_ = tmp383_+tmp384_;
   double tmp386_ = (tmp382_)*tmp130_;
   double tmp387_ = tmp385_+tmp386_;

  mVal[0] = (mLocCste_A_0+mLocCoeffU_A_0*((tmp139_)/(tmp82_))+mLocCoeffV_A_0*((tmp155_)/(tmp82_)))-(mLocCste_B_0+mLocCoeffU_B_0*((tmp200_)/(tmp132_))+mLocCoeffV_B_0*((tmp215_)/(tmp132_)));

  mCompDer[0][0] = (((tmp141_*tmp13_*(tmp36_)+tmp133_*(tmp56_))*(tmp82_)-(tmp139_)*(tmp163_))/tmp164_)*mLocCoeffU_A_0+((((tmp142_*tmp40_+tmp143_*tmp37_)*(tmp36_)+(tmp141_*tmp40_+tmp144_)*(tmp56_))*(tmp82_)-(tmp155_)*(tmp163_))/tmp164_)*mLocCoeffV_A_0;
  mCompDer[0][1] = (((tmp165_*tmp18_*(tmp36_)+tmp165_*tmp17_*(tmp56_)+tmp13_*(tmp67_))*(tmp82_)-(tmp139_)*(tmp176_))/tmp164_)*mLocCoeffU_A_0+(((tmp167_*tmp37_*(tmp36_)+tmp168_*tmp37_*(tmp56_)+tmp165_*tmp37_*(tmp67_))*(tmp82_)-(tmp155_)*(tmp176_))/tmp164_)*mLocCoeffV_A_0;
  mCompDer[0][2] = (-((tmp139_)*(tmp190_))/tmp164_)*mLocCoeffU_A_0+((((tmp178_*tmp68_+tmp40_*tmp69_)*(tmp36_)+(tmp178_*tmp18_+tmp40_*tmp70_)*(tmp56_)+tmp40_*tmp13_*(tmp67_))*(tmp82_)-(tmp155_)*(tmp190_))/tmp164_)*mLocCoeffV_A_0;
  mCompDer[0][3] = ((tmp140_*tmp133_*(tmp82_)-(tmp139_)*tmp191_)/tmp164_)*mLocCoeffU_A_0+((tmp140_*(tmp146_)*(tmp82_)-(tmp155_)*tmp191_)/tmp164_)*mLocCoeffV_A_0;
  mCompDer[0][4] = ((tmp140_*tmp135_*(tmp82_)-(tmp139_)*tmp192_)/tmp164_)*mLocCoeffU_A_0+((tmp140_*(tmp150_)*(tmp82_)-(tmp155_)*tmp192_)/tmp164_)*mLocCoeffV_A_0;
  mCompDer[0][5] = ((tmp165_*(tmp82_)-(tmp139_)*tmp193_)/tmp164_)*mLocCoeffU_A_0+((tmp140_*tmp153_*(tmp82_)-(tmp155_)*tmp193_)/tmp164_)*mLocCoeffV_A_0;
  mCompDer[0][6] = -((((tmp201_*tmp85_*(tmp97_)+tmp194_*(tmp109_))*(tmp132_)-(tmp200_)*(tmp223_))/tmp224_)*mLocCoeffU_B_0+((((tmp202_*tmp101_+tmp203_*tmp98_)*(tmp97_)+(tmp201_*tmp101_+tmp204_)*(tmp109_))*(tmp132_)-(tmp215_)*(tmp223_))/tmp224_)*mLocCoeffV_B_0);
  mCompDer[0][7] = -((((tmp225_*tmp87_*(tmp97_)+tmp225_*tmp86_*(tmp109_)+tmp85_*(tmp117_))*(tmp132_)-(tmp200_)*(tmp236_))/tmp224_)*mLocCoeffU_B_0+(((tmp227_*tmp98_*(tmp97_)+tmp228_*tmp98_*(tmp109_)+tmp225_*tmp98_*(tmp117_))*(tmp132_)-(tmp215_)*(tmp236_))/tmp224_)*mLocCoeffV_B_0);
  mCompDer[0][8] = -((-((tmp200_)*(tmp250_))/tmp224_)*mLocCoeffU_B_0+((((tmp238_*tmp118_+tmp101_*tmp119_)*(tmp97_)+(tmp238_*tmp87_+tmp101_*tmp120_)*(tmp109_)+tmp101_*tmp85_*(tmp117_))*(tmp132_)-(tmp215_)*(tmp250_))/tmp224_)*mLocCoeffV_B_0);
  mCompDer[0][9] = -(((tmp140_*tmp194_*(tmp132_)-(tmp200_)*tmp251_)/tmp224_)*mLocCoeffU_B_0+((tmp140_*(tmp206_)*(tmp132_)-(tmp215_)*tmp251_)/tmp224_)*mLocCoeffV_B_0);
  mCompDer[0][10] = -(((tmp140_*tmp196_*(tmp132_)-(tmp200_)*tmp252_)/tmp224_)*mLocCoeffU_B_0+((tmp140_*(tmp210_)*(tmp132_)-(tmp215_)*tmp252_)/tmp224_)*mLocCoeffV_B_0);
  mCompDer[0][11] = -(((tmp225_*(tmp132_)-(tmp200_)*tmp253_)/tmp224_)*mLocCoeffU_B_0+((tmp140_*tmp213_*(tmp132_)-(tmp215_)*tmp253_)/tmp224_)*mLocCoeffV_B_0);
  mCompDer[0][12] = (((((tmp268_)*tmp133_+(tmp276_)*tmp135_)*(tmp82_)-(tmp139_)*(tmp279_))/tmp164_)*mLocCoeffU_A_0+((((tmp268_)*(tmp146_)+(tmp276_)*(tmp150_))*(tmp82_)-(tmp155_)*(tmp279_))/tmp164_)*mLocCoeffV_A_0)-(((((tmp284_)*tmp194_+(tmp288_)*tmp196_)*(tmp132_)-(tmp200_)*(tmp291_))/tmp224_)*mLocCoeffU_B_0+((((tmp284_)*(tmp206_)+(tmp288_)*(tmp210_))*(tmp132_)-(tmp215_)*(tmp291_))/tmp224_)*mLocCoeffV_B_0);
  mCompDer[0][13] = (((((tmp303_)*tmp133_+(tmp311_)*tmp135_+(tmp318_)*tmp19_)*(tmp82_)-(tmp139_)*(tmp323_))/tmp164_)*mLocCoeffU_A_0+((((tmp303_)*(tmp146_)+(tmp311_)*(tmp150_)+(tmp318_)*tmp153_)*(tmp82_)-(tmp155_)*(tmp323_))/tmp164_)*mLocCoeffV_A_0)-(((((tmp328_)*tmp194_+(tmp333_)*tmp196_+(tmp338_)*tmp88_)*(tmp132_)-(tmp200_)*(tmp343_))/tmp224_)*mLocCoeffU_B_0+((((tmp328_)*(tmp206_)+(tmp333_)*(tmp210_)+(tmp338_)*tmp213_)*(tmp132_)-(tmp215_)*(tmp343_))/tmp224_)*mLocCoeffV_B_0);
  mCompDer[0][14] = (((((tmp354_)*tmp133_+(tmp363_)*tmp135_+(tmp368_)*tmp19_)*(tmp82_)-(tmp139_)*(tmp373_))/tmp164_)*mLocCoeffU_A_0+((((tmp354_)*(tmp146_)+(tmp363_)*(tmp150_)+(tmp368_)*tmp153_)*(tmp82_)-(tmp155_)*(tmp373_))/tmp164_)*mLocCoeffV_A_0)-(((((tmp376_)*tmp194_+(tmp379_)*tmp196_+(tmp382_)*tmp88_)*(tmp132_)-(tmp200_)*(tmp387_))/tmp224_)*mLocCoeffU_B_0+((((tmp376_)*(tmp206_)+(tmp379_)*(tmp210_)+(tmp382_)*tmp213_)*(tmp132_)-(tmp215_)*(tmp387_))/tmp224_)*mLocCoeffV_B_0);
  mCompDer[0][15] = (((tmp133_*(tmp82_)-(tmp139_)*(tmp73_))/tmp164_)*mLocCoeffU_A_0+(((tmp146_)*(tmp82_)-(tmp155_)*(tmp73_))/tmp164_)*mLocCoeffV_A_0)-(((tmp194_*(tmp132_)-(tmp200_)*(tmp123_))/tmp224_)*mLocCoeffU_B_0+(((tmp206_)*(tmp132_)-(tmp215_)*(tmp123_))/tmp224_)*mLocCoeffV_B_0);
  mCompDer[0][16] = (((tmp135_*(tmp82_)-(tmp139_)*(tmp77_))/tmp164_)*mLocCoeffU_A_0+(((tmp150_)*(tmp82_)-(tmp155_)*(tmp77_))/tmp164_)*mLocCoeffV_A_0)-(((tmp196_*(tmp132_)-(tmp200_)*(tmp127_))/tmp224_)*mLocCoeffU_B_0+(((tmp210_)*(tmp132_)-(tmp215_)*(tmp127_))/tmp224_)*mLocCoeffV_B_0);
  mCompDer[0][17] = (((tmp19_*(tmp82_)-(tmp139_)*tmp80_)/tmp164_)*mLocCoeffU_A_0+((tmp153_*(tmp82_)-(tmp155_)*tmp80_)/tmp164_)*mLocCoeffV_A_0)-(((tmp88_*(tmp132_)-(tmp200_)*tmp130_)/tmp224_)*mLocCoeffU_B_0+((tmp213_*(tmp132_)-(tmp215_)*tmp130_)/tmp224_)*mLocCoeffV_B_0);
}


void cEqCorLI_Multi_1_DRPts0_NonNorm::ComputeValDerivHessian()
{
  ELISE_ASSERT(false,"Foncteur cEqCorLI_Multi_1_DRPts0_NonNorm Has no Der Sec");
}

void cEqCorLI_Multi_1_DRPts0_NonNorm::SetCoeffU_A_0(double aVal){ mLocCoeffU_A_0 = aVal;}
void cEqCorLI_Multi_1_DRPts0_NonNorm::SetCoeffU_B_0(double aVal){ mLocCoeffU_B_0 = aVal;}
void cEqCorLI_Multi_1_DRPts0_NonNorm::SetCoeffV_A_0(double aVal){ mLocCoeffV_A_0 = aVal;}
void cEqCorLI_Multi_1_DRPts0_NonNorm::SetCoeffV_B_0(double aVal){ mLocCoeffV_B_0 = aVal;}
void cEqCorLI_Multi_1_DRPts0_NonNorm::SetCste_A_0(double aVal){ mLocCste_A_0 = aVal;}
void cEqCorLI_Multi_1_DRPts0_NonNorm::SetCste_B_0(double aVal){ mLocCste_B_0 = aVal;}
void cEqCorLI_Multi_1_DRPts0_NonNorm::SetP3X_A_0(double aVal){ mLocP3X_A_0 = aVal;}
void cEqCorLI_Multi_1_DRPts0_NonNorm::SetP3X_B_0(double aVal){ mLocP3X_B_0 = aVal;}
void cEqCorLI_Multi_1_DRPts0_NonNorm::SetP3Y_A_0(double aVal){ mLocP3Y_A_0 = aVal;}
void cEqCorLI_Multi_1_DRPts0_NonNorm::SetP3Y_B_0(double aVal){ mLocP3Y_B_0 = aVal;}
void cEqCorLI_Multi_1_DRPts0_NonNorm::SetP3Z_A_0(double aVal){ mLocP3Z_A_0 = aVal;}
void cEqCorLI_Multi_1_DRPts0_NonNorm::SetP3Z_B_0(double aVal){ mLocP3Z_B_0 = aVal;}



double * cEqCorLI_Multi_1_DRPts0_NonNorm::AdrVarLocFromString(const std::string & aName)
{
   if (aName == "CoeffU_A_0") return & mLocCoeffU_A_0;
   if (aName == "CoeffU_B_0") return & mLocCoeffU_B_0;
   if (aName == "CoeffV_A_0") return & mLocCoeffV_A_0;
   if (aName == "CoeffV_B_0") return & mLocCoeffV_B_0;
   if (aName == "Cste_A_0") return & mLocCste_A_0;
   if (aName == "Cste_B_0") return & mLocCste_B_0;
   if (aName == "P3X_A_0") return & mLocP3X_A_0;
   if (aName == "P3X_B_0") return & mLocP3X_B_0;
   if (aName == "P3Y_A_0") return & mLocP3Y_A_0;
   if (aName == "P3Y_B_0") return & mLocP3Y_B_0;
   if (aName == "P3Z_A_0") return & mLocP3Z_A_0;
   if (aName == "P3Z_B_0") return & mLocP3Z_B_0;
   return 0;
}


cElCompiledFonc::cAutoAddEntry cEqCorLI_Multi_1_DRPts0_NonNorm::mTheAuto("cEqCorLI_Multi_1_DRPts0_NonNorm",cEqCorLI_Multi_1_DRPts0_NonNorm::Alloc);


cElCompiledFonc *  cEqCorLI_Multi_1_DRPts0_NonNorm::Alloc()
{  return new cEqCorLI_Multi_1_DRPts0_NonNorm();
}



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