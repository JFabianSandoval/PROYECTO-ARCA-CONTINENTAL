#pragma once
#include <iostream>
#include <string.h>

using namespace std;

class Gerente {
private:
	string nombre;
	string apellido;
	int id;
	int cantidad = 1;
public:
	Gerente(string, string, int, int);
	~Gerente();
	//parametros
	string Setnombre(string _nombre) { nombre = _nombre; }
	string Setapellido(string _apellido) { apellido = _apellido; }
	int Setid(int _id) { id = _id; }
	//GETTS
	string Getnombre() { return nombre; }
	string Getapellido() { return apellido; }
	int Getid() { return id; }
	int Getcant() { return cantidad; }

};
//fin clase gerente

//inicio clase dap
class AGG : public Gerente {
private://atributos de dap
	//todos los atributos de gerente
	int cantidad = 1;	//cantidad de personas
public:
	AGG(string, string, int, int);//constructor
	~AGG();
};
//parametros
string AGG::Gerente::Setnombre(string _nombre) { nombre = _nombre; };
string AGG::Gerente::Setapellido(string _apellido) { apellido = _apellido; };
int AGG::Gerente::Setid(int _id) { id = _id; };

//fin calse dap
 
//inicio clase dap
class DAP : public Gerente {
private://atributos de dap
	//todos los atributos de gerente
	int cantidad = 1;	//cantidad de personas
public:
	DAP(string, string, int, int);//constructor
	~DAP();
};
//parametros
string DAP::Gerente::Setnombre(string _nombre) { nombre = _nombre; };
string DAP::Gerente::Setapellido(string _apellido) { apellido = _apellido; };
int DAP::Gerente::Setid(int _id) { id = _id; };

//fin calse dap

//inicio clase dcm
class DCM : public Gerente {
private://atributos de dap
	//todos los atributos de gerente
	int cantidad = 1;	//cantidad de personas
public:
	DCM(string, string, int, int);//constructor
	~DCM();

};
string DCM::Gerente::Setnombre(string _nombre) { nombre = _nombre; };
string DCM::Gerente::Setapellido(string _apellido) { apellido = _apellido; };
int DCM::Gerente::Setid(int _id) { id = _id; };
//fin calse dap

//inicio clase dch
class DCH : public Gerente {
private://atributos de dap
	//todos los atributos de gerente
	int cantidad = 1;	//cantidad de personas
public:
	DCH(string, string, int, int);//constructor
	~DCH();

};

string DCH::Gerente::Setnombre(string _nombre) { nombre = _nombre; };
string DCH::Gerente::Setapellido(string _apellido) { apellido = _apellido; };
int DCH::Gerente::Setid(int _id) { id = _id; };
//fin calse dch

//inicio clase dfa
class DFA : public Gerente {
private://atributos de dap
	//todos los atributos de gerente
	int cantidad = 1;	//cantidad de personas
public:
	DFA(string, string, int, int);//constructor
	~DFA();

};
string DFA::Gerente::Setnombre(string _nombre) { nombre = _nombre; };
string DFA::Gerente::Setapellido(string _apellido) { apellido = _apellido; };
int DFA::Gerente::Setid(int _id) { id = _id; };
//fin calse dfa

//inicio clase dl
class DL : public Gerente {
private://atributos de dap
	//todos los atributos de gerente
	int cantidad = 1;	//cantidad de personas
public:
	DL(string, string, int, int);//constructor
	~DL();

};
string DL::Gerente::Setnombre(string _nombre) { nombre = _nombre; };
string DL::Gerente::Setapellido(string _apellido) { apellido = _apellido; };
int DL::Gerente::Setid(int _id) { id = _id; };
//fin calse dl
 
//inicio clase gc
class GALR : public Gerente {
private://atributos de dap
	//todos los atributos de gerente
	int cantidad = 1;	//cantidad de personas
public:
	GALR(string, string, int, int);//constructor
	~GALR();

};
string GALR::Gerente::Setnombre(string _nombre) { nombre = _nombre; };
string GALR::Gerente::Setapellido(string _apellido) { apellido = _apellido; };
int GALR::Gerente::Setid(int _id) { id = _id; };
//fin calse gc

//inicio clase gc
class GCO : public Gerente {
private://atributos de dap
	//todos los atributos de gerente
	int cantidad = 1;	//cantidad de personas
public:
	GCO(string, string, int, int);//constructor
	~GCO();

};
string GCO::Gerente::Setnombre(string _nombre) { nombre = _nombre; };
string GCO::Gerente::Setapellido(string _apellido) { apellido = _apellido; };
int GCO::Gerente::Setid(int _id) { id = _id; };
//fin calse gc

//inicio clase gti
class GTI : public Gerente {
private://atributos de dap
	//todos los atributos de gerente
	int cantidad = 1;	//cantidad de personas
public:
	GTI(string, string, int, int);//constructor
	~GTI();

};
string GTI::Gerente::Setnombre(string _nombre) { nombre = _nombre; };
string GTI::Gerente::Setapellido(string _apellido) { apellido = _apellido; };
int GTI::Gerente::Setid(int _id) { id = _id; };
//fin calse gti


//inicio clase jeo
class JEO : public Gerente {
private://atributos de dap
	//todos los atributos de gerente
	int cantidad = 1;	//cantidad de personas
public:
	JEO(string, string, int, int);//constructor
	~JEO();

};
string JEO::Gerente::Setnombre(string _nombre) { nombre = _nombre; };
string JEO::Gerente::Setapellido(string _apellido) { apellido = _apellido; };
int JEO::Gerente::Setid(int _id) { id = _id; };
//fin calse jeo

//inicio clase aaa
class AAA : public DAP {
private://atributos de dap
	//todos los atributos de gerente
	int cantidad = 1;	//cantidad de personas
public:
	AAA(string, string, int, int);//constructor
	~AAA();
};
//parametros
string AAA::DAP::Gerente::Setnombre(string _nombre) { nombre = _nombre; };
string AAA::DAP::Gerente::Setapellido(string _apellido) { apellido = _apellido; };
int AAA::DAP::Gerente::Setid(int _id) { id = _id; };

//fin calse aaa

//inicio clase aaa
class GCOMUNI : public DAP {
private://atributos de dap
	//todos los atributos de gerente
	int cantidad = 1;	//cantidad de personas
public:
	GCOMUNI(string, string, int, int);//constructor
	~GCOMUNI();
};
//parametros
string GCOMUNI::DAP::Gerente::Setnombre(string _nombre) { nombre = _nombre; };
string GCOMUNI::DAP::Gerente::Setapellido(string _apellido) { apellido = _apellido; };
int GCOMUNI::DAP::Gerente::Setid(int _id) { id = _id; };

//fin calse aaa

//inicio clase aaa
class GSL : public DAP {
private://atributos de dap
	//todos los atributos de gerente
	int cantidad = 1;	//cantidad de personas
public:
	GSL(string, string, int, int);//constructor
	~GSL();
};
//parametros
string GSL::DAP::Gerente::Setnombre(string _nombre) { nombre = _nombre; };
string GSL::DAP::Gerente::Setapellido(string _apellido) { apellido = _apellido; };
int GSL::DAP::Gerente::Setid(int _id) { id = _id; };

//fin calse aaa

//inicio clase aaa
class JRI : public DAP {
private://atributos de dap
	//todos los atributos de gerente
	int cantidad = 1;	//cantidad de personas
public:
	JRI(string, string, int, int);//constructor
	~JRI();
};
//parametros
string JRI::DAP::Gerente::Setnombre(string _nombre) { nombre = _nombre; };
string JRI::DAP::Gerente::Setapellido(string _apellido) { apellido = _apellido; };
int JRI::DAP::Gerente::Setid(int _id) { id = _id; };

//fin calse aaa

//inicio clase aaa
class CDC : public GCOMUNI {
private://atributos de dap
	//todos los atributos de gerente
	int cantidad = 3;	//cantidad de personas
public:
	CDC(string, string, int, int);//constructor
	~CDC();
};
//parametros
string CDC::GCOMUNI::DAP::Gerente::Setnombre(string _nombre) { nombre = _nombre; };
string CDC::GCOMUNI::DAP::Gerente::Setapellido(string _apellido) { apellido = _apellido; };
int CDC::GCOMUNI::DAP::Gerente::Setid(int _id) { id = _id; };

//fin calse aaa

//inicio clase aaa
class CRC : public GSL {
private://atributos de dap
	//todos los atributos de gerente
	int cantidad = 1;	//cantidad de personas
public:
	CRC(string, string, int, int);//constructor
	~CRC();
};
//parametros
string CRC::GSL::DAP::Gerente::Setnombre(string _nombre) { nombre = _nombre; };
string CRC::GSL::DAP::Gerente::Setapellido(string _apellido) { apellido = _apellido; };
int CRC::GSL::DAP::Gerente::Setid(int _id) { id = _id; };

//fin calse aaa

//inicio clase aaa
class JRS : public GSL {
private://atributos de dap
	//todos los atributos de gerente
	int cantidad = 1;	//cantidad de personas
public:
	JRS(string, string, int, int);//constructor
	~JRS();
};
//parametros
string JRS::GSL::DAP::Gerente::Setnombre(string _nombre) { nombre = _nombre; };
string JRS::GSL::DAP::Gerente::Setapellido(string _apellido) { apellido = _apellido; };
int JRS::GSL::DAP::Gerente::Setid(int _id) { id = _id; };

//fin calse aaa

//inicio clase aaa
class ADS : public JRS {
private://atributos de dap
	//todos los atributos de gerente
	int cantidad = 1;	//cantidad de personas
public:
	ADS(string, string, int, int);//constructor
	~ADS();
};
//parametros
string ADS::JRS::GSL::DAP::Gerente::Setnombre(string _nombre) { nombre = _nombre; };
string ADS::JRS::GSL::DAP::Gerente::Setapellido(string _apellido) { apellido = _apellido; };
int ADS::JRS::GSL::DAP::Gerente::Setid(int _id) { id = _id; };

//fin calse aaa

//inicio clase aaa
class ARS : public JRS {
private://atributos de dap
	//todos los atributos de gerente
	int cantidad = 1;	//cantidad de personas
public:
	ARS(string, string, int, int);//constructor
	~ARS();
};
//parametros
string ARS::JRS::GSL::DAP::Gerente::Setnombre(string _nombre) { nombre = _nombre; };
string ARS::JRS::GSL::DAP::Gerente::Setapellido(string _apellido) { apellido = _apellido; };
int ARS::JRS::GSL::DAP::Gerente::Setid(int _id) { id = _id; };

//fin calse aaa

//inicio clase aaa
class AD : public DCM {
private://atributos de dap
	//todos los atributos de gerente
	int cantidad = 1;	//cantidad de personas
public:
	AD(string, string, int, int);//constructor
	~AD();
};
//parametros
string AD::DCM::Gerente::Setnombre(string _nombre) { nombre = _nombre; };
string AD::DCM::Gerente::Setapellido(string _apellido) { apellido = _apellido; };
int AD::DCM::Gerente::Setid(int _id) { id = _id; };

//fin calse aaa

//inicio clase aaa
class GCCTP : public DCM {
private://atributos de dap
	//todos los atributos de gerente
	int cantidad = 1;	//cantidad de personas
public:
	GCCTP(string, string, int, int);//constructor
	~GCCTP();
};
//parametros
string GCCTP::DCM::Gerente::Setnombre(string _nombre) { nombre = _nombre; };
string GCCTP::DCM::Gerente::Setapellido(string _apellido) { apellido = _apellido; };
int GCCTP::DCM::Gerente::Setid(int _id) { id = _id; };

//fin calse aaa

//inicio clase aaa
class GBE : public DCM {
private://atributos de dap
	//todos los atributos de gerente
	int cantidad = 1;	//cantidad de personas
public:
	GBE(string, string, int, int);//constructor
	~GBE();
};
//parametros
string GBE::DCM::Gerente::Setnombre(string _nombre) { nombre = _nombre; };
string GBE::DCM::Gerente::Setapellido(string _apellido) { apellido = _apellido; };
int GBE::DCM::Gerente::Setid(int _id) { id = _id; };

//fin calse aaa

//inicio clase aaa
class GDM : public DCM {
private://atributos de dap
	//todos los atributos de gerente
	int cantidad = 1;	//cantidad de personas
public:
	GDM(string, string, int, int);//constructor
	~GDM();
};
//parametros
string GDM::DCM::Gerente::Setnombre(string _nombre) { nombre = _nombre; };
string GDM::DCM::Gerente::Setapellido(string _apellido) { apellido = _apellido; };
int GDM::DCM::Gerente::Setid(int _id) { id = _id; };

//fin calse aaa
 
//inicio clase aaa
class GDMR : public DCM {
private://atributos de dap
	//todos los atributos de gerente
	int cantidad = 1;	//cantidad de personas
public:
	GDMR(string, string, int, int);//constructor
	~GDMR();
};
//parametros
string GDMR::DCM::Gerente::Setnombre(string _nombre) { nombre = _nombre; };
string GDMR::DCM::Gerente::Setapellido(string _apellido) { apellido = _apellido; };
int GDMR::DCM::Gerente::Setid(int _id) { id = _id; };

//fin calse aaa

//inicio clase aaa
class GRI : public DCM {
private://atributos de dap
	//todos los atributos de gerente
	int cantidad = 1;	//cantidad de personas
public:
	GRI(string, string, int, int);//constructor
	~GRI();
};
//parametros
string GRI::DCM::Gerente::Setnombre(string _nombre) { nombre = _nombre; };
string GRI::DCM::Gerente::Setapellido(string _apellido) { apellido = _apellido; };
int GRI::DCM::Gerente::Setid(int _id) { id = _id; };

//fin calse aaa

//inicio clase aaa
class GDC : public DCM {
private://atributos de dap
	//todos los atributos de gerente
	int cantidad = 1;	//cantidad de personas
public:
	GDC(string, string, int, int);//constructor
	~GDC();
};
//parametros
string GDC::DCM::Gerente::Setnombre(string _nombre) { nombre = _nombre; };
string GDC::DCM::Gerente::Setapellido(string _apellido) { apellido = _apellido; };
int GDC::DCM::Gerente::Setid(int _id) { id = _id; };

//fin calse aaa

//inicio clase aaa
class GSCT : public DCM {
private://atributos de dap
	//todos los atributos de gerente
	int cantidad = 1;	//cantidad de personas
public:
	GSCT(string, string, int, int);//constructor
	~GSCT();
};
//parametros
string GSCT::DCM::Gerente::Setnombre(string _nombre) { nombre = _nombre; };
string GSCT::DCM::Gerente::Setapellido(string _apellido) { apellido = _apellido; };
int GSCT::DCM::Gerente::Setid(int _id) { id = _id; };

//fin calse aaa

//inicio clase dch
class GVRP : public GCCTP {
private://atributos de dap
	//todos los atributos de gerente
	int cantidad = 3;	//cantidad de personas
public:
	GVRP(string, string, int, int);//constructor
	~GVRP();

};

string GVRP::GCCTP::DCM::Gerente::Setnombre(string _nombre) { nombre = _nombre; };
string GVRP::GCCTP::DCM::Gerente::Setapellido(string _apellido) { apellido = _apellido; };
int GVRP::GCCTP::DCM::Gerente::Setid(int _id) { id = _id; };
//fin calse dch


//inicio clase dch
class EDD : public GBE {
private://atributos de dap
	//todos los atributos de gerente
	int cantidad = 1;	//cantidad de personas
public:
	EDD(string, string, int, int);//constructor
	~EDD();

};

string EDD::GBE::DCM::Gerente::Setnombre(string _nombre) { nombre = _nombre; };
string EDD::GBE::DCM::Gerente::Setapellido(string _apellido) { apellido = _apellido; };
int EDD::GBE::DCM::Gerente::Setid(int _id) { id = _id; };
//fin calse dch
 
//inicio clase dch
class GDDC : public GBE {
private://atributos de dap
	//todos los atributos de gerente
	int cantidad = 2;	//cantidad de personas
public:
	GDDC(string, string, int, int);//constructor
	~GDDC();

};

string GDDC::GBE::DCM::Gerente::Setnombre(string _nombre) { nombre = _nombre; };
string GDDC::GBE::DCM::Gerente::Setapellido(string _apellido) { apellido = _apellido; };
int GDDC::GBE::DCM::Gerente::Setid(int _id) { id = _id; };
//fin calse dch

//inicio clase dch
class GDV : public GBE {
private://atributos de dap
	//todos los atributos de gerente
	int cantidad = 1;	//cantidad de personas
public:
	GDV(string, string, int, int);//constructor
	~GDV();

};

string GDV::GBE::DCM::Gerente::Setnombre(string _nombre) { nombre = _nombre; };
string GDV::GBE::DCM::Gerente::Setapellido(string _apellido) { apellido = _apellido; };
int GDV::GBE::DCM::Gerente::Setid(int _id) { id = _id; };
//fin calse dch

//inicio clase dch
class ADC : public GBE {
private://atributos de dap
	//todos los atributos de gerente
	int cantidad = 1;	//cantidad de personas
public:
	ADC(string, string, int, int);//constructor
	~ADC();

};

string ADC::GBE::DCM::Gerente::Setnombre(string _nombre) { nombre = _nombre; };
string ADC::GBE::DCM::Gerente::Setapellido(string _apellido) { apellido = _apellido; };
int ADC::GBE::DCM::Gerente::Setid(int _id) { id = _id; };
//fin calse dch

//inicio clase dch
class GSTM : public GDM {
private://atributos de dap
	//todos los atributos de gerente
	int cantidad = 1;	//cantidad de personas
public:
	GSTM(string, string, int, int);//constructor
	~GSTM();

};

string GSTM::GDM::DCM::Gerente::Setnombre(string _nombre) { nombre = _nombre; };
string GSTM::GDM::DCM::Gerente::Setapellido(string _apellido) { apellido = _apellido; };
int GSTM::GDM::DCM::Gerente::Setid(int _id) { id = _id; };
//fin calse dch

//inicio clase dch
class GMN : public GDM {
private://atributos de dap
	//todos los atributos de gerente
	int cantidad = 1;	//cantidad de personas
public:
	GMN(string, string, int, int);//constructor
	~GMN();

};

string GMN::GDM::DCM::Gerente::Setnombre(string _nombre) { nombre = _nombre; };
string GMN::GDM::DCM::Gerente::Setapellido(string _apellido) { apellido = _apellido; };
int GMN::GDM::DCM::Gerente::Setid(int _id) { id = _id; };
//fin calse dch

//inicio clase dch
class GSM : public GDM {
private://atributos de dap
	//todos los atributos de gerente
	int cantidad = 1;	//cantidad de personas
public:
	GSM(string, string, int, int);//constructor
	~GSM();

};

string GSM::GDM::DCM::Gerente::Setnombre(string _nombre) { nombre = _nombre; };
string GSM::GDM::DCM::Gerente::Setapellido(string _apellido) { apellido = _apellido; };
int GSM::GDM::DCM::Gerente::Setid(int _id) { id = _id; };
//fin calse dch

//inicio clase dch
class GSTM : public GDM {
private://atributos de dap
	//todos los atributos de gerente
	int cantidad = 2;	//cantidad de personas
public:
	GSTM(string, string, int, int);//constructor
	~GSTM();

};

string GSTM::GDM::DCM::Gerente::Setnombre(string _nombre) { nombre = _nombre; };
string GSTM::GDM::DCM::Gerente::Setapellido(string _apellido) { apellido = _apellido; };
int GSTM::GDM::DCM::Gerente::Setid(int _id) { id = _id; };
//fin calse dch

//inicio clase dch
class JTM : public GDM {
private://atributos de dap
	//todos los atributos de gerente
	int cantidad = 1;	//cantidad de personas
public:
	JTM(string, string, int, int);//constructor
	~JTM();

};

string JTM::GDM::DCM::Gerente::Setnombre(string _nombre) { nombre = _nombre; };
string JTM::GDM::DCM::Gerente::Setapellido(string _apellido) { apellido = _apellido; };
int JTM::GDM::DCM::Gerente::Setid(int _id) { id = _id; };
//fin calse dch

//inicio clase dch
class APC : public GDMR {
private://atributos de dap
	//todos los atributos de gerente
	int cantidad = 1;	//cantidad de personas
public:
	APC(string, string, int, int);//constructor
	~APC();

};

string APC::GDMR::DCM::Gerente::Setnombre(string _nombre) { nombre = _nombre; };
string APC::GDMR::DCM::Gerente::Setapellido(string _apellido) { apellido = _apellido; };
int APC::GDMR::DCM::Gerente::Setid(int _id) { id = _id; };
//fin calse dch

//inicio clase dch
class CE : public GDMR {
private://atributos de dap
	//todos los atributos de gerente
	int cantidad = 5;	//cantidad de personas
public:
	CE(string, string, int, int);//constructor
	~CE();

};

string CE::GDMR::DCM::Gerente::Setnombre(string _nombre) { nombre = _nombre; };
string CE::GDMR::DCM::Gerente::Setapellido(string _apellido) { apellido = _apellido; };
int CE::GDMR::DCM::Gerente::Setid(int _id) { id = _id; };
//fin calse dch

//inicio clase dch
class CRMS : public GDMR {
private://atributos de dap
	//todos los atributos de gerente
	int cantidad = 1;	//cantidad de personas
public:
	CRMS(string, string, int, int);//constructor
	~CRMS();

};

string CRMS::GDMR::DCM::Gerente::Setnombre(string _nombre) { nombre = _nombre; };
string CRMS::GDMR::DCM::Gerente::Setapellido(string _apellido) { apellido = _apellido; };
int CRMS::GDMR::DCM::Gerente::Setid(int _id) { id = _id; };
//fin calse dch

//inicio clase dch
class ETD : public GRI {
private://atributos de dap
	//todos los atributos de gerente
	int cantidad = 1;	//cantidad de personas
public:
	ETD(string, string, int, int);//constructor
	~ETD();

};

string ETD::GRI::DCM::Gerente::Setnombre(string _nombre) { nombre = _nombre; };
string ETD::GRI::DCM::Gerente::Setapellido(string _apellido) { apellido = _apellido; };
int ETD::GRI::DCM::Gerente::Setid(int _id) { id = _id; };
//fin calse dch

//inicio clase dch
class JIC : public GRI {
private://atributos de dap
	//todos los atributos de gerente
	int cantidad = 1;	//cantidad de personas
public:
	JIC(string, string, int, int);//constructor
	~JIC();

};

string JIC::GRI::DCM::Gerente::Setnombre(string _nombre) { nombre = _nombre; };
string JIC::GRI::DCM::Gerente::Setapellido(string _apellido) { apellido = _apellido; };
int JIC::GRI::DCM::Gerente::Setid(int _id) { id = _id; };
//fin calse dch

//inicio clase dch
class JRGM : public GRI {
private://atributos de dap
	//todos los atributos de gerente
	int cantidad = 1;	//cantidad de personas
public:
	JRGM(string, string, int, int);//constructor
	~JRGM();

};

string JRGM::GRI::DCM::Gerente::Setnombre(string _nombre) { nombre = _nombre; };
string JRGM::GRI::DCM::Gerente::Setapellido(string _apellido) { apellido = _apellido; };
int JRGM::GRI::DCM::Gerente::Setid(int _id) { id = _id; };
//fin calse dch

//inicio clase dch
class AC : public GDC {
private://atributos de dap
	//todos los atributos de gerente
	int cantidad = 1;	//cantidad de personas
public:
	AC(string, string, int, int);//constructor
	~AC();

};

string AC::GDC::DCM::Gerente::Setnombre(string _nombre) { nombre = _nombre; };
string AC::GDC::DCM::Gerente::Setapellido(string _apellido) { apellido = _apellido; };
int AC::GDC::DCM::Gerente::Setid(int _id) { id = _id; };
//fin calse dch

//inicio clase dch
class EDC : public GDC {
private://atributos de dap
	//todos los atributos de gerente
	int cantidad = 2;	//cantidad de personas
public:
	EDC(string, string, int, int);//constructor
	~EDC();

};

string EDC::GDC::DCM::Gerente::Setnombre(string _nombre) { nombre = _nombre; };
string EDC::GDC::DCM::Gerente::Setapellido(string _apellido) { apellido = _apellido; };
int EDC::GDC::DCM::Gerente::Setid(int _id) { id = _id; };
//fin calse dch

//inicio clase dch
class JC : public GDC {
private://atributos de dap
	//todos los atributos de gerente
	int cantidad = 1;	//cantidad de personas
public:
	JC(string, string, int, int);//constructor
	~JC();

};

string JC::GDC::DCM::Gerente::Setnombre(string _nombre) { nombre = _nombre; };
string JC::GDC::DCM::Gerente::Setapellido(string _apellido) { apellido = _apellido; };
int JC::GDC::DCM::Gerente::Setid(int _id) { id = _id; };
//fin calse dch

//inicio clase dch
class JEE : public GDC {
private://atributos de dap
	//todos los atributos de gerente
	int cantidad = 1;	//cantidad de personas
public:
	JEE(string, string, int, int);//constructor
	~JEE();

};

string JEE::GDC::DCM::Gerente::Setnombre(string _nombre) { nombre = _nombre; };
string JEE::GDC::DCM::Gerente::Setapellido(string _apellido) { apellido = _apellido; };
int JEE::GDC::DCM::Gerente::Setid(int _id) { id = _id; };
//fin calse dch

//inicio clase dch
class ASAC : public GSCT {
private://atributos de dap
	//todos los atributos de gerente
	int cantidad = 1;	//cantidad de personas
public:
	ASAC(string, string, int, int);//constructor
	~ASAC();

};

string ASAC::GSCT::DCM::Gerente::Setnombre(string _nombre) { nombre = _nombre; };
string ASAC::GSCT::DCM::Gerente::Setapellido(string _apellido) { apellido = _apellido; };
int ASAC::GSCT::DCM::Gerente::Setid(int _id) { id = _id; };
//fin calse dch

//inicio clase dch
class AAC : public GSCT {
private://atributos de dap
	//todos los atributos de gerente
	int cantidad = 4;	//cantidad de personas
public:
	AAC(string, string, int, int);//constructor
	~AAC();

};

string AAC::GSCT::DCM::Gerente::Setnombre(string _nombre) { nombre = _nombre; };
string AAC::GSCT::DCM::Gerente::Setapellido(string _apellido) { apellido = _apellido; };
int AAC::GSCT::DCM::Gerente::Setid(int _id) { id = _id; };
//fin calse dch

//inicio clase dch
class AST : public GSCT {
private://atributos de dap
	//todos los atributos de gerente
	int cantidad = 7;	//cantidad de personas
public:
	AST(string, string, int, int);//constructor
	~AST();

};

string AST::GSCT::DCM::Gerente::Setnombre(string _nombre) { nombre = _nombre; };
string AST::GSCT::DCM::Gerente::Setapellido(string _apellido) { apellido = _apellido; };
int AST::GSCT::DCM::Gerente::Setid(int _id) { id = _id; };
//fin calse dch

//inicio clase dch
class ACE : public GSCT {
private://atributos de dap
	//todos los atributos de gerente
	int cantidad = 1;	//cantidad de personas
public:
	ACE(string, string, int, int);//constructor
	~ACE();

};

string ACE::GSCT::DCM::Gerente::Setnombre(string _nombre) { nombre = _nombre; };
string ACE::GSCT::DCM::Gerente::Setapellido(string _apellido) { apellido = _apellido; };
int ACE::GSCT::DCM::Gerente::Setid(int _id) { id = _id; };
//fin calse dch

//inicio clase dch
class JT : public GSCT {
private://atributos de dap
	//todos los atributos de gerente
	int cantidad = 1;	//cantidad de personas
public:
	JT(string, string, int, int);//constructor
	~JT();

};

string JT::GSCT::DCM::Gerente::Setnombre(string _nombre) { nombre = _nombre; };
string JT::GSCT::DCM::Gerente::Setapellido(string _apellido) { apellido = _apellido; };
int JT::GSCT::DCM::Gerente::Setid(int _id) { id = _id; };
//fin calse dch