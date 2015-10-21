#ifndef UEAnalysisJets_h
#define UEAnalysisJets_h

#include <iostream>
#include <fstream>
#include <string>
#include <vector>
#include <TFile.h>

#include<TLorentzVector.h>

#include <TH1F.h>
#include <TH2D.h>
#include <TProfile.h>

#include <TClonesArray.h>

using namespace std;

class UEAnalysisJets {
 public :

  UEAnalysisJets();
  ~UEAnalysisJets(){}

  void jetCalibAnalysis(float ,float,TClonesArray *,TClonesArray *,TClonesArray *,TClonesArray *, TClonesArray* , TFile* , string );

  void Begin(TFile *, string );

  //Charged Jet caharacterization
  TH1F* dr_chgcalo;
  TH1F* dr_chginc;
  TH1F* dr_chgmcreco;
  TH1F* dr_caloinc;
  TH1F* numb_cal;
  TH1F* pT_cal;
  TH1F* eta_cal;
  TH1F* eta_cal_res;
  TH1F* phi_cal;
  TH1F* phi_cal_res;
  TH1F* numb_chgmc;
  TH1F* pT_chgmc;
  TH1F* eta_chgmc;
  TH1F* eta_chgmc_res;
  TH1F* phi_chgmc;
  TH1F* phi_chgmc_res;
  TH1F* numb_chgreco;
  TH1F* pT_chgreco;
  TH1F* eta_chgreco;
  TH1F* eta_chgreco_res;
  TH1F* phi_chgreco;
  TH1F* phi_chgreco_res;
  TH1F* numb_inc;
  TH1F* pT_inc;
  TH1F* eta_inc;
  TH1F* phi_inc;
  TProfile* calib_chgcalo;
  TProfile* calib_chginc;
  TProfile* calib_chgmcreco;
  TProfile* calib_caloinc;
  TProfile* calib_chgcalo_eta;
  TProfile* calib_chginc_eta;
  TProfile* calib_chgmcreco_eta;
  TProfile* calib_caloinc_eta;
  TProfile* calib_chgcalo_phi;
  TProfile* calib_chginc_phi;
  TProfile* calib_chgmcreco_phi;
  TProfile* calib_caloinc_phi;

  //
  TH2D* h2d_weightVSratioPtTracksJetPtCaloJet;
  TH2D* h2d_calib_chgcalo;
  TH2D* h2d_calib_chgmcreco;
  //

  //
  // hltMinBiasPixelFilter
  // hltpreMin (prescaled minbias trigger)
  // hltpreZero (prescaled zerobias trigger)

  // hlt1jet30
  // hlt1jet50
  // hlt1jet80
  // hlt1jet110
  // hlt1jet180
  // hlt1jet250

  TH1F* pT_cal_hlt1jet30 ;
  TH1F* pT_cal_hlt1jet50 ;
  TH1F* pT_cal_hlt1jet80;
  TH1F* pT_cal_hlt1jet110;
  TH1F* pT_cal_hlt1jet180;
  TH1F* pT_cal_hlt1jet250;

  TH1F* pT_chgreco_hlt1jet30 ;
  TH1F* pT_chgreco_hlt1jet50 ;
  TH1F* pT_chgreco_hlt1jet80;
  TH1F* pT_chgreco_hlt1jet110;
  TH1F* pT_chgreco_hlt1jet180;
  TH1F* pT_chgreco_hlt1jet250;

  TH1F* pT_chgmc_hlt1jet30 ;
  TH1F* pT_chgmc_hlt1jet50 ;
  TH1F* pT_chgmc_hlt1jet80;
  TH1F* pT_chgmc_hlt1jet110;
  TH1F* pT_chgmc_hlt1jet180;
  TH1F* pT_chgmc_hlt1jet250;

  TH1F* pT_inc_hlt1jet30 ;
  TH1F* pT_inc_hlt1jet50 ;
  TH1F* pT_inc_hlt1jet80 ;
  TH1F* pT_inc_hlt1jet110;
  TH1F* pT_inc_hlt1jet180;
  TH1F* pT_inc_hlt1jet250;
  //

  float piG;

  vector<string> HLTBits;

};

#endif
