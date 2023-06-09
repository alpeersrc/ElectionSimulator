#include "Results.h"

Results::Results()
{
	foreseen.getParty("AKP")->setVote(31.1);
	foreseen.getParty("MHP")->setVote(6.2);
	foreseen.getParty("CHP")->setVote(25.2);
	foreseen.getParty("IYIP")->setVote(14.3);
	foreseen.getParty("SP")->setVote(0.8);
	foreseen.getParty("YSP")->setVote(8.7);
	foreseen.getParty("DEVA")->setVote(1.4);
	foreseen.getParty("GP")->setVote(1.0);
	foreseen.getParty("TIP")->setVote(2.0);
	foreseen.getParty("MP")->setVote(4.1);
	foreseen.getParty("ZP")->setVote(1.4);
	foreseen.getParty("BBP")->setVote(1.6);
	foreseen.getParty("YRP")->setVote(1.5);
	foreseen.getParty("DP")->setVote(0.1);
	foreseen.getParty("HUDAPAR")->setVote(0.4);
	foreseen.getParty("EMEP")->setVote(0.1);
	foreseen.getParty("DSP")->setVote(0.1);
	
	previous.getParty("AKP")->setVote(42.6);
	previous.getParty("MHP")->setVote(11.1);
	previous.getParty("CHP")->setVote(22.6);
	previous.getParty("IYIP")->setVote(10);
	previous.getParty("SP")->setVote(1.3);
	previous.getParty("YSP")->setVote(11.7);
	previous.getParty("HUDAPAR")->setVote(0.42);
}

void Results::setToPrevious()
{
	districts[0].setName("Adana");
	districts[0].setNoOfSeats(15);
	districts[0].setCensus(1564);
	districts[0].setVote("AKP", 34.69);
	districts[0].setVote("MHP", 11.76);
	districts[0].setVote("CHP", 26.06);
	districts[0].setVote("IYIP", 12.15);
	districts[0].setVote("SP", 1.06);
	districts[0].setVote("YSP", 13.51);
	districts[0].setVote("HUDAPAR", 0.55);

	districts[1].setName("Adiyaman");
	districts[1].setNoOfSeats(5);
	districts[1].setCensus(409);
	districts[1].setVote("AKP", 55.1);
	districts[1].setVote("MHP", 9.15);
	districts[1].setVote("CHP", 12.05);
	districts[1].setVote("IYIP", 5.27);
	districts[1].setVote("SP", 1.62);
	districts[1].setVote("YSP", 15.41);
	districts[1].setVote("HUDAPAR", 1.23);

	districts[2].setName("Afyonkarahisar");
	districts[2].setNoOfSeats(6);
	districts[2].setCensus(521);
	districts[2].setVote("AKP", 55.38);
	districts[2].setVote("MHP", 13.95);
	districts[2].setVote("CHP", 14.46);
	districts[2].setVote("IYIP", 13.38);
	districts[2].setVote("SP", 1.11);
	districts[2].setVote("YSP", 1.25);
	districts[2].setVote("HUDAPAR", 0.22);

	districts[3].setName("Agri");
	districts[3].setNoOfSeats(4);
	districts[3].setCensus(302);
	districts[3].setVote("AKP", 28.81);
	districts[3].setVote("MHP", 2.51);
	districts[3].setVote("CHP", 2.91);
	districts[3].setVote("IYIP", 1.66);
	districts[3].setVote("SP", 0.82);
	districts[3].setVote("YSP", 62.23);
	districts[3].setVote("HUDAPAR", 0.75);

	districts[4].setName("Aksaray");
	districts[4].setNoOfSeats(4);
	districts[4].setCensus(274);
	districts[4].setVote("AKP", 56.15);
	districts[4].setVote("MHP", 20.54);
	districts[4].setVote("CHP", 9.9);
	districts[4].setVote("IYIP", 10.54);
	districts[4].setVote("SP", 0.83);
	districts[4].setVote("YSP", 1.57);
	districts[4].setVote("HUDAPAR", 0.28);

	districts[5].setName("Amasya");
	districts[5].setNoOfSeats(3);
	districts[5].setCensus(253);
	districts[5].setVote("AKP", 46.99);
	districts[5].setVote("MHP", 12.41);
	districts[5].setVote("CHP", 24.75);
	districts[5].setVote("IYIP", 12.11);
	districts[5].setVote("SP", 1.11);
	districts[5].setVote("YSP", 2.27);
	districts[5].setVote("HUDAPAR", 0.16);

	districts[6].setName("Ankara I");
	districts[6].setNoOfSeats(13);
	districts[6].setCensus(1440);
	districts[6].setVote("AKP", 30.83);
	districts[6].setVote("MHP", 10.71);
	districts[6].setVote("CHP", 35.49);
	districts[6].setVote("IYIP", 12.33);
	districts[6].setVote("SP", 1.37);
	districts[6].setVote("YSP", 8.83);
	districts[6].setVote("HUDAPAR", 0.09);

	districts[7].setName("Ankara II");
	districts[7].setNoOfSeats(11);
	districts[7].setCensus(1217);
	districts[7].setVote("AKP", 51.07);
	districts[7].setVote("MHP", 14.93);
	districts[7].setVote("CHP", 17.52);
	districts[7].setVote("IYIP", 10.42);
	districts[7].setVote("SP", 1.54);
	districts[7].setVote("YSP", 4.21);
	districts[7].setVote("HUDAPAR", 0.12);

	districts[8].setName("Ankara III");
	districts[8].setNoOfSeats(12);
	districts[8].setCensus(1354);
	districts[8].setVote("AKP", 41.08);
	districts[8].setVote("MHP", 14.01);
	districts[8].setVote("CHP", 23.81);
	districts[8].setVote("IYIP", 13.34);
	districts[8].setVote("SP", 1.59);
	districts[8].setVote("YSP", 5.8);
	districts[8].setVote("HUDAPAR", 0.12);

	districts[9].setName("Antalya");
	districts[9].setNoOfSeats(17);
	districts[9].setCensus(1753);
	districts[9].setVote("AKP", 34.96);
	districts[9].setVote("MHP", 10.12);
	districts[9].setVote("CHP", 29.15);
	districts[9].setVote("IYIP", 16.9);
	districts[9].setVote("SP", 0.96);
	districts[9].setVote("YSP", 7.34);
	districts[9].setVote("HUDAPAR", 0.22);

	districts[10].setName("Ardahan");
	districts[10].setNoOfSeats(2);
	districts[10].setCensus(71);
	districts[10].setVote("AKP", 37.15);
	districts[10].setVote("MHP", 6.77);
	districts[10].setVote("CHP", 25.87);
	districts[10].setVote("IYIP", 5.12);
	districts[10].setVote("SP", 1);
	districts[10].setVote("YSP", 23.38);
	districts[10].setVote("HUDAPAR", 0.35);

	districts[11].setName("Artvin");
	districts[11].setNoOfSeats(2);
	districts[11].setCensus(135);
	districts[11].setVote("AKP", 40.51);
	districts[11].setVote("MHP", 10.2);
	districts[11].setVote("CHP", 32.03);
	districts[11].setVote("IYIP", 10.24);
	districts[11].setVote("SP", 1.45);
	districts[11].setVote("YSP", 4.92);
	districts[11].setVote("HUDAPAR", 0.28);

	districts[12].setName("Aydin");
	districts[12].setNoOfSeats(8);
	districts[12].setCensus(838);
	districts[12].setVote("AKP", 32.51);
	districts[12].setVote("MHP", 8.09);
	districts[12].setVote("CHP", 33.93);
	districts[12].setVote("IYIP", 14.77);
	districts[12].setVote("SP", 0.71);
	districts[12].setVote("YSP", 9.37);
	districts[12].setVote("HUDAPAR", 0.25);

	districts[13].setName("Balikesir");
	districts[13].setNoOfSeats(9);
	districts[13].setCensus(971);
	districts[13].setVote("AKP", 41.4);
	districts[13].setVote("MHP", 7.56);
	districts[13].setVote("CHP", 30.37);
	districts[13].setVote("IYIP", 14.71);
	districts[13].setVote("SP", 1.17);
	districts[13].setVote("YSP", 4.25);
	districts[13].setVote("HUDAPAR", 0.18);

	districts[14].setName("Bartin");
	districts[14].setNoOfSeats(2);
	districts[14].setCensus(151);
	districts[14].setVote("AKP", 47.03);
	districts[14].setVote("MHP", 17.03);
	districts[14].setVote("CHP", 25.46);
	districts[14].setVote("IYIP", 5.84);
	districts[14].setVote("SP", 2.12);
	districts[14].setVote("YSP", 1.72);
	districts[14].setVote("HUDAPAR", 0.28);

	districts[15].setName("Batman");
	districts[15].setNoOfSeats(5);
	districts[15].setCensus(351);
	districts[15].setVote("AKP", 24.91);
	districts[15].setVote("MHP", 1.22);
	districts[15].setVote("CHP", 1.87);
	districts[15].setVote("IYIP", 1.2);
	districts[15].setVote("SP", 3.12);
	districts[15].setVote("YSP", 62.07);
	districts[15].setVote("HUDAPAR", 5.46);

	districts[16].setName("Bayburt");
	districts[16].setNoOfSeats(1);
	districts[16].setCensus(58);
	districts[16].setVote("AKP", 57.45);
	districts[16].setVote("MHP", 27.41);
	districts[16].setVote("CHP", 4.27);
	districts[16].setVote("IYIP", 6.15);
	districts[16].setVote("SP", 3.24);
	districts[16].setVote("YSP", 1.21);
	districts[16].setVote("HUDAPAR", 0.16);

	districts[17].setName("Bilecik");
	districts[17].setNoOfSeats(2);
	districts[17].setCensus(159);
	districts[17].setVote("AKP", 43.3);
	districts[17].setVote("MHP", 9.34);
	districts[17].setVote("CHP", 28.15);
	districts[17].setVote("IYIP", 14.11);
	districts[17].setVote("SP", 1.12);
	districts[17].setVote("YSP", 3.37);
	districts[17].setVote("HUDAPAR", 0.32);

	districts[18].setName("Bingol");
	districts[18].setNoOfSeats(3);
	districts[18].setCensus(185);
	districts[18].setVote("AKP", 55.28);
	districts[18].setVote("MHP", 5.87);
	districts[18].setVote("CHP", 2.29);
	districts[18].setVote("IYIP", 4.08);
	districts[18].setVote("SP", 1.08);
	districts[18].setVote("YSP", 26.81);
	districts[18].setVote("HUDAPAR", 4.35);

	districts[19].setName("Bitlis");
	districts[19].setNoOfSeats(3);
	districts[19].setCensus(203);
	districts[19].setVote("AKP", 44.82);
	districts[19].setVote("MHP", 4.08);
	districts[19].setVote("CHP", 2.73);
	districts[19].setVote("IYIP", 3.28);
	districts[19].setVote("SP", 1.11);
	districts[19].setVote("YSP", 42.54);
	districts[19].setVote("HUDAPAR", 1.1);

	districts[20].setName("Bolu");
	districts[20].setNoOfSeats(3);
	districts[20].setCensus(229);
	districts[20].setVote("AKP", 52.13);
	districts[20].setVote("MHP", 14.94);
	districts[20].setVote("CHP", 20.31);
	districts[20].setVote("IYIP", 8.55);
	districts[20].setVote("SP", 1.52);
	districts[20].setVote("YSP", 2.08);
	districts[20].setVote("HUDAPAR", 0.19);

	districts[21].setName("Burdur");
	districts[21].setNoOfSeats(3);
	districts[21].setCensus(202);
	districts[21].setVote("AKP", 43.15);
	districts[21].setVote("MHP", 12.5);
	districts[21].setVote("CHP", 20.23);
	districts[21].setVote("IYIP", 19.93);
	districts[21].setVote("SP", 1.53);
	districts[21].setVote("YSP", 1.92);
	districts[21].setVote("HUDAPAR", 0.32);

	districts[22].setName("Bursa I");
	districts[22].setNoOfSeats(10);
	districts[22].setCensus(1131);
	districts[22].setVote("AKP", 43.21);
	districts[22].setVote("MHP", 9.92);
	districts[22].setVote("CHP", 25.75);
	districts[22].setVote("IYIP", 14.22);
	districts[22].setVote("SP", 1.65);
	districts[22].setVote("YSP", 4.76);
	districts[22].setVote("HUDAPAR", 0.17);

	districts[23].setName("Bursa II");
	districts[23].setNoOfSeats(10);
	districts[23].setCensus(1076);
	districts[23].setVote("AKP", 49.33);
	districts[23].setVote("MHP", 11.58);
	districts[23].setVote("CHP", 19.5);
	districts[23].setVote("IYIP", 10.58);
	districts[23].setVote("SP", 1.79);
	districts[23].setVote("YSP", 6.68);
	districts[23].setVote("HUDAPAR", 0.29);

	districts[24].setName("Canakkale");
	districts[24].setNoOfSeats(4);
	districts[24].setCensus(418);
	districts[24].setVote("AKP", 37.37);
	districts[24].setVote("MHP", 6.93);
	districts[24].setVote("CHP", 33.82);
	districts[24].setVote("IYIP", 16.77);
	districts[24].setVote("SP", 0.77);
	districts[24].setVote("YSP", 3.75);
	districts[24].setVote("HUDAPAR", 0.19);

	districts[25].setName("Cankiri");
	districts[25].setNoOfSeats(2);
	districts[25].setCensus(138);
	districts[25].setVote("AKP", 59.21);
	districts[25].setVote("MHP", 19.62);
	districts[25].setVote("CHP", 6.7);
	districts[25].setVote("IYIP", 11.87);
	districts[25].setVote("SP", 1.1);
	districts[25].setVote("YSP", 1.11);
	districts[25].setVote("HUDAPAR", 0.17);

	districts[26].setName("Corum");
	districts[26].setNoOfSeats(4);
	districts[26].setCensus(401);
	districts[26].setVote("AKP", 52.01);
	districts[26].setVote("MHP", 14.03);
	districts[26].setVote("CHP", 20.33);
	districts[26].setVote("IYIP", 8.41);
	districts[26].setVote("SP", 1.09);
	districts[26].setVote("YSP", 3.64);
	districts[26].setVote("HUDAPAR", 0.24);

	districts[27].setName("Denizli");
	districts[27].setNoOfSeats(7);
	districts[27].setCensus(768);
	districts[27].setVote("AKP", 40.74);
	districts[27].setVote("MHP", 9.22);
	districts[27].setVote("CHP", 28.05);
	districts[27].setVote("IYIP", 16.46);
	districts[27].setVote("SP", 0.84);
	districts[27].setVote("YSP", 4.03);
	districts[27].setVote("HUDAPAR", 0.25);

	districts[28].setName("Diyarbakir");
	districts[28].setNoOfSeats(12);
	districts[28].setCensus(1049);
	districts[28].setVote("AKP", 21.46);
	districts[28].setVote("MHP", 1.41);
	districts[28].setVote("CHP", 2.5);
	districts[28].setVote("IYIP", 2.79);
	districts[28].setVote("SP", 1.69);
	districts[28].setVote("YSP", 65.54);
	districts[28].setVote("HUDAPAR", 4.43);

	districts[29].setName("Duzce");
	districts[29].setNoOfSeats(3);
	districts[29].setCensus(275);
	districts[29].setVote("AKP", 56.1);
	districts[29].setVote("MHP", 18.71);
	districts[29].setVote("CHP", 14.53);
	districts[29].setVote("IYIP", 6.74);
	districts[29].setVote("SP", 1.49);
	districts[29].setVote("YSP", 2.04);
	districts[29].setVote("HUDAPAR", 0.13);

	districts[30].setName("Edirne");
	districts[30].setNoOfSeats(4);
	districts[30].setCensus(319);
	districts[30].setVote("AKP", 28.58);
	districts[30].setVote("MHP", 5.05);
	districts[30].setVote("CHP", 45.4);
	districts[30].setVote("IYIP", 15.64);
	districts[30].setVote("SP", 1.03);
	districts[30].setVote("YSP", 3.68);
	districts[30].setVote("HUDAPAR", 0.22);

	districts[31].setName("Elazig");
	districts[31].setNoOfSeats(5);
	districts[31].setCensus(422);
	districts[31].setVote("AKP", 54.58);
	districts[31].setVote("MHP", 13.54);
	districts[31].setVote("CHP", 10.74);
	districts[31].setVote("IYIP", 7.67);
	districts[31].setVote("SP", 1.76);
	districts[31].setVote("YSP", 10.05);
	districts[31].setVote("HUDAPAR", 1.48);

	districts[32].setName("Erzincan");
	districts[32].setNoOfSeats(2);
	districts[32].setCensus(167);
	districts[32].setVote("AKP", 44.76);
	districts[32].setVote("MHP", 18.62);
	districts[32].setVote("CHP", 25.5);
	districts[32].setVote("IYIP", 4.17);
	districts[32].setVote("SP", 1.1);
	districts[32].setVote("YSP", 5.65);
	districts[32].setVote("HUDAPAR", 0.1);

	districts[33].setName("Erzurum");
	districts[33].setNoOfSeats(6);
	districts[33].setCensus(507);
	districts[33].setVote("AKP", 54.81);
	districts[33].setVote("MHP", 18.53);
	districts[33].setVote("CHP", 4.42);
	districts[33].setVote("IYIP", 8.15);
	districts[33].setVote("SP", 1.76);
	districts[33].setVote("YSP", 11.96);
	districts[33].setVote("HUDAPAR", 0.19);

	districts[34].setName("Eskisehir");
	districts[34].setNoOfSeats(6);
	districts[34].setCensus(663);
	districts[34].setVote("AKP", 38.78);
	districts[34].setVote("MHP", 9.93);
	districts[34].setVote("CHP", 32.26);
	districts[34].setVote("IYIP", 13.2);
	districts[34].setVote("SP", 1.11);
	districts[34].setVote("YSP", 4.28);
	districts[34].setVote("HUDAPAR", 0.13);

	districts[35].setName("Gaziantep");
	districts[35].setNoOfSeats(14);
	districts[35].setCensus(1246);
	districts[35].setVote("AKP", 51.44);
	districts[35].setVote("MHP", 12.67);
	districts[35].setVote("CHP", 15.11);
	districts[35].setVote("IYIP", 6.68);
	districts[35].setVote("SP", 1.2);
	districts[35].setVote("YSP", 11.88);
	districts[35].setVote("HUDAPAR", 0.83);

	districts[36].setName("Giresun");
	districts[36].setNoOfSeats(4);
	districts[36].setCensus(343);
	districts[36].setVote("AKP", 53.57);
	districts[36].setVote("MHP", 10.9);
	districts[36].setVote("CHP", 17.77);
	districts[36].setVote("IYIP", 14.38);
	districts[36].setVote("SP", 1.26);
	districts[36].setVote("YSP", 1.54);
	districts[36].setVote("HUDAPAR", 0.29);

	districts[37].setName("Gumushane");
	districts[37].setNoOfSeats(2);
	districts[37].setCensus(81);
	districts[37].setVote("AKP", 56.86);
	districts[37].setVote("MHP", 20.56);
	districts[37].setVote("CHP", 7.45);
	districts[37].setVote("IYIP", 11.34);
	districts[37].setVote("SP", 1.97);
	districts[37].setVote("YSP", 1.32);
	districts[37].setVote("HUDAPAR", 0.27);

	districts[38].setName("Hakkari");
	districts[38].setNoOfSeats(3);
	districts[38].setCensus(140);
	districts[38].setVote("AKP", 20.07);
	districts[38].setVote("MHP", 3.7);
	districts[38].setVote("CHP", 3.46);
	districts[38].setVote("IYIP", 1.31);
	districts[38].setVote("SP", 0.53);
	districts[38].setVote("YSP", 70.17);
	districts[38].setVote("HUDAPAR", 0.57);

	districts[39].setName("Hatay");
	districts[39].setNoOfSeats(11);
	districts[39].setCensus(940);
	districts[39].setVote("AKP", 36.2);
	districts[39].setVote("MHP", 14.44);
	districts[39].setVote("CHP", 30.58);
	districts[39].setVote("IYIP", 6.53);
	districts[39].setVote("SP", 0.91);
	districts[39].setVote("YSP", 11.02);
	districts[39].setVote("HUDAPAR", 0.17);

	districts[40].setName("Igdir");
	districts[40].setNoOfSeats(2);
	districts[40].setCensus(94);
	districts[40].setVote("AKP", 20.72);
	districts[40].setVote("MHP", 23.9);
	districts[40].setVote("CHP", 2.84);
	districts[40].setVote("IYIP", 5.87);
	districts[40].setVote("SP", 2);
	districts[40].setVote("YSP", 44.23);
	districts[40].setVote("HUDAPAR", 0.22);

	districts[41].setName("Isparta");
	districts[41].setNoOfSeats(4);
	districts[41].setCensus(280);
	districts[41].setVote("AKP", 47.79);
	districts[41].setVote("MHP", 13.11);
	districts[41].setVote("CHP", 16.51);
	districts[41].setVote("IYIP", 18.39);
	districts[41].setVote("SP", 1.5);
	districts[41].setVote("YSP", 2.12);
	districts[41].setVote("HUDAPAR", 0.26);

	districts[42].setName("Istanbul I");
	districts[42].setNoOfSeats(35);
	districts[42].setCensus(3924);
	districts[42].setVote("AKP", 41.47);
	districts[42].setVote("MHP", 8.19);
	districts[42].setVote("CHP", 28.89);
	districts[42].setVote("IYIP", 8.16);
	districts[42].setVote("SP", 1.55);
	districts[42].setVote("YSP", 11.31);
	districts[42].setVote("HUDAPAR", 0.15);

	districts[43].setName("Istanbul II");
	districts[43].setNoOfSeats(27);
	districts[43].setCensus(3125);
	districts[43].setVote("AKP", 45.22);
	districts[43].setVote("MHP", 8.11);
	districts[43].setVote("CHP", 24.77);
	districts[43].setVote("IYIP", 7.58);
	districts[43].setVote("SP", 1.57);
	districts[43].setVote("YSP", 12.29);
	districts[43].setVote("HUDAPAR", 0.21);

	districts[44].setName("Istanbul III");
	districts[44].setNoOfSeats(36);
	districts[44].setCensus(3795);
	districts[44].setVote("AKP", 41.9);
	districts[44].setVote("MHP", 8.46);
	districts[44].setVote("CHP", 25.26);
	districts[44].setVote("IYIP", 8.15);
	districts[44].setVote("SP", 1.37);
	districts[44].setVote("YSP", 14.4);
	districts[44].setVote("HUDAPAR", 0.22);

	districts[45].setName("Izmir I");
	districts[45].setNoOfSeats(14);
	districts[45].setCensus(1620);
	districts[45].setVote("AKP", 28.75);
	districts[45].setVote("MHP", 5.86);
	districts[45].setVote("CHP", 41.06);
	districts[45].setVote("IYIP", 10.48);
	districts[45].setVote("SP", 0.79);
	districts[45].setVote("YSP", 12.52);
	districts[45].setVote("HUDAPAR", 0.16);

	districts[46].setName("Izmir II");
	districts[46].setNoOfSeats(14);
	districts[46].setCensus(1695);
	districts[46].setVote("AKP", 28.65);
	districts[46].setVote("MHP", 6.69);
	districts[46].setVote("CHP", 41.53);
	districts[46].setVote("IYIP", 11.25);
	districts[46].setVote("SP", 0.81);
	districts[46].setVote("YSP", 10.51);
	districts[46].setVote("HUDAPAR", 0.17);

	districts[47].setName("Kahramanmaras");
	districts[47].setNoOfSeats(8);
	districts[47].setCensus(669);
	districts[47].setVote("AKP", 58.46);
	districts[47].setVote("MHP", 16.33);
	districts[47].setVote("CHP", 9.76);
	districts[47].setVote("IYIP", 9.63);
	districts[47].setVote("SP", 1.5);
	districts[47].setVote("YSP", 3.85);
	districts[47].setVote("HUDAPAR", 0.27);

	districts[48].setName("Karabuk");
	districts[48].setNoOfSeats(3);
	districts[48].setCensus(155);
	districts[48].setVote("AKP", 53.81);
	districts[48].setVote("MHP", 13.58);
	districts[48].setVote("CHP", 16.66);
	districts[48].setVote("IYIP", 12.17);
	districts[48].setVote("SP", 1.72);
	districts[48].setVote("YSP", 1.48);
	districts[48].setVote("HUDAPAR", 0.21);

	districts[49].setName("Karaman");
	districts[49].setNoOfSeats(3);
	districts[49].setCensus(158);
	districts[49].setVote("AKP", 53.52);
	districts[49].setVote("MHP", 14.98);
	districts[49].setVote("CHP", 16.24);
	districts[49].setVote("IYIP", 11.54);
	districts[49].setVote("SP", 1.57);
	districts[49].setVote("YSP", 1.58);
	districts[49].setVote("HUDAPAR", 0.23);

	districts[50].setName("Kars");
	districts[50].setNoOfSeats(3);
	districts[50].setCensus(186);
	districts[50].setVote("AKP", 37.91);
	districts[50].setVote("MHP", 7.23);
	districts[50].setVote("CHP", 14.33);
	districts[50].setVote("IYIP", 7.36);
	districts[50].setVote("SP", 0.69);
	districts[50].setVote("YSP", 31.9);
	districts[50].setVote("HUDAPAR", 0.29);

	districts[51].setName("Kastamonu");
	districts[51].setNoOfSeats(3);
	districts[51].setCensus(293);
	districts[51].setVote("AKP", 52.23);
	districts[51].setVote("MHP", 20.08);
	districts[51].setVote("CHP", 15.55);
	districts[51].setVote("IYIP", 9.32);
	districts[51].setVote("SP", 0.94);
	districts[51].setVote("YSP", 1.13);
	districts[51].setVote("HUDAPAR", 0.3);

	districts[52].setName("Kayseri");
	districts[52].setNoOfSeats(10);
	districts[52].setCensus(979);
	districts[52].setVote("AKP", 50.63);
	districts[52].setVote("MHP", 21.48);
	districts[52].setVote("CHP", 12.37);
	districts[52].setVote("IYIP", 11.01);
	districts[52].setVote("SP", 1.72);
	districts[52].setVote("YSP", 2.37);
	districts[52].setVote("HUDAPAR", 0.17);

	districts[53].setName("Kirikkale");
	districts[53].setNoOfSeats(3);
	districts[53].setCensus(204);
	districts[53].setVote("AKP", 43.69);
	districts[53].setVote("MHP", 24.23);
	districts[53].setVote("CHP", 15.28);
	districts[53].setVote("IYIP", 13.66);
	districts[53].setVote("SP", 1.2);
	districts[53].setVote("YSP", 1.59);
	districts[53].setVote("HUDAPAR", 0.24);

	districts[54].setName("Kirklareli");
	districts[54].setNoOfSeats(3);
	districts[54].setCensus(280);
	districts[54].setVote("AKP", 26.88);
	districts[54].setVote("MHP", 4.87);
	districts[54].setVote("CHP", 47.49);
	districts[54].setVote("IYIP", 16.32);
	districts[54].setVote("SP", 0.6);
	districts[54].setVote("YSP", 3.38);
	districts[54].setVote("HUDAPAR", 0.17);

	districts[55].setName("Kirsehir");
	districts[55].setNoOfSeats(2);
	districts[55].setCensus(170);
	districts[55].setVote("AKP", 41.23);
	districts[55].setVote("MHP", 16.93);
	districts[55].setVote("CHP", 25.56);
	districts[55].setVote("IYIP", 10.13);
	districts[55].setVote("SP", 1);
	districts[55].setVote("YSP", 4.7);
	districts[55].setVote("HUDAPAR", 0.15);

	districts[56].setName("Kilis");
	districts[56].setNoOfSeats(2);
	districts[56].setCensus(88);
	districts[56].setVote("AKP", 50.83);
	districts[56].setVote("MHP", 20.35);
	districts[56].setVote("CHP", 14.6);
	districts[56].setVote("IYIP", 10.16);
	districts[56].setVote("SP", 1.35);
	districts[56].setVote("YSP", 2.3);
	districts[56].setVote("HUDAPAR", 0.18);

	districts[57].setName("Kocaeli");
	districts[57].setNoOfSeats(14);
	districts[57].setCensus(1371);
	districts[57].setVote("AKP", 48.29);
	districts[57].setVote("MHP", 11.36);
	districts[57].setVote("CHP", 20.1);
	districts[57].setVote("IYIP", 10.31);
	districts[57].setVote("SP", 2.19);
	districts[57].setVote("YSP", 7.37);
	districts[57].setVote("HUDAPAR", 0.16);

	districts[58].setName("Konya");
	districts[58].setNoOfSeats(15);
	districts[58].setCensus(1544);
	districts[58].setVote("AKP", 59.42);
	districts[58].setVote("MHP", 15.49);
	districts[58].setVote("CHP", 9.67);
	districts[58].setVote("IYIP", 8.96);
	districts[58].setVote("SP", 2.33);
	districts[58].setVote("YSP", 3.71);
	districts[58].setVote("HUDAPAR", 0.21);

	districts[59].setName("Kutahya");
	districts[59].setNoOfSeats(5);
	districts[59].setCensus(434);
	districts[59].setVote("AKP", 54.82);
	districts[59].setVote("MHP", 18.46);
	districts[59].setVote("CHP", 12.65);
	districts[59].setVote("IYIP", 10.61);
	districts[59].setVote("SP", 1.79);
	districts[59].setVote("YSP", 1.21);
	districts[59].setVote("HUDAPAR", 0.21);

	districts[60].setName("Malatya");
	districts[60].setNoOfSeats(6);
	districts[60].setCensus(570);
	districts[60].setVote("AKP", 53.87);
	districts[60].setVote("MHP", 16.12);
	districts[60].setVote("CHP", 16.73);
	districts[60].setVote("IYIP", 4.27);
	districts[60].setVote("SP", 1.51);
	districts[60].setVote("YSP", 7.02);
	districts[60].setVote("HUDAPAR", 0.33);

	districts[61].setName("Manisa");
	districts[61].setNoOfSeats(10);
	districts[61].setCensus(1074);
	districts[61].setVote("AKP", 40.15);
	districts[61].setVote("MHP", 11.45);
	districts[61].setVote("CHP", 26.34);
	districts[61].setVote("IYIP", 13.56);
	districts[61].setVote("SP", 0.93);
	districts[61].setVote("YSP", 7);
	districts[61].setVote("HUDAPAR", 0.27);

	districts[62].setName("Mardin");
	districts[62].setNoOfSeats(6);
	districts[62].setCensus(482);
	districts[62].setVote("AKP", 30.42);
	districts[62].setVote("MHP", 2.62);
	districts[62].setVote("CHP", 3.31);
	districts[62].setVote("IYIP", 1.13);
	districts[62].setVote("SP", 0.83);
	districts[62].setVote("YSP", 59.28);
	districts[62].setVote("HUDAPAR", 2.08);

	districts[63].setName("Mersin");
	districts[63].setNoOfSeats(13);
	districts[63].setCensus(1304);
	districts[63].setVote("AKP", 28.64);
	districts[63].setVote("MHP", 12.76);
	districts[63].setVote("CHP", 26.76);
	districts[63].setVote("IYIP", 13.56);
	districts[63].setVote("SP", 0.69);
	districts[63].setVote("YSP", 16.94);
	districts[63].setVote("HUDAPAR", 0.4);

	districts[64].setName("Mugla");
	districts[64].setNoOfSeats(7);
	districts[64].setCensus(744);
	districts[64].setVote("AKP", 28.18);
	districts[64].setVote("MHP", 6.49);
	districts[64].setVote("CHP", 40.86);
	districts[64].setVote("IYIP", 16.48);
	districts[64].setVote("SP", 0.62);
	districts[64].setVote("YSP", 6.74);
	districts[64].setVote("HUDAPAR", 0.22);

	districts[65].setName("Mus");
	districts[65].setNoOfSeats(3);
	districts[65].setCensus(234);
	districts[65].setVote("AKP", 32.4);
	districts[65].setVote("MHP", 3.74);
	districts[65].setVote("CHP", 2.47);
	districts[65].setVote("IYIP", 4.31);
	districts[65].setVote("SP", 0.91);
	districts[65].setVote("YSP", 54.48);
	districts[65].setVote("HUDAPAR", 1.48);

	districts[66].setName("Nevsehir");
	districts[66].setNoOfSeats(3);
	districts[66].setCensus(216);
	districts[66].setVote("AKP", 53.14);
	districts[66].setVote("MHP", 17.85);
	districts[66].setVote("CHP", 16.59);
	districts[66].setVote("IYIP", 9);
	districts[66].setVote("SP", 1.17);
	districts[66].setVote("YSP", 1.74);
	districts[66].setVote("HUDAPAR", 0.29);

	districts[67].setName("Nigde");
	districts[67].setNoOfSeats(3);
	districts[67].setCensus(246);
	districts[67].setVote("AKP", 43.83);
	districts[67].setVote("MHP", 20.75);
	districts[67].setVote("CHP", 20.21);
	districts[67].setVote("IYIP", 11.84);
	districts[67].setVote("SP", 1.2);
	districts[67].setVote("YSP", 1.66);
	districts[67].setVote("HUDAPAR", 0.21);

	districts[68].setName("Ordu");
	districts[68].setNoOfSeats(6);
	districts[68].setCensus(573);
	districts[68].setVote("AKP", 48.77);
	districts[68].setVote("MHP", 16.85);
	districts[68].setVote("CHP", 22.74);
	districts[68].setVote("IYIP", 8.47);
	districts[68].setVote("SP", 1.14);
	districts[68].setVote("YSP", 1.4);
	districts[68].setVote("HUDAPAR", 0.26);

	districts[69].setName("Osmaniye");
	districts[69].setNoOfSeats(4);
	districts[69].setCensus(367);
	districts[69].setVote("AKP", 36.27);
	districts[69].setVote("MHP", 31.68);
	districts[69].setVote("CHP", 13.54);
	districts[69].setVote("IYIP", 13.35);
	districts[69].setVote("SP", 0.98);
	districts[69].setVote("YSP", 3.59);
	districts[69].setVote("HUDAPAR", 0.37);

	districts[70].setName("Rize");
	districts[70].setNoOfSeats(3);
	districts[70].setCensus(259);
	districts[70].setVote("AKP", 64.85);
	districts[70].setVote("MHP", 12.41);
	districts[70].setVote("CHP", 13.04);
	districts[70].setVote("IYIP", 6.01);
	districts[70].setVote("SP", 1.87);
	districts[70].setVote("YSP", 1.43);
	districts[70].setVote("HUDAPAR", 0.11);

	districts[71].setName("Sakarya");
	districts[71].setNoOfSeats(8);
	districts[71].setCensus(725);
	districts[71].setVote("AKP", 58.18);
	districts[71].setVote("MHP", 13.64);
	districts[71].setVote("CHP", 13.71);
	districts[71].setVote("IYIP", 9.39);
	districts[71].setVote("SP", 2.05);
	districts[71].setVote("YSP", 2.7);
	districts[71].setVote("HUDAPAR", 0.14);

	districts[72].setName("Samsun");
	districts[72].setNoOfSeats(9);
	districts[72].setCensus(985);
	districts[72].setVote("AKP", 51.97);
	districts[72].setVote("MHP", 16.23);
	districts[72].setVote("CHP", 17.28);
	districts[72].setVote("IYIP", 10.88);
	districts[72].setVote("SP", 1.42);
	districts[72].setVote("YSP", 1.77);
	districts[72].setVote("HUDAPAR", 0.15);

	districts[73].setName("Siirt");
	districts[73].setNoOfSeats(3);
	districts[73].setCensus(184);
	districts[73].setVote("AKP", 38.97);
	districts[73].setVote("MHP", 3.52);
	districts[73].setVote("CHP", 2.55);
	districts[73].setVote("IYIP", 1.59);
	districts[73].setVote("SP", 0.94);
	districts[73].setVote("YSP", 51.07);
	districts[73].setVote("HUDAPAR", 1.18);

	districts[74].setName("Sinop");
	districts[74].setNoOfSeats(2);
	districts[74].setCensus(164);
	districts[74].setVote("AKP", 55.27);
	districts[74].setVote("MHP", 7.21);
	districts[74].setVote("CHP", 24.23);
	districts[74].setVote("IYIP", 9.29);
	districts[74].setVote("SP", 1.12);
	districts[74].setVote("YSP", 2);
	districts[74].setVote("HUDAPAR", 0.32);

	districts[75].setName("Sivas");
	districts[75].setNoOfSeats(5);
	districts[75].setCensus(462);
	districts[75].setVote("AKP", 54.69);
	districts[75].setVote("MHP", 18.99);
	districts[75].setVote("CHP", 15.22);
	districts[75].setVote("IYIP", 6.81);
	districts[75].setVote("SP", 1.75);
	districts[75].setVote("YSP", 2.18);
	districts[75].setVote("HUDAPAR", 0.13);

	districts[76].setName("Sanliurfa");
	districts[76].setNoOfSeats(14);
	districts[76].setCensus(1087);
	districts[76].setVote("AKP", 52.67);
	districts[76].setVote("MHP", 9.28);
	districts[76].setVote("CHP", 3.88);
	districts[76].setVote("IYIP", 1.86);
	districts[76].setVote("SP", 1.29);
	districts[76].setVote("YSP", 28.92);
	districts[76].setVote("HUDAPAR", 1.56);

	districts[77].setName("Sirnak");
	districts[77].setNoOfSeats(4);
	districts[77].setCensus(275);
	districts[77].setVote("AKP", 18.19);
	districts[77].setVote("MHP", 4.01);
	districts[77].setVote("CHP", 2.72);
	districts[77].setVote("IYIP", 1.98);
	districts[77].setVote("SP", 0.46);
	districts[77].setVote("YSP", 70.24);
	districts[77].setVote("HUDAPAR", 2.08);

	districts[78].setName("Tekirdag");
	districts[78].setNoOfSeats(7);
	districts[78].setCensus(757);
	districts[78].setVote("AKP", 34.73);
	districts[78].setVote("MHP", 7.56);
	districts[78].setVote("CHP", 38.18);
	districts[78].setVote("IYIP", 11.74);
	districts[78].setVote("SP", 0.79);
	districts[78].setVote("YSP", 6.58);
	districts[78].setVote("HUDAPAR", 0.14);

	districts[79].setName("Tokat");
	districts[79].setNoOfSeats(5);
	districts[79].setCensus(435);
	districts[79].setVote("AKP", 49.91);
	districts[79].setVote("MHP", 16.4);
	districts[79].setVote("CHP", 20.66);
	districts[79].setVote("IYIP", 9.34);
	districts[79].setVote("SP", 1.28);
	districts[79].setVote("YSP", 2.07);
	districts[79].setVote("HUDAPAR", 0.16);

	districts[80].setName("Trabzon");
	districts[80].setNoOfSeats(6);
	districts[80].setCensus(599);
	districts[80].setVote("AKP", 55.98);
	districts[80].setVote("MHP", 13.53);
	districts[80].setVote("CHP", 15.13);
	districts[80].setVote("IYIP", 11.17);
	districts[80].setVote("SP", 2.48);
	districts[80].setVote("YSP", 1.35);
	districts[80].setVote("HUDAPAR", 0.12);

	districts[81].setName("Tunceli");
	districts[81].setNoOfSeats(2);
	districts[81].setCensus(66);
	districts[81].setVote("AKP", 14.7);
	districts[81].setVote("MHP", 5.73);
	districts[81].setVote("CHP", 26.32);
	districts[81].setVote("IYIP", 1.65);
	districts[81].setVote("SP", 0.32);
	districts[81].setVote("YSP", 51.03);
	districts[81].setVote("HUDAPAR", 0.11);

	districts[82].setName("Usak");
	districts[82].setNoOfSeats(3);
	districts[82].setCensus(274);
	districts[82].setVote("AKP", 43.47);
	districts[82].setVote("MHP", 10.55);
	districts[82].setVote("CHP", 28.19);
	districts[82].setVote("IYIP", 12.7);
	districts[82].setVote("SP", 1.4);
	districts[82].setVote("YSP", 3.12);
	districts[82].setVote("HUDAPAR", 0.25);

	districts[83].setName("Van");
	districts[83].setNoOfSeats(8);
	districts[83].setCensus(654);
	districts[83].setVote("AKP", 31.77);
	districts[83].setVote("MHP", 3.08);
	districts[83].setVote("CHP", 2.64);
	districts[83].setVote("IYIP", 1.27);
	districts[83].setVote("SP", 0.8);
	districts[83].setVote("YSP", 59.32);
	districts[83].setVote("HUDAPAR", 0.9);

	districts[84].setName("Yalova");
	districts[84].setNoOfSeats(3);
	districts[84].setCensus(183);
	districts[84].setVote("AKP", 44.13);
	districts[84].setVote("MHP", 7.79);
	districts[84].setVote("CHP", 28.62);
	districts[84].setVote("IYIP", 9.79);
	districts[84].setVote("SP", 1.3);
	districts[84].setVote("YSP", 7.97);
	districts[84].setVote("HUDAPAR", 0.19);

	districts[85].setName("Yozgat");
	districts[85].setNoOfSeats(4);
	districts[85].setCensus(304);
	districts[85].setVote("AKP", 53.39);
	districts[85].setVote("MHP", 24.72);
	districts[85].setVote("CHP", 11.64);
	districts[85].setVote("IYIP", 7.4);
	districts[85].setVote("SP", 1.18);
	districts[85].setVote("YSP", 1.33);
	districts[85].setVote("HUDAPAR", 0.17);

	districts[86].setName("Zonguldak");
	districts[86].setNoOfSeats(5);
	districts[86].setCensus(459);
	districts[86].setVote("AKP", 45.97);
	districts[86].setVote("MHP", 10.87);
	districts[86].setVote("CHP", 30.77);
	districts[86].setVote("IYIP", 7.81);
	districts[86].setVote("SP", 1.76);
	districts[86].setVote("YSP", 1.9);
	districts[86].setVote("HUDAPAR", 0.21);
}

void Results::configureUmbrella()
{
	getDistrict("Adiyaman")->setUmbrella("TIP", "YSP");
	getDistrict("Agri")->setUmbrella("TIP", "YSP");
	getDistrict("Ankara I")->setUmbrella("TIP", "YSP");
	getDistrict("Ardahan")->setUmbrella("TIP", "YSP");
	getDistrict("Aydin")->setUmbrella("TIP", "YSP");
	getDistrict("Bartin")->setUmbrella("TIP", "YSP");
	getDistrict("Batman")->setUmbrella("TIP", "YSP");
	getDistrict("Bingol")->setUmbrella("TIP", "YSP");
	getDistrict("Bitlis")->setUmbrella("TIP", "YSP");
	getDistrict("Burdur")->setUmbrella("TIP", "YSP");
	getDistrict("Bursa II")->setUmbrella("TIP", "YSP");
	getDistrict("Diyarbakir")->setUmbrella("TIP", "YSP");
	getDistrict("Elazig")->setUmbrella("TIP", "YSP");
	getDistrict("Erzurum")->setUmbrella("TIP", "YSP");
	getDistrict("Gaziantep")->setUmbrella("TIP", "YSP");
	getDistrict("Hakkari")->setUmbrella("TIP", "YSP");
	getDistrict("Igdir")->setUmbrella("TIP", "YSP");
	getDistrict("Izmir I")->setUmbrella("TIP", "YSP");
	getDistrict("Kahramanmaras")->setUmbrella("TIP", "YSP");
	getDistrict("Kars")->setUmbrella("TIP", "YSP");
	getDistrict("Kastamonu")->setUmbrella("TIP", "YSP");
	getDistrict("Kirikkale")->setUmbrella("TIP", "YSP");
	getDistrict("Kilis")->setUmbrella("TIP", "YSP");
	getDistrict("Kocaeli")->setUmbrella("TIP", "YSP");
	getDistrict("Malatya")->setUmbrella("TIP", "YSP");
	getDistrict("Manisa")->setUmbrella("TIP", "YSP");
	getDistrict("Mardin")->setUmbrella("TIP", "YSP");
	getDistrict("Mus")->setUmbrella("TIP", "YSP");
	getDistrict("Siirt")->setUmbrella("TIP", "YSP");
	getDistrict("Sanliurfa")->setUmbrella("TIP", "YSP");
	getDistrict("Sirnak")->setUmbrella("TIP", "YSP");
	getDistrict("Tunceli")->setUmbrella("TIP", "YSP");
	getDistrict("Van")->setUmbrella("TIP", "YSP");

	getDistrict("Adiyaman")->setUmbrella(Alliance::Nation, "CHP");
	getDistrict("Bartin")->setUmbrella(Alliance::Nation, "CHP");
	getDistrict("Batman")->setUmbrella(Alliance::Nation, "CHP");
	getDistrict("Duzce")->setUmbrella(Alliance::Nation, "CHP");
	getDistrict("Corum")->setUmbrella(Alliance::Nation, "CHP");
	getDistrict("Erzincan")->setUmbrella(Alliance::Nation, "CHP");
	getDistrict("Hakkari")->setUmbrella(Alliance::Nation, "CHP");
	getDistrict("Rize")->setUmbrella(Alliance::Nation, "CHP");
	getDistrict("Van")->setUmbrella(Alliance::Nation, "CHP");

	getDistrict("Cankiri")->setUmbrella(Alliance::Nation, "IYIP");
	getDistrict("Gumushane")->setUmbrella(Alliance::Nation, "IYIP");
	getDistrict("Bitlis")->setUmbrella(Alliance::Nation, "IYIP");
	getDistrict("Mus")->setUmbrella(Alliance::Nation, "IYIP");
	getDistrict("Yozgat")->setUmbrella(Alliance::Nation, "IYIP");
	getDistrict("Aksaray")->setUmbrella(Alliance::Nation, "IYIP");
	getDistrict("Bayburt")->setUmbrella(Alliance::Nation, "IYIP");

	getDistrict("Istanbul I")->setJointList("DP", "CHP", 9);
	getDistrict("Izmir II")->setJointList("DP", "CHP", 2);
	getDistrict("Izmir II")->setJointList("DP", "CHP", 5);

	getDistrict("Ankara I")->setJointList("IYIP", "CHP", 5);
	getDistrict("Ankara II")->setJointList("IYIP", "CHP", 4);
	getDistrict("Adiyaman")->setJointList("IYIP", "CHP", 2);
	getDistrict("Bartin")->setJointList("IYIP", "CHP", 2);
	getDistrict("Batman")->setJointList("IYIP", "CHP", 2);
	getDistrict("Duzce")->setJointList("IYIP", "CHP", 2);
	getDistrict("Corum")->setJointList("IYIP", "CHP", 2);
	getDistrict("Erzincan")->setJointList("IYIP", "CHP", 2);
	getDistrict("Hakkari")->setJointList("IYIP", "CHP", 2);
	getDistrict("Istanbul I")->setJointList("IYIP", "CHP", 5);
	getDistrict("Istanbul I")->setJointList("IYIP", "CHP", 11);
	getDistrict("Istanbul II")->setJointList("IYIP", "CHP", 9);
	getDistrict("Rize")->setJointList("IYIP", "CHP", 2);
	getDistrict("Van")->setJointList("IYIP", "CHP", 2);

	getDistrict("Adana")->setJointList("DEVA", "CHP", 4);
	getDistrict("Ankara I")->setJointList("DEVA", "CHP", 4);
	getDistrict("Ankara II")->setJointList("DEVA", "CHP", 2);
	getDistrict("Balikesir")->setJointList("DEVA", "CHP", 3);
	getDistrict("Diyarbakir")->setJointList("DEVA", "CHP", 2);
	getDistrict("Elazig")->setJointList("DEVA", "CHP", 3);
	getDistrict("Erzurum")->setJointList("DEVA", "CHP", 3);
	getDistrict("Gaziantep")->setJointList("DEVA", "CHP", 3);
	getDistrict("Igdir")->setJointList("DEVA", "CHP", 1);
	getDistrict("Istanbul I")->setJointList("DEVA", "CHP", 7);
	getDistrict("Istanbul I")->setJointList("DEVA", "CHP", 8);
	getDistrict("Istanbul II")->setJointList("DEVA", "CHP", 8);
	getDistrict("Istanbul II")->setJointList("DEVA", "CHP", 10);
	getDistrict("Istanbul III")->setJointList("DEVA", "CHP", 6);
	getDistrict("Istanbul III")->setJointList("DEVA", "CHP", 10);
	getDistrict("Izmir I")->setJointList("DEVA", "CHP", 6);
	getDistrict("Kahramanmaras")->setJointList("DEVA", "CHP", 2);
	getDistrict("Kayseri")->setJointList("DEVA", "CHP", 3);
	getDistrict("Manisa")->setJointList("DEVA", "CHP", 4);
	getDistrict("Mersin")->setJointList("DEVA", "CHP", 3);
	getDistrict("Siirt")->setJointList("DEVA", "CHP", 1);
	getDistrict("Sivas")->setJointList("DEVA", "CHP", 2);
	getDistrict("Sanliurfa")->setJointList("DEVA", "CHP", 3);
	getDistrict("Tekirdag")->setJointList("DEVA", "CHP", 3);
	getDistrict("Yozgat")->setJointList("DEVA", "CHP", 3);
	getDistrict("Zonguldak")->setJointList("DEVA", "CHP", 3);

	getDistrict("Ankara I")->setJointList("GP", "CHP", 5);
	getDistrict("Antalya")->setJointList("GP", "CHP", 4);
	getDistrict("Bursa I")->setJointList("GP", "CHP", 6);
	getDistrict("Bursa II")->setJointList("GP", "CHP", 2);
	getDistrict("Canakkale")->setJointList("GP", "CHP", 3);
	getDistrict("Denizli")->setJointList("GP", "CHP", 3);
	getDistrict("Istanbul I")->setJointList("GP", "CHP", 10);
	getDistrict("Istanbul II")->setJointList("GP", "CHP", 7);
	getDistrict("Istanbul II")->setJointList("GP", "CHP", 8);
	getDistrict("Istanbul III")->setJointList("GP", "CHP", 8);
	getDistrict("Istanbul III")->setJointList("GP", "CHP", 15);
	getDistrict("Izmir II")->setJointList("GP", "CHP", 7);
	getDistrict("Kayseri")->setJointList("GP", "CHP", 4);
	getDistrict("Kocaeli")->setJointList("GP", "CHP", 5);
	getDistrict("Konya")->setJointList("GP", "CHP", 2);
	getDistrict("Konya")->setJointList("GP", "CHP", 4);
	getDistrict("Mugla")->setJointList("GP", "CHP", 4);
	getDistrict("Samsun")->setJointList("GP", "CHP", 3);
	getDistrict("Sanliurfa")->setJointList("GP", "CHP", 4);
	getDistrict("Sirnak")->setJointList("GP", "CHP", 1);

	getDistrict("Afyonkarahisar")->setJointList("SP", "CHP", 2);
	getDistrict("Ankara III")->setJointList("SP", "CHP", 3);
	getDistrict("Antalya")->setJointList("SP", "CHP", 5);
	getDistrict("Bingol")->setJointList("SP", "CHP", 1);
	getDistrict("Bursa I")->setJointList("SP", "CHP", 3);
	getDistrict("Corum")->setJointList("SP", "CHP", 4);
	getDistrict("Diyarbakir")->setJointList("SP", "CHP", 3);
	getDistrict("Elazig")->setJointList("SP", "CHP", 2);
	getDistrict("Erzurum")->setJointList("SP", "CHP", 2);
	getDistrict("Gaziantep")->setJointList("SP", "CHP", 9);
	getDistrict("Hatay")->setJointList("SP", "CHP", 4);
	getDistrict("Isparta")->setJointList("SP", "CHP", 3);
	getDistrict("Istanbul I")->setJointList("SP", "CHP", 5);
	getDistrict("Istanbul II")->setJointList("SP", "CHP", 5);
	getDistrict("Istanbul III")->setJointList("SP", "CHP", 7);
	getDistrict("Kastamonu")->setJointList("SP", "CHP", 2);
	getDistrict("Kayseri")->setJointList("SP", "CHP", 2);
	getDistrict("Kocaeli")->setJointList("SP", "CHP", 3);
	getDistrict("Kutahya")->setJointList("SP", "CHP", 2);
	getDistrict("Ordu")->setJointList("SP", "CHP", 3);
	getDistrict("Rize")->setJointList("SP", "CHP", 3);
	getDistrict("Sakarya")->setJointList("SP", "CHP", 7);
	getDistrict("Samsun")->setJointList("SP", "CHP", 2);
	getDistrict("Sanliurfa")->setJointList("SP", "CHP", 8);

	getDistrict("Aksaray")->setJointList("CHP", "IYIP", 2);
	getDistrict("Bitlis")->setJointList("CHP", "IYIP", 2);
	getDistrict("Cankiri")->setJointList("CHP", "IYIP", 2);
	getDistrict("Mus")->setJointList("CHP", "IYIP", 2);
	getDistrict("Yozgat")->setJointList("CHP", "IYIP", 2);

	getDistrict("Ankara I")->setJointList("DSP", "AKP", 9);
	getDistrict("Ankara II")->setJointList("DSP", "AKP", 9);
	getDistrict("Istanbul I")->setJointList("DSP", "AKP", 6);
	getDistrict("Istanbul II")->setJointList("DSP", "AKP", 4);

	getDistrict("Batman")->setJointList("HUDAPAR", "AKP", 2);
	getDistrict("Gaziantep")->setJointList("HUDAPAR", "AKP", 6);
	getDistrict("Istanbul III")->setJointList("HUDAPAR", "AKP", 4);
	getDistrict("Mersin")->setJointList("HUDAPAR", "AKP", 4);

	getDistrict("Adana")->setJointList("EMEP", "YSP", 1);
	getDistrict("Ankara I")->setJointList("EMEP", "YSP", 2);
	getDistrict("Ankara I")->setJointList("EMEP", "YSP", 6);
	getDistrict("Ankara III")->setJointList("EMEP", "YSP", 2);
	getDistrict("Antalya")->setJointList("EMEP", "YSP", 4);
	getDistrict("Bolu")->setJointList("EMEP", "YSP", 1);
	getDistrict("Diyarbakir")->setJointList("EMEP", "YSP", 7);
	getDistrict("Erzincan")->setJointList("EMEP", "YSP", 1);
	getDistrict("Eskisehir")->setJointList("EMEP", "YSP", 1);
	getDistrict("Gaziantep")->setJointList("EMEP", "YSP", 1);
	getDistrict("Istanbul I")->setJointList("EMEP", "YSP", 1);
	getDistrict("Istanbul I")->setJointList("EMEP", "YSP", 3);
	getDistrict("Istanbul III")->setJointList("EMEP", "YSP", 1);
	getDistrict("Istanbul III")->setJointList("EMEP", "YSP", 2);
	getDistrict("Istanbul III")->setJointList("EMEP", "YSP", 5);
	getDistrict("Izmir I")->setJointList("EMEP", "YSP", 1);
	getDistrict("Mersin")->setJointList("EMEP", "YSP", 2);
}

void Results::printLocalResults(ofstream& parliament, ofstream& president)
{
	for (int i = 0; i < NO_OF_DISTRICTS; i++) {
		districts[i].printParliamentaryResults(parliament);
		districts[i].printPresidentialResults(president);
	}
}

void Results::printNationalResults(ofstream& parliament, ofstream& president)
{
	string partyName;
	float votes;
	int seats;
	int census = 0;
	Party* party;

	// compute overall parliamentary votes
	for (int i = 0; i < NO_OF_DISTRICTS; i++) {
		for (int j = 0; j < NO_OF_PARTIES; j++) {
			partyName = results.getParty(j)->getName();
			votes = results.getParty(partyName)->getVote();
			seats = results.getParty(partyName)->getSeats();
			results.getParty(partyName)->setVote(votes + districts[i].getVote(partyName) * districts[i].getCensus());
			results.getParty(partyName)->setSeats(seats + districts[i].getNoOfSeats(partyName));
		}
		census += districts[i].getCensus();
	}

	for (int i = 0; i < NO_OF_PARTIES; i++) {
		partyName = results.getParty(i)->getName();
		votes = results.getParty(partyName)->getVote() / census;
		results.getParty(partyName)->setVote(votes);
	}

	float prevGreatest, greatest;
	int index = 0;
	// sort and print overall parliamentary votes
	prevGreatest = 100;
	for (int i = 0; i < NO_OF_PARTIES; i++) {
		greatest = 0;
		for (int j = 0; j < NO_OF_PARTIES; j++) {
			party = results.getParty(j);
			if (party->getVote() >= greatest && party->getVote() < prevGreatest) {
				index = j;
				greatest = party->getVote();
			}
		}
		prevGreatest = greatest;

		if (results.getParty(index)->getVote() == 0) {
			for (int j = 0; j < NO_OF_PARTIES; j++) {
				party = results.getParty(j);
				if (party->getVote() != 0 || party->getSeats() == 0)
					continue;

				stringstream stream;
				stream << fixed << setprecision(2) << results.getParty(j)->getVote();
				parliament << results.getParty(j)->getName() << ", " << stream.str() << ", "; 
				stream.str("");
				stream << fixed << setprecision(2) << results.getParty(j)->getVote() - previous.getParty(j)->getVote();
				parliament << stream.str() << ", " << results.getParty(j)->getSeats() << endl;
			}
			break;
		}

		stringstream stream;
		stream << fixed << setprecision(2) << results.getParty(index)->getVote();
		parliament << results.getParty(index)->getName() << ", " << stream.str() << ", ";
		stream.str("");
		stream << fixed << setprecision(2) << results.getParty(index)->getVote() - previous.getParty(index)->getVote();
		parliament << stream.str() << ", " << results.getParty(index)->getSeats() << endl;
	}

	string name;
	float candidates[NO_OF_CANDIDATES];
	// compute overall presidential votes
	for (int i = 0; i < NO_OF_CANDIDATES; i++) {
		candidates[i] = 0;
		for (int j = 0; j < NO_OF_PARTIES; j++) {
			if ((int)results.getParty(j)->getCandidate() == i)
				candidates[i] += results.getParty(j)->getVote();
		}
	}

	// sort and print overall presidential votes
	index = 0;
	prevGreatest = 100;
	for (int i = 0; i < NO_OF_CANDIDATES; i++) {
		greatest = 0;
		for (int j = 0; j < NO_OF_CANDIDATES; j++) {
			if (candidates[j] > greatest && candidates[j] < prevGreatest) {
				index = j;
				greatest = candidates[j];
			}
		}
		prevGreatest = greatest;

		if (index == 0)
			name = "Erdogan";
		else if (index == 1)
			name = "Kilicdaroglu";
		else if (index == 2)
			name = "Ince";
		else
			name = "Ogan";

		stringstream stream;
		stream << fixed << setprecision(2) << candidates[index];
		president << name << ", " << stream.str() << endl;
	}
}

void Results::printCompactResults(ofstream& file)
{
	file << "District, People, , Nation, , Labour, , Others, " << endl;
	float totalVotes;
	int totalSeats;
	file << "Nationwide";
	for (int i = 0; i <= NO_OF_ALLIANCES; i++) {
		totalVotes = 0;
		totalSeats = 0;
		for (int j = 0; j < NO_OF_PARTIES; j++) {
			if (results.getParty(j)->getAlliance() == (Alliance)i) {
				totalVotes += results.getParty(j)->getVote();
				totalSeats += results.getParty(j)->getSeats();
			}
		}
		stringstream stream;
		stream << fixed << setprecision(2) << totalVotes;
		file << ", " << stream.str() << ", " << totalSeats;
	}

	for (int i = 0; i < NO_OF_DISTRICTS; i++)
		districts[i].printCompactResults(file);
}

void Results::distributeSeats()
{
	for (int i = 0; i < NO_OF_DISTRICTS; i++)
		districts[i].distributeSeats();
}

void Results::determineTrends()
{
	foreseen.findSwings(&previous);
}

void Results::calculate()
{
	for (int i = 0; i < NO_OF_DISTRICTS; i++)
		districts[i].calculate(&previous, &foreseen);
}

void Results::takeInput()
{
	Party* party;
	string input;

	for (int i = 0; i < NO_OF_PARTIES; i++) {
		party = foreseen.getParty(i);
		cout << "Enter prediction for " << party->getName() << ": ";
		cin >> input;
		party->setVote(stof(input));
	}
}

void Results::takeDataset(ifstream& file, int index)
{
	string parties;
	string votes;

	getline(file, parties);
	for (int i = 0; i < index; i++)
		getline(file, votes);

	stringstream party(parties);
	stringstream vote(votes);
	string partyName;
	string partyVote;

	getline(party, partyName, ',');
	getline(vote, partyVote, ',');

	for (int i = 0; i < NO_OF_PARTIES; i++) {
		getline(party, partyName, ',');
		getline(vote, partyVote, ',');
		foreseen.getParty(partyName)->setVote(stof(partyVote));
	}
}

District* Results::getDistrict(string districtName)
{
	for (int i = 0; i < NO_OF_DISTRICTS; i++)
		if (districts[i].getName() == districtName)
			return &districts[i];

	return nullptr;
}