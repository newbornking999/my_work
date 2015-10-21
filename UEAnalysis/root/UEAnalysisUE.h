#ifndef UEAnalysisUE_h
#define UEAnalysisUE_h

#include <iostream>
#include <fstream>
#include <string>
#include <vector>
#include <TFile.h>

#include <TH1F.h>
#include <TH2D.h>
#include <TLorentzVector.h>
#include <TProfile.h>

#include <TClonesArray.h>

#include "UEAnalysisCorrCali.h"

using namespace std;

class UEAnalysisUE {
 public :

  UEAnalysisUE();
  ~UEAnalysisUE(){}

  void ueAnalysisMC(float,string,float,float,TClonesArray*,TClonesArray* , TFile* , string );
  void ueAnalysisRECO(float,string,float,float,TClonesArray*,TClonesArray* , TFile* , string );

  void Begin(TFile *, string );

  //Underlying Event analysis
  TH1F*       fHistPtDistMC;
  TH1F*       fHistEtaDistMC;
  TH1F*       fHistPhiDistMC;

  TProfile*   pdN_vs_etaMC;
  TProfile*   pdN_vs_ptMC; 

  /*   TProfile*   pdN_vs_dphiMC; */
  TProfile*   pdPt_vs_dphiMC; 
  
  TH2D*   pdN_vs_dphiMC;
/*   TH2D*   pdPt_vs_dphiMC; */

  /*   TProfile*   pdN_vs_ptJTransMC; */
  /*   TProfile*   pdN_vs_ptJTransMaxMC; */
  /*   TProfile*   pdN_vs_ptJTransMinMC; */
  /*   TProfile*   pdPt_vs_ptJTransMC; */
  /*   TProfile*   pdPt_vs_ptJTransMaxMC; */
  /*   TProfile*   pdPt_vs_ptJTransMinMC; */
  /*   TProfile*   pdN_vs_ptJTowardMC; */
  /*   TProfile*   pdN_vs_ptJAwayMC; */
  /*   TProfile*   pdPt_vs_ptJTowardMC; */
  /*   TProfile*   pdPt_vs_ptJAwayMC; */

  TH2D*   pdN_vs_ptJTransMC;
  TH2D*   pdN_vs_ptJTransMaxMC;
  TH2D*   pdN_vs_ptJTransMinMC;
  TH2D*   pdPt_vs_ptJTransMC;
  TH2D*   pdPt_vs_ptJTransMaxMC;
  TH2D*   pdPt_vs_ptJTransMinMC;
  TH2D*   pdN_vs_ptJTowardMC;
  TH2D*   pdN_vs_ptJAwayMC;
  TH2D*   pdPt_vs_ptJTowardMC;
  TH2D*   pdPt_vs_ptJAwayMC;

  TH1F*       temp1MC;
  TH1F*       temp2MC;
  TH1F*       temp3MC;
  TH1F*       temp4MC;

  TH1F*       fHistPtDistRECO;
  TH1F*       fHistEtaDistRECO;
  TH1F*       fHistPhiDistRECO;

  TProfile*   pdN_vs_etaRECO;
  TProfile*   pdN_vs_ptRECO; 

  /*   TProfile*   pdN_vs_dphiRECO; */
  /*   TProfile*   pdPt_vs_dphiRECO; */

  TH2D*   pdN_vs_dphiRECO;
  TH2D*   pdPt_vs_dphiRECO;

  /*   TProfile*   pdN_vs_ptJTransRECO; */
  /*   TProfile*   pdN_vs_ptJTransMaxRECO; */
  /*   TProfile*   pdN_vs_ptJTransMinRECO; */
  /*   TProfile*   pdPt_vs_ptJTransRECO; */
  /*   TProfile*   pdPt_vs_ptJTransMaxRECO; */
  /*   TProfile*   pdPt_vs_ptJTransMinRECO; */
  /*   TProfile*   pdN_vs_ptJTowardRECO; */
  /*   TProfile*   pdN_vs_ptJAwayRECO; */
  /*   TProfile*   pdPt_vs_ptJTowardRECO; */
  /*   TProfile*   pdPt_vs_ptJAwayRECO; */
  
  TH2D*   pdN_vs_ptJTransRECO;
  TH2D*   pdN_vs_ptJTransMaxRECO;
  TH2D*   pdN_vs_ptJTransMinRECO;
  TH2D*   pdPt_vs_ptJTransRECO;
  TH2D*   pdPt_vs_ptJTransMaxRECO;
  TH2D*   pdPt_vs_ptJTransMinRECO;
  TH2D*   pdN_vs_ptJTowardRECO;
  TH2D*   pdN_vs_ptJAwayRECO;
  TH2D*   pdPt_vs_ptJTowardRECO;
  TH2D*   pdPt_vs_ptJAwayRECO;

  /*   TProfile*   pdN_vs_ptCJTransRECO; */
  /*   TProfile*   pdN_vs_ptCJTransMaxRECO; */
  /*   TProfile*   pdN_vs_ptCJTransMinRECO; */
  /*   TProfile*   pdPt_vs_ptCJTransRECO; */
  /*   TProfile*   pdPt_vs_ptCJTransMaxRECO; */
  /*   TProfile*   pdPt_vs_ptCJTransMinRECO; */
  /*   TProfile*   pdN_vs_ptCJTowardRECO; */
  /*   TProfile*   pdN_vs_ptCJAwayRECO; */
  /*   TProfile*   pdPt_vs_ptCJTowardRECO; */
  /*   TProfile*   pdPt_vs_ptCJAwayRECO; */

  TH2D*   pdN_vs_ptCJTransRECO;
  TH2D*   pdN_vs_ptCJTransMaxRECO;
  TH2D*   pdN_vs_ptCJTransMinRECO;
  TH2D*   pdPt_vs_ptCJTransRECO;
  TH2D*   pdPt_vs_ptCJTransMaxRECO;
  TH2D*   pdPt_vs_ptCJTransMinRECO;
  TH2D*   pdN_vs_ptCJTowardRECO;
  TH2D*   pdN_vs_ptCJAwayRECO;
  TH2D*   pdPt_vs_ptCJTowardRECO;
  TH2D*   pdPt_vs_ptCJAwayRECO;

  TH1F*       temp1RECO;
  TH1F*       temp2RECO;
  TH1F*       temp3RECO;
  TH1F*       temp4RECO;
  
  TH1D* h_dN_TransMC;
  TH1D* h_dPt_TransMC;
  TH1D* h_dN_TransRECO;
  TH1D* h_dPt_TransRECO;

  TH2D* h2d_averageParticlePt_vs_numParticles;
  TH2D* h2d_averageTrackPt_vs_numTracks;

  TH1D* h_pTChgGenJet;

  float piG;

  UEAnalysisCorrCali* cc;

};

#endif
