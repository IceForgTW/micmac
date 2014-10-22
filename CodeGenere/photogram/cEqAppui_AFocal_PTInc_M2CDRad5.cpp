// File Automatically generated by eLiSe
#include "general/all.h"
#include "private/all.h"
#include "cEqAppui_AFocal_PTInc_M2CDRad5.h"


cEqAppui_AFocal_PTInc_M2CDRad5::cEqAppui_AFocal_PTInc_M2CDRad5():
    cElCompiledFonc(2)
{
   AddIntRef (cIncIntervale("Intr",0,12));
   AddIntRef (cIncIntervale("Orient",12,18));
   AddIntRef (cIncIntervale("Tmp_PTer",18,21));
   Close(false);
}



void cEqAppui_AFocal_PTInc_M2CDRad5::ComputeVal()
{
   double tmp0_ = mCompCoord[12];
   double tmp1_ = mCompCoord[13];
   double tmp2_ = cos(tmp1_);
   double tmp3_ = sin(tmp0_);
   double tmp4_ = cos(tmp0_);
   double tmp5_ = sin(tmp1_);
   double tmp6_ = mCompCoord[14];
   double tmp7_ = mCompCoord[18];
   double tmp8_ = mCompCoord[15];
   double tmp9_ = tmp7_-tmp8_;
   double tmp10_ = sin(tmp6_);
   double tmp11_ = -(tmp10_);
   double tmp12_ = -(tmp5_);
   double tmp13_ = cos(tmp6_);
   double tmp14_ = mCompCoord[19];
   double tmp15_ = mCompCoord[16];
   double tmp16_ = tmp14_-tmp15_;
   double tmp17_ = mCompCoord[20];
   double tmp18_ = mCompCoord[17];
   double tmp19_ = tmp17_-tmp18_;
   double tmp20_ = -(tmp3_);
   double tmp21_ = tmp20_*tmp11_;
   double tmp22_ = tmp4_*tmp12_;
   double tmp23_ = tmp22_*tmp13_;
   double tmp24_ = tmp21_+tmp23_;
   double tmp25_ = (tmp24_)*(tmp9_);
   double tmp26_ = tmp4_*tmp11_;
   double tmp27_ = tmp3_*tmp12_;
   double tmp28_ = tmp27_*tmp13_;
   double tmp29_ = tmp26_+tmp28_;
   double tmp30_ = (tmp29_)*(tmp16_);
   double tmp31_ = tmp25_+tmp30_;
   double tmp32_ = tmp2_*tmp13_;
   double tmp33_ = tmp32_*(tmp19_);
   double tmp34_ = tmp31_+tmp33_;
   double tmp35_ = tmp4_*tmp2_;
   double tmp36_ = tmp35_*(tmp9_);
   double tmp37_ = tmp3_*tmp2_;
   double tmp38_ = tmp37_*(tmp16_);
   double tmp39_ = tmp36_+tmp38_;
   double tmp40_ = tmp5_*(tmp19_);
   double tmp41_ = tmp39_+tmp40_;
   double tmp42_ = ElSquare(tmp41_);
   double tmp43_ = tmp20_*tmp13_;
   double tmp44_ = tmp22_*tmp10_;
   double tmp45_ = tmp43_+tmp44_;
   double tmp46_ = (tmp45_)*(tmp9_);
   double tmp47_ = tmp4_*tmp13_;
   double tmp48_ = tmp27_*tmp10_;
   double tmp49_ = tmp47_+tmp48_;
   double tmp50_ = (tmp49_)*(tmp16_);
   double tmp51_ = tmp46_+tmp50_;
   double tmp52_ = tmp2_*tmp10_;
   double tmp53_ = tmp52_*(tmp19_);
   double tmp54_ = tmp51_+tmp53_;
   double tmp55_ = ElSquare(tmp54_);
   double tmp56_ = tmp42_+tmp55_;
   double tmp57_ = ElSquare(tmp34_);
   double tmp58_ = tmp56_+tmp57_;
   double tmp59_ = sqrt(tmp58_);
   double tmp60_ = (tmp34_)/tmp59_;
   double tmp61_ = 1-tmp60_;
   double tmp62_ = mCompCoord[5];
   double tmp63_ = mCompCoord[0];
   double tmp64_ = mCompCoord[3];
   double tmp65_ = tmp64_*(tmp61_);
   double tmp66_ = mCompCoord[4];
   double tmp67_ = ElSquare(tmp61_);
   double tmp68_ = tmp66_*tmp67_;
   double tmp69_ = tmp65_+tmp68_;
   double tmp70_ = (tmp34_)-(tmp69_);
   double tmp71_ = tmp63_/(tmp70_);
   double tmp72_ = (tmp41_)*(tmp71_);
   double tmp73_ = mCompCoord[1];
   double tmp74_ = tmp72_+tmp73_;
   double tmp75_ = (tmp74_)-tmp62_;
   double tmp76_ = (tmp54_)*(tmp71_);
   double tmp77_ = mCompCoord[2];
   double tmp78_ = tmp76_+tmp77_;
   double tmp79_ = mCompCoord[6];
   double tmp80_ = (tmp78_)-tmp79_;
   double tmp81_ = (tmp75_)*(tmp75_);
   double tmp82_ = (tmp80_)*(tmp80_);
   double tmp83_ = tmp81_+tmp82_;
   double tmp84_ = (tmp83_)*(tmp83_);
   double tmp85_ = tmp84_*(tmp83_);
   double tmp86_ = tmp85_*(tmp83_);
   double tmp87_ = mCompCoord[7];
   double tmp88_ = (tmp83_)*tmp87_;
   double tmp89_ = 1+tmp88_;
   double tmp90_ = mCompCoord[8];
   double tmp91_ = tmp84_*tmp90_;
   double tmp92_ = tmp89_+tmp91_;
   double tmp93_ = mCompCoord[9];
   double tmp94_ = tmp85_*tmp93_;
   double tmp95_ = tmp92_+tmp94_;
   double tmp96_ = mCompCoord[10];
   double tmp97_ = tmp86_*tmp96_;
   double tmp98_ = tmp95_+tmp97_;
   double tmp99_ = tmp86_*(tmp83_);
   double tmp100_ = mCompCoord[11];
   double tmp101_ = tmp99_*tmp100_;
   double tmp102_ = tmp98_+tmp101_;

  mVal[0] = ((tmp62_+(tmp75_)*(tmp102_))-mLocXIm)*mLocScNorm;

  mVal[1] = ((tmp79_+(tmp80_)*(tmp102_))-mLocYIm)*mLocScNorm;

}


void cEqAppui_AFocal_PTInc_M2CDRad5::ComputeValDeriv()
{
   double tmp0_ = mCompCoord[12];
   double tmp1_ = mCompCoord[13];
   double tmp2_ = cos(tmp1_);
   double tmp3_ = sin(tmp0_);
   double tmp4_ = cos(tmp0_);
   double tmp5_ = sin(tmp1_);
   double tmp6_ = mCompCoord[14];
   double tmp7_ = mCompCoord[18];
   double tmp8_ = mCompCoord[15];
   double tmp9_ = tmp7_-tmp8_;
   double tmp10_ = sin(tmp6_);
   double tmp11_ = -(tmp10_);
   double tmp12_ = -(tmp5_);
   double tmp13_ = cos(tmp6_);
   double tmp14_ = mCompCoord[19];
   double tmp15_ = mCompCoord[16];
   double tmp16_ = tmp14_-tmp15_;
   double tmp17_ = mCompCoord[20];
   double tmp18_ = mCompCoord[17];
   double tmp19_ = tmp17_-tmp18_;
   double tmp20_ = -(tmp3_);
   double tmp21_ = tmp20_*tmp11_;
   double tmp22_ = tmp4_*tmp12_;
   double tmp23_ = tmp22_*tmp13_;
   double tmp24_ = tmp21_+tmp23_;
   double tmp25_ = (tmp24_)*(tmp9_);
   double tmp26_ = tmp4_*tmp11_;
   double tmp27_ = tmp3_*tmp12_;
   double tmp28_ = tmp27_*tmp13_;
   double tmp29_ = tmp26_+tmp28_;
   double tmp30_ = (tmp29_)*(tmp16_);
   double tmp31_ = tmp25_+tmp30_;
   double tmp32_ = tmp2_*tmp13_;
   double tmp33_ = tmp32_*(tmp19_);
   double tmp34_ = tmp31_+tmp33_;
   double tmp35_ = tmp4_*tmp2_;
   double tmp36_ = tmp35_*(tmp9_);
   double tmp37_ = tmp3_*tmp2_;
   double tmp38_ = tmp37_*(tmp16_);
   double tmp39_ = tmp36_+tmp38_;
   double tmp40_ = tmp5_*(tmp19_);
   double tmp41_ = tmp39_+tmp40_;
   double tmp42_ = ElSquare(tmp41_);
   double tmp43_ = tmp20_*tmp13_;
   double tmp44_ = tmp22_*tmp10_;
   double tmp45_ = tmp43_+tmp44_;
   double tmp46_ = (tmp45_)*(tmp9_);
   double tmp47_ = tmp4_*tmp13_;
   double tmp48_ = tmp27_*tmp10_;
   double tmp49_ = tmp47_+tmp48_;
   double tmp50_ = (tmp49_)*(tmp16_);
   double tmp51_ = tmp46_+tmp50_;
   double tmp52_ = tmp2_*tmp10_;
   double tmp53_ = tmp52_*(tmp19_);
   double tmp54_ = tmp51_+tmp53_;
   double tmp55_ = ElSquare(tmp54_);
   double tmp56_ = tmp42_+tmp55_;
   double tmp57_ = ElSquare(tmp34_);
   double tmp58_ = tmp56_+tmp57_;
   double tmp59_ = sqrt(tmp58_);
   double tmp60_ = (tmp34_)/tmp59_;
   double tmp61_ = 1-tmp60_;
   double tmp62_ = mCompCoord[5];
   double tmp63_ = mCompCoord[0];
   double tmp64_ = mCompCoord[3];
   double tmp65_ = tmp64_*(tmp61_);
   double tmp66_ = mCompCoord[4];
   double tmp67_ = ElSquare(tmp61_);
   double tmp68_ = tmp66_*tmp67_;
   double tmp69_ = tmp65_+tmp68_;
   double tmp70_ = (tmp34_)-(tmp69_);
   double tmp71_ = tmp63_/(tmp70_);
   double tmp72_ = (tmp41_)*(tmp71_);
   double tmp73_ = mCompCoord[1];
   double tmp74_ = tmp72_+tmp73_;
   double tmp75_ = (tmp74_)-tmp62_;
   double tmp76_ = (tmp54_)*(tmp71_);
   double tmp77_ = mCompCoord[2];
   double tmp78_ = tmp76_+tmp77_;
   double tmp79_ = mCompCoord[6];
   double tmp80_ = (tmp78_)-tmp79_;
   double tmp81_ = (tmp75_)*(tmp75_);
   double tmp82_ = (tmp80_)*(tmp80_);
   double tmp83_ = tmp81_+tmp82_;
   double tmp84_ = (tmp83_)*(tmp83_);
   double tmp85_ = tmp84_*(tmp83_);
   double tmp86_ = tmp85_*(tmp83_);
   double tmp87_ = mCompCoord[7];
   double tmp88_ = (tmp83_)*tmp87_;
   double tmp89_ = 1+tmp88_;
   double tmp90_ = mCompCoord[8];
   double tmp91_ = tmp84_*tmp90_;
   double tmp92_ = tmp89_+tmp91_;
   double tmp93_ = mCompCoord[9];
   double tmp94_ = tmp85_*tmp93_;
   double tmp95_ = tmp92_+tmp94_;
   double tmp96_ = mCompCoord[10];
   double tmp97_ = tmp86_*tmp96_;
   double tmp98_ = tmp95_+tmp97_;
   double tmp99_ = tmp86_*(tmp83_);
   double tmp100_ = mCompCoord[11];
   double tmp101_ = tmp99_*tmp100_;
   double tmp102_ = tmp98_+tmp101_;
   double tmp103_ = ElSquare(tmp70_);
   double tmp104_ = (tmp70_)/tmp103_;
   double tmp105_ = (tmp104_)*(tmp41_);
   double tmp106_ = tmp105_*(tmp75_);
   double tmp107_ = (tmp104_)*(tmp54_);
   double tmp108_ = tmp107_*(tmp80_);
   double tmp109_ = tmp106_+tmp106_;
   double tmp110_ = tmp108_+tmp108_;
   double tmp111_ = tmp109_+tmp110_;
   double tmp112_ = (tmp111_)*(tmp83_);
   double tmp113_ = tmp112_+tmp112_;
   double tmp114_ = (tmp113_)*(tmp83_);
   double tmp115_ = (tmp111_)*tmp84_;
   double tmp116_ = tmp114_+tmp115_;
   double tmp117_ = (tmp116_)*(tmp83_);
   double tmp118_ = (tmp111_)*tmp85_;
   double tmp119_ = tmp117_+tmp118_;
   double tmp120_ = tmp75_+tmp75_;
   double tmp121_ = (tmp120_)*(tmp83_);
   double tmp122_ = tmp121_+tmp121_;
   double tmp123_ = (tmp122_)*(tmp83_);
   double tmp124_ = (tmp120_)*tmp84_;
   double tmp125_ = tmp123_+tmp124_;
   double tmp126_ = (tmp125_)*(tmp83_);
   double tmp127_ = (tmp120_)*tmp85_;
   double tmp128_ = tmp126_+tmp127_;
   double tmp129_ = tmp80_+tmp80_;
   double tmp130_ = (tmp129_)*(tmp83_);
   double tmp131_ = tmp130_+tmp130_;
   double tmp132_ = (tmp131_)*(tmp83_);
   double tmp133_ = (tmp129_)*tmp84_;
   double tmp134_ = tmp132_+tmp133_;
   double tmp135_ = (tmp134_)*(tmp83_);
   double tmp136_ = (tmp129_)*tmp85_;
   double tmp137_ = tmp135_+tmp136_;
   double tmp138_ = -(tmp61_);
   double tmp139_ = tmp63_*tmp138_;
   double tmp140_ = -(tmp139_);
   double tmp141_ = tmp140_/tmp103_;
   double tmp142_ = (tmp141_)*(tmp41_);
   double tmp143_ = tmp142_*(tmp75_);
   double tmp144_ = (tmp141_)*(tmp54_);
   double tmp145_ = tmp144_*(tmp80_);
   double tmp146_ = tmp143_+tmp143_;
   double tmp147_ = tmp145_+tmp145_;
   double tmp148_ = tmp146_+tmp147_;
   double tmp149_ = (tmp148_)*(tmp83_);
   double tmp150_ = tmp149_+tmp149_;
   double tmp151_ = (tmp150_)*(tmp83_);
   double tmp152_ = (tmp148_)*tmp84_;
   double tmp153_ = tmp151_+tmp152_;
   double tmp154_ = (tmp153_)*(tmp83_);
   double tmp155_ = (tmp148_)*tmp85_;
   double tmp156_ = tmp154_+tmp155_;
   double tmp157_ = -(tmp67_);
   double tmp158_ = tmp63_*tmp157_;
   double tmp159_ = -(tmp158_);
   double tmp160_ = tmp159_/tmp103_;
   double tmp161_ = (tmp160_)*(tmp41_);
   double tmp162_ = tmp161_*(tmp75_);
   double tmp163_ = (tmp160_)*(tmp54_);
   double tmp164_ = tmp163_*(tmp80_);
   double tmp165_ = tmp162_+tmp162_;
   double tmp166_ = tmp164_+tmp164_;
   double tmp167_ = tmp165_+tmp166_;
   double tmp168_ = (tmp167_)*(tmp83_);
   double tmp169_ = tmp168_+tmp168_;
   double tmp170_ = (tmp169_)*(tmp83_);
   double tmp171_ = (tmp167_)*tmp84_;
   double tmp172_ = tmp170_+tmp171_;
   double tmp173_ = (tmp172_)*(tmp83_);
   double tmp174_ = (tmp167_)*tmp85_;
   double tmp175_ = tmp173_+tmp174_;
   double tmp176_ = -(1);
   double tmp177_ = tmp176_*(tmp75_);
   double tmp178_ = tmp177_+tmp177_;
   double tmp179_ = (tmp178_)*(tmp83_);
   double tmp180_ = tmp179_+tmp179_;
   double tmp181_ = (tmp180_)*(tmp83_);
   double tmp182_ = (tmp178_)*tmp84_;
   double tmp183_ = tmp181_+tmp182_;
   double tmp184_ = (tmp183_)*(tmp83_);
   double tmp185_ = (tmp178_)*tmp85_;
   double tmp186_ = tmp184_+tmp185_;
   double tmp187_ = tmp176_*(tmp80_);
   double tmp188_ = tmp187_+tmp187_;
   double tmp189_ = (tmp188_)*(tmp83_);
   double tmp190_ = tmp189_+tmp189_;
   double tmp191_ = (tmp190_)*(tmp83_);
   double tmp192_ = (tmp188_)*tmp84_;
   double tmp193_ = tmp191_+tmp192_;
   double tmp194_ = (tmp193_)*(tmp83_);
   double tmp195_ = (tmp188_)*tmp85_;
   double tmp196_ = tmp194_+tmp195_;
   double tmp197_ = tmp176_*tmp3_;
   double tmp198_ = -(tmp4_);
   double tmp199_ = tmp198_*tmp11_;
   double tmp200_ = tmp197_*tmp12_;
   double tmp201_ = tmp200_*tmp13_;
   double tmp202_ = tmp199_+tmp201_;
   double tmp203_ = (tmp202_)*(tmp9_);
   double tmp204_ = tmp197_*tmp11_;
   double tmp205_ = tmp204_+tmp23_;
   double tmp206_ = (tmp205_)*(tmp16_);
   double tmp207_ = tmp203_+tmp206_;
   double tmp208_ = tmp197_*tmp2_;
   double tmp209_ = tmp208_*(tmp9_);
   double tmp210_ = tmp35_*(tmp16_);
   double tmp211_ = tmp209_+tmp210_;
   double tmp212_ = (tmp207_)*tmp59_;
   double tmp213_ = 2*(tmp211_);
   double tmp214_ = tmp213_*(tmp41_);
   double tmp215_ = tmp198_*tmp13_;
   double tmp216_ = tmp200_*tmp10_;
   double tmp217_ = tmp215_+tmp216_;
   double tmp218_ = (tmp217_)*(tmp9_);
   double tmp219_ = tmp197_*tmp13_;
   double tmp220_ = tmp219_+tmp44_;
   double tmp221_ = (tmp220_)*(tmp16_);
   double tmp222_ = tmp218_+tmp221_;
   double tmp223_ = 2*(tmp222_);
   double tmp224_ = tmp223_*(tmp54_);
   double tmp225_ = tmp214_+tmp224_;
   double tmp226_ = 2*(tmp207_);
   double tmp227_ = tmp226_*(tmp34_);
   double tmp228_ = tmp225_+tmp227_;
   double tmp229_ = 0.500000*(tmp228_);
   double tmp230_ = (tmp229_)/tmp59_;
   double tmp231_ = (tmp34_)*(tmp230_);
   double tmp232_ = tmp212_-tmp231_;
   double tmp233_ = ElSquare(tmp59_);
   double tmp234_ = (tmp232_)/tmp233_;
   double tmp235_ = -(tmp234_);
   double tmp236_ = (tmp211_)*(tmp71_);
   double tmp237_ = tmp235_*tmp64_;
   double tmp238_ = 2*tmp235_;
   double tmp239_ = tmp238_*(tmp61_);
   double tmp240_ = tmp239_*tmp66_;
   double tmp241_ = tmp237_+tmp240_;
   double tmp242_ = (tmp207_)-(tmp241_);
   double tmp243_ = tmp63_*(tmp242_);
   double tmp244_ = -(tmp243_);
   double tmp245_ = tmp244_/tmp103_;
   double tmp246_ = (tmp245_)*(tmp41_);
   double tmp247_ = tmp236_+tmp246_;
   double tmp248_ = (tmp247_)*(tmp75_);
   double tmp249_ = (tmp222_)*(tmp71_);
   double tmp250_ = (tmp245_)*(tmp54_);
   double tmp251_ = tmp249_+tmp250_;
   double tmp252_ = (tmp251_)*(tmp80_);
   double tmp253_ = tmp248_+tmp248_;
   double tmp254_ = tmp252_+tmp252_;
   double tmp255_ = tmp253_+tmp254_;
   double tmp256_ = (tmp255_)*(tmp83_);
   double tmp257_ = tmp256_+tmp256_;
   double tmp258_ = (tmp257_)*(tmp83_);
   double tmp259_ = (tmp255_)*tmp84_;
   double tmp260_ = tmp258_+tmp259_;
   double tmp261_ = (tmp260_)*(tmp83_);
   double tmp262_ = (tmp255_)*tmp85_;
   double tmp263_ = tmp261_+tmp262_;
   double tmp264_ = tmp176_*tmp5_;
   double tmp265_ = -(tmp2_);
   double tmp266_ = tmp265_*tmp4_;
   double tmp267_ = tmp266_*tmp13_;
   double tmp268_ = tmp267_*(tmp9_);
   double tmp269_ = tmp265_*tmp3_;
   double tmp270_ = tmp269_*tmp13_;
   double tmp271_ = tmp270_*(tmp16_);
   double tmp272_ = tmp268_+tmp271_;
   double tmp273_ = tmp264_*tmp13_;
   double tmp274_ = tmp273_*(tmp19_);
   double tmp275_ = tmp272_+tmp274_;
   double tmp276_ = tmp264_*tmp4_;
   double tmp277_ = tmp276_*(tmp9_);
   double tmp278_ = tmp264_*tmp3_;
   double tmp279_ = tmp278_*(tmp16_);
   double tmp280_ = tmp277_+tmp279_;
   double tmp281_ = tmp2_*(tmp19_);
   double tmp282_ = tmp280_+tmp281_;
   double tmp283_ = (tmp275_)*tmp59_;
   double tmp284_ = 2*(tmp282_);
   double tmp285_ = tmp284_*(tmp41_);
   double tmp286_ = tmp266_*tmp10_;
   double tmp287_ = tmp286_*(tmp9_);
   double tmp288_ = tmp269_*tmp10_;
   double tmp289_ = tmp288_*(tmp16_);
   double tmp290_ = tmp287_+tmp289_;
   double tmp291_ = tmp264_*tmp10_;
   double tmp292_ = tmp291_*(tmp19_);
   double tmp293_ = tmp290_+tmp292_;
   double tmp294_ = 2*(tmp293_);
   double tmp295_ = tmp294_*(tmp54_);
   double tmp296_ = tmp285_+tmp295_;
   double tmp297_ = 2*(tmp275_);
   double tmp298_ = tmp297_*(tmp34_);
   double tmp299_ = tmp296_+tmp298_;
   double tmp300_ = 0.500000*(tmp299_);
   double tmp301_ = (tmp300_)/tmp59_;
   double tmp302_ = (tmp34_)*(tmp301_);
   double tmp303_ = tmp283_-tmp302_;
   double tmp304_ = (tmp303_)/tmp233_;
   double tmp305_ = -(tmp304_);
   double tmp306_ = (tmp282_)*(tmp71_);
   double tmp307_ = tmp305_*tmp64_;
   double tmp308_ = 2*tmp305_;
   double tmp309_ = tmp308_*(tmp61_);
   double tmp310_ = tmp309_*tmp66_;
   double tmp311_ = tmp307_+tmp310_;
   double tmp312_ = (tmp275_)-(tmp311_);
   double tmp313_ = tmp63_*(tmp312_);
   double tmp314_ = -(tmp313_);
   double tmp315_ = tmp314_/tmp103_;
   double tmp316_ = (tmp315_)*(tmp41_);
   double tmp317_ = tmp306_+tmp316_;
   double tmp318_ = (tmp317_)*(tmp75_);
   double tmp319_ = (tmp293_)*(tmp71_);
   double tmp320_ = (tmp315_)*(tmp54_);
   double tmp321_ = tmp319_+tmp320_;
   double tmp322_ = (tmp321_)*(tmp80_);
   double tmp323_ = tmp318_+tmp318_;
   double tmp324_ = tmp322_+tmp322_;
   double tmp325_ = tmp323_+tmp324_;
   double tmp326_ = (tmp325_)*(tmp83_);
   double tmp327_ = tmp326_+tmp326_;
   double tmp328_ = (tmp327_)*(tmp83_);
   double tmp329_ = (tmp325_)*tmp84_;
   double tmp330_ = tmp328_+tmp329_;
   double tmp331_ = (tmp330_)*(tmp83_);
   double tmp332_ = (tmp325_)*tmp85_;
   double tmp333_ = tmp331_+tmp332_;
   double tmp334_ = -(tmp13_);
   double tmp335_ = tmp176_*tmp10_;
   double tmp336_ = tmp334_*tmp20_;
   double tmp337_ = tmp335_*tmp22_;
   double tmp338_ = tmp336_+tmp337_;
   double tmp339_ = (tmp338_)*(tmp9_);
   double tmp340_ = tmp334_*tmp4_;
   double tmp341_ = tmp335_*tmp27_;
   double tmp342_ = tmp340_+tmp341_;
   double tmp343_ = (tmp342_)*(tmp16_);
   double tmp344_ = tmp339_+tmp343_;
   double tmp345_ = tmp335_*tmp2_;
   double tmp346_ = tmp345_*(tmp19_);
   double tmp347_ = tmp344_+tmp346_;
   double tmp348_ = (tmp347_)*tmp59_;
   double tmp349_ = tmp335_*tmp20_;
   double tmp350_ = tmp13_*tmp22_;
   double tmp351_ = tmp349_+tmp350_;
   double tmp352_ = (tmp351_)*(tmp9_);
   double tmp353_ = tmp335_*tmp4_;
   double tmp354_ = tmp13_*tmp27_;
   double tmp355_ = tmp353_+tmp354_;
   double tmp356_ = (tmp355_)*(tmp16_);
   double tmp357_ = tmp352_+tmp356_;
   double tmp358_ = tmp13_*tmp2_;
   double tmp359_ = tmp358_*(tmp19_);
   double tmp360_ = tmp357_+tmp359_;
   double tmp361_ = 2*(tmp360_);
   double tmp362_ = tmp361_*(tmp54_);
   double tmp363_ = 2*(tmp347_);
   double tmp364_ = tmp363_*(tmp34_);
   double tmp365_ = tmp362_+tmp364_;
   double tmp366_ = 0.500000*(tmp365_);
   double tmp367_ = (tmp366_)/tmp59_;
   double tmp368_ = (tmp34_)*(tmp367_);
   double tmp369_ = tmp348_-tmp368_;
   double tmp370_ = (tmp369_)/tmp233_;
   double tmp371_ = -(tmp370_);
   double tmp372_ = tmp371_*tmp64_;
   double tmp373_ = 2*tmp371_;
   double tmp374_ = tmp373_*(tmp61_);
   double tmp375_ = tmp374_*tmp66_;
   double tmp376_ = tmp372_+tmp375_;
   double tmp377_ = (tmp347_)-(tmp376_);
   double tmp378_ = tmp63_*(tmp377_);
   double tmp379_ = -(tmp378_);
   double tmp380_ = tmp379_/tmp103_;
   double tmp381_ = (tmp380_)*(tmp41_);
   double tmp382_ = tmp381_*(tmp75_);
   double tmp383_ = (tmp360_)*(tmp71_);
   double tmp384_ = (tmp380_)*(tmp54_);
   double tmp385_ = tmp383_+tmp384_;
   double tmp386_ = (tmp385_)*(tmp80_);
   double tmp387_ = tmp382_+tmp382_;
   double tmp388_ = tmp386_+tmp386_;
   double tmp389_ = tmp387_+tmp388_;
   double tmp390_ = (tmp389_)*(tmp83_);
   double tmp391_ = tmp390_+tmp390_;
   double tmp392_ = (tmp391_)*(tmp83_);
   double tmp393_ = (tmp389_)*tmp84_;
   double tmp394_ = tmp392_+tmp393_;
   double tmp395_ = (tmp394_)*(tmp83_);
   double tmp396_ = (tmp389_)*tmp85_;
   double tmp397_ = tmp395_+tmp396_;
   double tmp398_ = tmp176_*(tmp24_);
   double tmp399_ = tmp176_*tmp35_;
   double tmp400_ = tmp398_*tmp59_;
   double tmp401_ = 2*tmp399_;
   double tmp402_ = tmp401_*(tmp41_);
   double tmp403_ = tmp176_*(tmp45_);
   double tmp404_ = 2*tmp403_;
   double tmp405_ = tmp404_*(tmp54_);
   double tmp406_ = tmp402_+tmp405_;
   double tmp407_ = 2*tmp398_;
   double tmp408_ = tmp407_*(tmp34_);
   double tmp409_ = tmp406_+tmp408_;
   double tmp410_ = 0.500000*(tmp409_);
   double tmp411_ = (tmp410_)/tmp59_;
   double tmp412_ = (tmp34_)*(tmp411_);
   double tmp413_ = tmp400_-tmp412_;
   double tmp414_ = (tmp413_)/tmp233_;
   double tmp415_ = -(tmp414_);
   double tmp416_ = tmp399_*(tmp71_);
   double tmp417_ = tmp415_*tmp64_;
   double tmp418_ = 2*tmp415_;
   double tmp419_ = tmp418_*(tmp61_);
   double tmp420_ = tmp419_*tmp66_;
   double tmp421_ = tmp417_+tmp420_;
   double tmp422_ = tmp398_-(tmp421_);
   double tmp423_ = tmp63_*(tmp422_);
   double tmp424_ = -(tmp423_);
   double tmp425_ = tmp424_/tmp103_;
   double tmp426_ = (tmp425_)*(tmp41_);
   double tmp427_ = tmp416_+tmp426_;
   double tmp428_ = (tmp427_)*(tmp75_);
   double tmp429_ = tmp403_*(tmp71_);
   double tmp430_ = (tmp425_)*(tmp54_);
   double tmp431_ = tmp429_+tmp430_;
   double tmp432_ = (tmp431_)*(tmp80_);
   double tmp433_ = tmp428_+tmp428_;
   double tmp434_ = tmp432_+tmp432_;
   double tmp435_ = tmp433_+tmp434_;
   double tmp436_ = (tmp435_)*(tmp83_);
   double tmp437_ = tmp436_+tmp436_;
   double tmp438_ = (tmp437_)*(tmp83_);
   double tmp439_ = (tmp435_)*tmp84_;
   double tmp440_ = tmp438_+tmp439_;
   double tmp441_ = (tmp440_)*(tmp83_);
   double tmp442_ = (tmp435_)*tmp85_;
   double tmp443_ = tmp441_+tmp442_;
   double tmp444_ = tmp176_*(tmp29_);
   double tmp445_ = tmp176_*tmp37_;
   double tmp446_ = tmp444_*tmp59_;
   double tmp447_ = 2*tmp445_;
   double tmp448_ = tmp447_*(tmp41_);
   double tmp449_ = tmp176_*(tmp49_);
   double tmp450_ = 2*tmp449_;
   double tmp451_ = tmp450_*(tmp54_);
   double tmp452_ = tmp448_+tmp451_;
   double tmp453_ = 2*tmp444_;
   double tmp454_ = tmp453_*(tmp34_);
   double tmp455_ = tmp452_+tmp454_;
   double tmp456_ = 0.500000*(tmp455_);
   double tmp457_ = (tmp456_)/tmp59_;
   double tmp458_ = (tmp34_)*(tmp457_);
   double tmp459_ = tmp446_-tmp458_;
   double tmp460_ = (tmp459_)/tmp233_;
   double tmp461_ = -(tmp460_);
   double tmp462_ = tmp445_*(tmp71_);
   double tmp463_ = tmp461_*tmp64_;
   double tmp464_ = 2*tmp461_;
   double tmp465_ = tmp464_*(tmp61_);
   double tmp466_ = tmp465_*tmp66_;
   double tmp467_ = tmp463_+tmp466_;
   double tmp468_ = tmp444_-(tmp467_);
   double tmp469_ = tmp63_*(tmp468_);
   double tmp470_ = -(tmp469_);
   double tmp471_ = tmp470_/tmp103_;
   double tmp472_ = (tmp471_)*(tmp41_);
   double tmp473_ = tmp462_+tmp472_;
   double tmp474_ = (tmp473_)*(tmp75_);
   double tmp475_ = tmp449_*(tmp71_);
   double tmp476_ = (tmp471_)*(tmp54_);
   double tmp477_ = tmp475_+tmp476_;
   double tmp478_ = (tmp477_)*(tmp80_);
   double tmp479_ = tmp474_+tmp474_;
   double tmp480_ = tmp478_+tmp478_;
   double tmp481_ = tmp479_+tmp480_;
   double tmp482_ = (tmp481_)*(tmp83_);
   double tmp483_ = tmp482_+tmp482_;
   double tmp484_ = (tmp483_)*(tmp83_);
   double tmp485_ = (tmp481_)*tmp84_;
   double tmp486_ = tmp484_+tmp485_;
   double tmp487_ = (tmp486_)*(tmp83_);
   double tmp488_ = (tmp481_)*tmp85_;
   double tmp489_ = tmp487_+tmp488_;
   double tmp490_ = tmp176_*tmp32_;
   double tmp491_ = tmp490_*tmp59_;
   double tmp492_ = 2*tmp264_;
   double tmp493_ = tmp492_*(tmp41_);
   double tmp494_ = tmp176_*tmp52_;
   double tmp495_ = 2*tmp494_;
   double tmp496_ = tmp495_*(tmp54_);
   double tmp497_ = tmp493_+tmp496_;
   double tmp498_ = 2*tmp490_;
   double tmp499_ = tmp498_*(tmp34_);
   double tmp500_ = tmp497_+tmp499_;
   double tmp501_ = 0.500000*(tmp500_);
   double tmp502_ = (tmp501_)/tmp59_;
   double tmp503_ = (tmp34_)*(tmp502_);
   double tmp504_ = tmp491_-tmp503_;
   double tmp505_ = (tmp504_)/tmp233_;
   double tmp506_ = -(tmp505_);
   double tmp507_ = tmp264_*(tmp71_);
   double tmp508_ = tmp506_*tmp64_;
   double tmp509_ = 2*tmp506_;
   double tmp510_ = tmp509_*(tmp61_);
   double tmp511_ = tmp510_*tmp66_;
   double tmp512_ = tmp508_+tmp511_;
   double tmp513_ = tmp490_-(tmp512_);
   double tmp514_ = tmp63_*(tmp513_);
   double tmp515_ = -(tmp514_);
   double tmp516_ = tmp515_/tmp103_;
   double tmp517_ = (tmp516_)*(tmp41_);
   double tmp518_ = tmp507_+tmp517_;
   double tmp519_ = (tmp518_)*(tmp75_);
   double tmp520_ = tmp494_*(tmp71_);
   double tmp521_ = (tmp516_)*(tmp54_);
   double tmp522_ = tmp520_+tmp521_;
   double tmp523_ = (tmp522_)*(tmp80_);
   double tmp524_ = tmp519_+tmp519_;
   double tmp525_ = tmp523_+tmp523_;
   double tmp526_ = tmp524_+tmp525_;
   double tmp527_ = (tmp526_)*(tmp83_);
   double tmp528_ = tmp527_+tmp527_;
   double tmp529_ = (tmp528_)*(tmp83_);
   double tmp530_ = (tmp526_)*tmp84_;
   double tmp531_ = tmp529_+tmp530_;
   double tmp532_ = (tmp531_)*(tmp83_);
   double tmp533_ = (tmp526_)*tmp85_;
   double tmp534_ = tmp532_+tmp533_;
   double tmp535_ = (tmp24_)*tmp59_;
   double tmp536_ = 2*tmp35_;
   double tmp537_ = tmp536_*(tmp41_);
   double tmp538_ = 2*(tmp45_);
   double tmp539_ = tmp538_*(tmp54_);
   double tmp540_ = tmp537_+tmp539_;
   double tmp541_ = 2*(tmp24_);
   double tmp542_ = tmp541_*(tmp34_);
   double tmp543_ = tmp540_+tmp542_;
   double tmp544_ = 0.500000*(tmp543_);
   double tmp545_ = (tmp544_)/tmp59_;
   double tmp546_ = (tmp34_)*(tmp545_);
   double tmp547_ = tmp535_-tmp546_;
   double tmp548_ = (tmp547_)/tmp233_;
   double tmp549_ = -(tmp548_);
   double tmp550_ = tmp35_*(tmp71_);
   double tmp551_ = tmp549_*tmp64_;
   double tmp552_ = 2*tmp549_;
   double tmp553_ = tmp552_*(tmp61_);
   double tmp554_ = tmp553_*tmp66_;
   double tmp555_ = tmp551_+tmp554_;
   double tmp556_ = (tmp24_)-(tmp555_);
   double tmp557_ = tmp63_*(tmp556_);
   double tmp558_ = -(tmp557_);
   double tmp559_ = tmp558_/tmp103_;
   double tmp560_ = (tmp559_)*(tmp41_);
   double tmp561_ = tmp550_+tmp560_;
   double tmp562_ = (tmp561_)*(tmp75_);
   double tmp563_ = (tmp45_)*(tmp71_);
   double tmp564_ = (tmp559_)*(tmp54_);
   double tmp565_ = tmp563_+tmp564_;
   double tmp566_ = (tmp565_)*(tmp80_);
   double tmp567_ = tmp562_+tmp562_;
   double tmp568_ = tmp566_+tmp566_;
   double tmp569_ = tmp567_+tmp568_;
   double tmp570_ = (tmp569_)*(tmp83_);
   double tmp571_ = tmp570_+tmp570_;
   double tmp572_ = (tmp571_)*(tmp83_);
   double tmp573_ = (tmp569_)*tmp84_;
   double tmp574_ = tmp572_+tmp573_;
   double tmp575_ = (tmp574_)*(tmp83_);
   double tmp576_ = (tmp569_)*tmp85_;
   double tmp577_ = tmp575_+tmp576_;
   double tmp578_ = (tmp29_)*tmp59_;
   double tmp579_ = 2*tmp37_;
   double tmp580_ = tmp579_*(tmp41_);
   double tmp581_ = 2*(tmp49_);
   double tmp582_ = tmp581_*(tmp54_);
   double tmp583_ = tmp580_+tmp582_;
   double tmp584_ = 2*(tmp29_);
   double tmp585_ = tmp584_*(tmp34_);
   double tmp586_ = tmp583_+tmp585_;
   double tmp587_ = 0.500000*(tmp586_);
   double tmp588_ = (tmp587_)/tmp59_;
   double tmp589_ = (tmp34_)*(tmp588_);
   double tmp590_ = tmp578_-tmp589_;
   double tmp591_ = (tmp590_)/tmp233_;
   double tmp592_ = -(tmp591_);
   double tmp593_ = tmp37_*(tmp71_);
   double tmp594_ = tmp592_*tmp64_;
   double tmp595_ = 2*tmp592_;
   double tmp596_ = tmp595_*(tmp61_);
   double tmp597_ = tmp596_*tmp66_;
   double tmp598_ = tmp594_+tmp597_;
   double tmp599_ = (tmp29_)-(tmp598_);
   double tmp600_ = tmp63_*(tmp599_);
   double tmp601_ = -(tmp600_);
   double tmp602_ = tmp601_/tmp103_;
   double tmp603_ = (tmp602_)*(tmp41_);
   double tmp604_ = tmp593_+tmp603_;
   double tmp605_ = (tmp604_)*(tmp75_);
   double tmp606_ = (tmp49_)*(tmp71_);
   double tmp607_ = (tmp602_)*(tmp54_);
   double tmp608_ = tmp606_+tmp607_;
   double tmp609_ = (tmp608_)*(tmp80_);
   double tmp610_ = tmp605_+tmp605_;
   double tmp611_ = tmp609_+tmp609_;
   double tmp612_ = tmp610_+tmp611_;
   double tmp613_ = (tmp612_)*(tmp83_);
   double tmp614_ = tmp613_+tmp613_;
   double tmp615_ = (tmp614_)*(tmp83_);
   double tmp616_ = (tmp612_)*tmp84_;
   double tmp617_ = tmp615_+tmp616_;
   double tmp618_ = (tmp617_)*(tmp83_);
   double tmp619_ = (tmp612_)*tmp85_;
   double tmp620_ = tmp618_+tmp619_;
   double tmp621_ = tmp32_*tmp59_;
   double tmp622_ = 2*tmp5_;
   double tmp623_ = tmp622_*(tmp41_);
   double tmp624_ = 2*tmp52_;
   double tmp625_ = tmp624_*(tmp54_);
   double tmp626_ = tmp623_+tmp625_;
   double tmp627_ = 2*tmp32_;
   double tmp628_ = tmp627_*(tmp34_);
   double tmp629_ = tmp626_+tmp628_;
   double tmp630_ = 0.500000*(tmp629_);
   double tmp631_ = (tmp630_)/tmp59_;
   double tmp632_ = (tmp34_)*(tmp631_);
   double tmp633_ = tmp621_-tmp632_;
   double tmp634_ = (tmp633_)/tmp233_;
   double tmp635_ = -(tmp634_);
   double tmp636_ = tmp5_*(tmp71_);
   double tmp637_ = tmp635_*tmp64_;
   double tmp638_ = 2*tmp635_;
   double tmp639_ = tmp638_*(tmp61_);
   double tmp640_ = tmp639_*tmp66_;
   double tmp641_ = tmp637_+tmp640_;
   double tmp642_ = tmp32_-(tmp641_);
   double tmp643_ = tmp63_*(tmp642_);
   double tmp644_ = -(tmp643_);
   double tmp645_ = tmp644_/tmp103_;
   double tmp646_ = (tmp645_)*(tmp41_);
   double tmp647_ = tmp636_+tmp646_;
   double tmp648_ = (tmp647_)*(tmp75_);
   double tmp649_ = tmp52_*(tmp71_);
   double tmp650_ = (tmp645_)*(tmp54_);
   double tmp651_ = tmp649_+tmp650_;
   double tmp652_ = (tmp651_)*(tmp80_);
   double tmp653_ = tmp648_+tmp648_;
   double tmp654_ = tmp652_+tmp652_;
   double tmp655_ = tmp653_+tmp654_;
   double tmp656_ = (tmp655_)*(tmp83_);
   double tmp657_ = tmp656_+tmp656_;
   double tmp658_ = (tmp657_)*(tmp83_);
   double tmp659_ = (tmp655_)*tmp84_;
   double tmp660_ = tmp658_+tmp659_;
   double tmp661_ = (tmp660_)*(tmp83_);
   double tmp662_ = (tmp655_)*tmp85_;
   double tmp663_ = tmp661_+tmp662_;
   double tmp664_ = (tmp111_)*tmp87_;
   double tmp665_ = (tmp113_)*tmp90_;
   double tmp666_ = tmp664_+tmp665_;
   double tmp667_ = (tmp116_)*tmp93_;
   double tmp668_ = tmp666_+tmp667_;
   double tmp669_ = (tmp119_)*tmp96_;
   double tmp670_ = tmp668_+tmp669_;
   double tmp671_ = (tmp119_)*(tmp83_);
   double tmp672_ = (tmp111_)*tmp86_;
   double tmp673_ = tmp671_+tmp672_;
   double tmp674_ = (tmp673_)*tmp100_;
   double tmp675_ = tmp670_+tmp674_;
   double tmp676_ = (tmp120_)*tmp87_;
   double tmp677_ = (tmp122_)*tmp90_;
   double tmp678_ = tmp676_+tmp677_;
   double tmp679_ = (tmp125_)*tmp93_;
   double tmp680_ = tmp678_+tmp679_;
   double tmp681_ = (tmp128_)*tmp96_;
   double tmp682_ = tmp680_+tmp681_;
   double tmp683_ = (tmp128_)*(tmp83_);
   double tmp684_ = (tmp120_)*tmp86_;
   double tmp685_ = tmp683_+tmp684_;
   double tmp686_ = (tmp685_)*tmp100_;
   double tmp687_ = tmp682_+tmp686_;
   double tmp688_ = (tmp129_)*tmp87_;
   double tmp689_ = (tmp131_)*tmp90_;
   double tmp690_ = tmp688_+tmp689_;
   double tmp691_ = (tmp134_)*tmp93_;
   double tmp692_ = tmp690_+tmp691_;
   double tmp693_ = (tmp137_)*tmp96_;
   double tmp694_ = tmp692_+tmp693_;
   double tmp695_ = (tmp137_)*(tmp83_);
   double tmp696_ = (tmp129_)*tmp86_;
   double tmp697_ = tmp695_+tmp696_;
   double tmp698_ = (tmp697_)*tmp100_;
   double tmp699_ = tmp694_+tmp698_;
   double tmp700_ = (tmp148_)*tmp87_;
   double tmp701_ = (tmp150_)*tmp90_;
   double tmp702_ = tmp700_+tmp701_;
   double tmp703_ = (tmp153_)*tmp93_;
   double tmp704_ = tmp702_+tmp703_;
   double tmp705_ = (tmp156_)*tmp96_;
   double tmp706_ = tmp704_+tmp705_;
   double tmp707_ = (tmp156_)*(tmp83_);
   double tmp708_ = (tmp148_)*tmp86_;
   double tmp709_ = tmp707_+tmp708_;
   double tmp710_ = (tmp709_)*tmp100_;
   double tmp711_ = tmp706_+tmp710_;
   double tmp712_ = (tmp167_)*tmp87_;
   double tmp713_ = (tmp169_)*tmp90_;
   double tmp714_ = tmp712_+tmp713_;
   double tmp715_ = (tmp172_)*tmp93_;
   double tmp716_ = tmp714_+tmp715_;
   double tmp717_ = (tmp175_)*tmp96_;
   double tmp718_ = tmp716_+tmp717_;
   double tmp719_ = (tmp175_)*(tmp83_);
   double tmp720_ = (tmp167_)*tmp86_;
   double tmp721_ = tmp719_+tmp720_;
   double tmp722_ = (tmp721_)*tmp100_;
   double tmp723_ = tmp718_+tmp722_;
   double tmp724_ = (tmp178_)*tmp87_;
   double tmp725_ = (tmp180_)*tmp90_;
   double tmp726_ = tmp724_+tmp725_;
   double tmp727_ = (tmp183_)*tmp93_;
   double tmp728_ = tmp726_+tmp727_;
   double tmp729_ = (tmp186_)*tmp96_;
   double tmp730_ = tmp728_+tmp729_;
   double tmp731_ = (tmp186_)*(tmp83_);
   double tmp732_ = (tmp178_)*tmp86_;
   double tmp733_ = tmp731_+tmp732_;
   double tmp734_ = (tmp733_)*tmp100_;
   double tmp735_ = tmp730_+tmp734_;
   double tmp736_ = tmp176_*(tmp102_);
   double tmp737_ = (tmp188_)*tmp87_;
   double tmp738_ = (tmp190_)*tmp90_;
   double tmp739_ = tmp737_+tmp738_;
   double tmp740_ = (tmp193_)*tmp93_;
   double tmp741_ = tmp739_+tmp740_;
   double tmp742_ = (tmp196_)*tmp96_;
   double tmp743_ = tmp741_+tmp742_;
   double tmp744_ = (tmp196_)*(tmp83_);
   double tmp745_ = (tmp188_)*tmp86_;
   double tmp746_ = tmp744_+tmp745_;
   double tmp747_ = (tmp746_)*tmp100_;
   double tmp748_ = tmp743_+tmp747_;
   double tmp749_ = (tmp255_)*tmp87_;
   double tmp750_ = (tmp257_)*tmp90_;
   double tmp751_ = tmp749_+tmp750_;
   double tmp752_ = (tmp260_)*tmp93_;
   double tmp753_ = tmp751_+tmp752_;
   double tmp754_ = (tmp263_)*tmp96_;
   double tmp755_ = tmp753_+tmp754_;
   double tmp756_ = (tmp263_)*(tmp83_);
   double tmp757_ = (tmp255_)*tmp86_;
   double tmp758_ = tmp756_+tmp757_;
   double tmp759_ = (tmp758_)*tmp100_;
   double tmp760_ = tmp755_+tmp759_;
   double tmp761_ = (tmp325_)*tmp87_;
   double tmp762_ = (tmp327_)*tmp90_;
   double tmp763_ = tmp761_+tmp762_;
   double tmp764_ = (tmp330_)*tmp93_;
   double tmp765_ = tmp763_+tmp764_;
   double tmp766_ = (tmp333_)*tmp96_;
   double tmp767_ = tmp765_+tmp766_;
   double tmp768_ = (tmp333_)*(tmp83_);
   double tmp769_ = (tmp325_)*tmp86_;
   double tmp770_ = tmp768_+tmp769_;
   double tmp771_ = (tmp770_)*tmp100_;
   double tmp772_ = tmp767_+tmp771_;
   double tmp773_ = (tmp389_)*tmp87_;
   double tmp774_ = (tmp391_)*tmp90_;
   double tmp775_ = tmp773_+tmp774_;
   double tmp776_ = (tmp394_)*tmp93_;
   double tmp777_ = tmp775_+tmp776_;
   double tmp778_ = (tmp397_)*tmp96_;
   double tmp779_ = tmp777_+tmp778_;
   double tmp780_ = (tmp397_)*(tmp83_);
   double tmp781_ = (tmp389_)*tmp86_;
   double tmp782_ = tmp780_+tmp781_;
   double tmp783_ = (tmp782_)*tmp100_;
   double tmp784_ = tmp779_+tmp783_;
   double tmp785_ = (tmp435_)*tmp87_;
   double tmp786_ = (tmp437_)*tmp90_;
   double tmp787_ = tmp785_+tmp786_;
   double tmp788_ = (tmp440_)*tmp93_;
   double tmp789_ = tmp787_+tmp788_;
   double tmp790_ = (tmp443_)*tmp96_;
   double tmp791_ = tmp789_+tmp790_;
   double tmp792_ = (tmp443_)*(tmp83_);
   double tmp793_ = (tmp435_)*tmp86_;
   double tmp794_ = tmp792_+tmp793_;
   double tmp795_ = (tmp794_)*tmp100_;
   double tmp796_ = tmp791_+tmp795_;
   double tmp797_ = (tmp481_)*tmp87_;
   double tmp798_ = (tmp483_)*tmp90_;
   double tmp799_ = tmp797_+tmp798_;
   double tmp800_ = (tmp486_)*tmp93_;
   double tmp801_ = tmp799_+tmp800_;
   double tmp802_ = (tmp489_)*tmp96_;
   double tmp803_ = tmp801_+tmp802_;
   double tmp804_ = (tmp489_)*(tmp83_);
   double tmp805_ = (tmp481_)*tmp86_;
   double tmp806_ = tmp804_+tmp805_;
   double tmp807_ = (tmp806_)*tmp100_;
   double tmp808_ = tmp803_+tmp807_;
   double tmp809_ = (tmp526_)*tmp87_;
   double tmp810_ = (tmp528_)*tmp90_;
   double tmp811_ = tmp809_+tmp810_;
   double tmp812_ = (tmp531_)*tmp93_;
   double tmp813_ = tmp811_+tmp812_;
   double tmp814_ = (tmp534_)*tmp96_;
   double tmp815_ = tmp813_+tmp814_;
   double tmp816_ = (tmp534_)*(tmp83_);
   double tmp817_ = (tmp526_)*tmp86_;
   double tmp818_ = tmp816_+tmp817_;
   double tmp819_ = (tmp818_)*tmp100_;
   double tmp820_ = tmp815_+tmp819_;
   double tmp821_ = (tmp569_)*tmp87_;
   double tmp822_ = (tmp571_)*tmp90_;
   double tmp823_ = tmp821_+tmp822_;
   double tmp824_ = (tmp574_)*tmp93_;
   double tmp825_ = tmp823_+tmp824_;
   double tmp826_ = (tmp577_)*tmp96_;
   double tmp827_ = tmp825_+tmp826_;
   double tmp828_ = (tmp577_)*(tmp83_);
   double tmp829_ = (tmp569_)*tmp86_;
   double tmp830_ = tmp828_+tmp829_;
   double tmp831_ = (tmp830_)*tmp100_;
   double tmp832_ = tmp827_+tmp831_;
   double tmp833_ = (tmp612_)*tmp87_;
   double tmp834_ = (tmp614_)*tmp90_;
   double tmp835_ = tmp833_+tmp834_;
   double tmp836_ = (tmp617_)*tmp93_;
   double tmp837_ = tmp835_+tmp836_;
   double tmp838_ = (tmp620_)*tmp96_;
   double tmp839_ = tmp837_+tmp838_;
   double tmp840_ = (tmp620_)*(tmp83_);
   double tmp841_ = (tmp612_)*tmp86_;
   double tmp842_ = tmp840_+tmp841_;
   double tmp843_ = (tmp842_)*tmp100_;
   double tmp844_ = tmp839_+tmp843_;
   double tmp845_ = (tmp655_)*tmp87_;
   double tmp846_ = (tmp657_)*tmp90_;
   double tmp847_ = tmp845_+tmp846_;
   double tmp848_ = (tmp660_)*tmp93_;
   double tmp849_ = tmp847_+tmp848_;
   double tmp850_ = (tmp663_)*tmp96_;
   double tmp851_ = tmp849_+tmp850_;
   double tmp852_ = (tmp663_)*(tmp83_);
   double tmp853_ = (tmp655_)*tmp86_;
   double tmp854_ = tmp852_+tmp853_;
   double tmp855_ = (tmp854_)*tmp100_;
   double tmp856_ = tmp851_+tmp855_;

  mVal[0] = ((tmp62_+(tmp75_)*(tmp102_))-mLocXIm)*mLocScNorm;

  mCompDer[0][0] = (tmp105_*(tmp102_)+(tmp675_)*(tmp75_))*mLocScNorm;
  mCompDer[0][1] = (tmp102_+(tmp687_)*(tmp75_))*mLocScNorm;
  mCompDer[0][2] = (tmp699_)*(tmp75_)*mLocScNorm;
  mCompDer[0][3] = (tmp142_*(tmp102_)+(tmp711_)*(tmp75_))*mLocScNorm;
  mCompDer[0][4] = (tmp161_*(tmp102_)+(tmp723_)*(tmp75_))*mLocScNorm;
  mCompDer[0][5] = (1+tmp736_+(tmp735_)*(tmp75_))*mLocScNorm;
  mCompDer[0][6] = (tmp748_)*(tmp75_)*mLocScNorm;
  mCompDer[0][7] = (tmp83_)*(tmp75_)*mLocScNorm;
  mCompDer[0][8] = tmp84_*(tmp75_)*mLocScNorm;
  mCompDer[0][9] = tmp85_*(tmp75_)*mLocScNorm;
  mCompDer[0][10] = tmp86_*(tmp75_)*mLocScNorm;
  mCompDer[0][11] = tmp99_*(tmp75_)*mLocScNorm;
  mCompDer[0][12] = ((tmp247_)*(tmp102_)+(tmp760_)*(tmp75_))*mLocScNorm;
  mCompDer[0][13] = ((tmp317_)*(tmp102_)+(tmp772_)*(tmp75_))*mLocScNorm;
  mCompDer[0][14] = (tmp381_*(tmp102_)+(tmp784_)*(tmp75_))*mLocScNorm;
  mCompDer[0][15] = ((tmp427_)*(tmp102_)+(tmp796_)*(tmp75_))*mLocScNorm;
  mCompDer[0][16] = ((tmp473_)*(tmp102_)+(tmp808_)*(tmp75_))*mLocScNorm;
  mCompDer[0][17] = ((tmp518_)*(tmp102_)+(tmp820_)*(tmp75_))*mLocScNorm;
  mCompDer[0][18] = ((tmp561_)*(tmp102_)+(tmp832_)*(tmp75_))*mLocScNorm;
  mCompDer[0][19] = ((tmp604_)*(tmp102_)+(tmp844_)*(tmp75_))*mLocScNorm;
  mCompDer[0][20] = ((tmp647_)*(tmp102_)+(tmp856_)*(tmp75_))*mLocScNorm;
  mVal[1] = ((tmp79_+(tmp80_)*(tmp102_))-mLocYIm)*mLocScNorm;

  mCompDer[1][0] = (tmp107_*(tmp102_)+(tmp675_)*(tmp80_))*mLocScNorm;
  mCompDer[1][1] = (tmp687_)*(tmp80_)*mLocScNorm;
  mCompDer[1][2] = (tmp102_+(tmp699_)*(tmp80_))*mLocScNorm;
  mCompDer[1][3] = (tmp144_*(tmp102_)+(tmp711_)*(tmp80_))*mLocScNorm;
  mCompDer[1][4] = (tmp163_*(tmp102_)+(tmp723_)*(tmp80_))*mLocScNorm;
  mCompDer[1][5] = (tmp735_)*(tmp80_)*mLocScNorm;
  mCompDer[1][6] = (1+tmp736_+(tmp748_)*(tmp80_))*mLocScNorm;
  mCompDer[1][7] = (tmp83_)*(tmp80_)*mLocScNorm;
  mCompDer[1][8] = tmp84_*(tmp80_)*mLocScNorm;
  mCompDer[1][9] = tmp85_*(tmp80_)*mLocScNorm;
  mCompDer[1][10] = tmp86_*(tmp80_)*mLocScNorm;
  mCompDer[1][11] = tmp99_*(tmp80_)*mLocScNorm;
  mCompDer[1][12] = ((tmp251_)*(tmp102_)+(tmp760_)*(tmp80_))*mLocScNorm;
  mCompDer[1][13] = ((tmp321_)*(tmp102_)+(tmp772_)*(tmp80_))*mLocScNorm;
  mCompDer[1][14] = ((tmp385_)*(tmp102_)+(tmp784_)*(tmp80_))*mLocScNorm;
  mCompDer[1][15] = ((tmp431_)*(tmp102_)+(tmp796_)*(tmp80_))*mLocScNorm;
  mCompDer[1][16] = ((tmp477_)*(tmp102_)+(tmp808_)*(tmp80_))*mLocScNorm;
  mCompDer[1][17] = ((tmp522_)*(tmp102_)+(tmp820_)*(tmp80_))*mLocScNorm;
  mCompDer[1][18] = ((tmp565_)*(tmp102_)+(tmp832_)*(tmp80_))*mLocScNorm;
  mCompDer[1][19] = ((tmp608_)*(tmp102_)+(tmp844_)*(tmp80_))*mLocScNorm;
  mCompDer[1][20] = ((tmp651_)*(tmp102_)+(tmp856_)*(tmp80_))*mLocScNorm;
}


void cEqAppui_AFocal_PTInc_M2CDRad5::ComputeValDerivHessian()
{
  ELISE_ASSERT(false,"Foncteur cEqAppui_AFocal_PTInc_M2CDRad5 Has no Der Sec");
}

void cEqAppui_AFocal_PTInc_M2CDRad5::SetScNorm(double aVal){ mLocScNorm = aVal;}
void cEqAppui_AFocal_PTInc_M2CDRad5::SetXIm(double aVal){ mLocXIm = aVal;}
void cEqAppui_AFocal_PTInc_M2CDRad5::SetYIm(double aVal){ mLocYIm = aVal;}



double * cEqAppui_AFocal_PTInc_M2CDRad5::AdrVarLocFromString(const std::string & aName)
{
   if (aName == "ScNorm") return & mLocScNorm;
   if (aName == "XIm") return & mLocXIm;
   if (aName == "YIm") return & mLocYIm;
   return 0;
}


cElCompiledFonc::cAutoAddEntry cEqAppui_AFocal_PTInc_M2CDRad5::mTheAuto("cEqAppui_AFocal_PTInc_M2CDRad5",cEqAppui_AFocal_PTInc_M2CDRad5::Alloc);


cElCompiledFonc *  cEqAppui_AFocal_PTInc_M2CDRad5::Alloc()
{  return new cEqAppui_AFocal_PTInc_M2CDRad5();
}


