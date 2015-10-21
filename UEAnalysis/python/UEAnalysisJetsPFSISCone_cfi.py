import FWCore.ParameterSet.Config as cms

from RecoJets.JetProducers.FastjetParameters_cfi import *
from RecoJets.JetProducers.PFJetParameters_cfi import *
from RecoJets.JetProducers.AnomalousCellParameters_cfi import *

from RecoJets.JetProducers.sc5GenJets_cfi import sisCone5GenJets
from RecoJets.JetProducers.sc5PFJets_cfi import sisCone5PFJets



FastjetWithAreaPU = cms.PSet(
    Active_Area_Repeats = cms.int32(5),
    GhostArea = cms.double(0.01),
    Ghost_EtaMax = cms.double(6.0),
    UE_Subtraction = cms.string('no')
)


sisCone5PFJets = cms.EDProducer(
    "FastjetJetProducer",
    PFJetParameters,
    AnomalousCellParameters,
    jetAlgorithm = cms.string("SISCone"),
    rParam       = cms.double(0.4)
    )


#MC jet
ueSisCone5GenJet = sisCone5GenJets.clone( 
src = cms.InputTag("goodParticles"),
jetPtMin       = cms.double(1.0),
inputEtMin     = cms.double(0.9)
 )

ueSisCone5ChgGenJet = sisCone5GenJets.clone( 
src = cms.InputTag("chargeParticles"),
jetPtMin       = cms.double(1.0),
inputEtMin     = cms.double(0.9)
 )

ueSisCone5GenJet500 = sisCone5GenJets.clone( 
src = cms.InputTag("goodParticles"),
jetPtMin       = cms.double(1.0),
inputEtMin     = cms.double(0.5)
 )

ueSisCone5ChgGenJet500 = sisCone5GenJets.clone( 
src = cms.InputTag("chargeParticles"),
jetPtMin       = cms.double(1.0),
inputEtMin     = cms.double(0.5)
 )

ueSisCone5GenJet1500 = sisCone5GenJets.clone( 
src = cms.InputTag("goodParticles"),
jetPtMin       = cms.double(1.0),
inputEtMin     = cms.double(1.5)
 )

ueSisCone5ChgGenJet1500 = sisCone5GenJets.clone( 
src = cms.InputTag("chargeParticles"),
jetPtMin       = cms.double(1.0),
inputEtMin     = cms.double(1.5)
 )


ueSisCone5GenJet700 = sisCone5GenJets.clone( 
src = cms.InputTag("goodParticles"),
jetPtMin       = cms.double(1.0),
inputEtMin     = cms.double(0.7)
 )

ueSisCone5ChgGenJet700 = sisCone5GenJets.clone( 
src = cms.InputTag("chargeParticles"),
jetPtMin       = cms.double(1.0),
inputEtMin     = cms.double(0.7)
 )

ueSisCone5GenJet1100 = sisCone5GenJets.clone( 
src = cms.InputTag("goodParticles"),
jetPtMin       = cms.double(1.0),
inputEtMin     = cms.double(1.1)
 )

ueSisCone5ChgGenJet1100 = sisCone5GenJets.clone( 
src = cms.InputTag("chargeParticles"),
jetPtMin       = cms.double(1.0),
inputEtMin     = cms.double(1.1)
 )

#RECO jet Tracks

ueSisCone5PFJet500 = sisCone5PFJets.clone(
src            = cms.InputTag('particleFlow'),
jetPtMin       = cms.double(1.0),
inputEtMin     = cms.double(0.5)
)

ueSisCone5PFJet = sisCone5PFJets.clone(
src            = cms.InputTag('particleFlow'),
jetPtMin       = cms.double(1.0),
inputEtMin     = cms.double(0.9)
)

ueSisCone5PFJet1500 = sisCone5PFJets.clone(
  src            = cms.InputTag('particleFlow'),
jetPtMin       = cms.double(1.0),
inputEtMin     = cms.double(1.5)
)

ueSisCone5PFJet700 = sisCone5PFJets.clone(
 src            = cms.InputTag('particleFlow'),
jetPtMin       = cms.double(1.0),
inputEtMin     = cms.double(0.7)
)

ueSisCone5PFJet1100 = sisCone5PFJets.clone(
 src            = cms.InputTag('particleFlow'),
jetPtMin       = cms.double(1.0),
inputEtMin     = cms.double(1.1)
)

UEAnalysisJetsOnlyMC = cms.Sequence(ueSisCone5GenJet*ueSisCone5ChgGenJet*ueSisCone5GenJet500*ueSisCone5ChgGenJet500*ueSisCone5GenJet1500*ueSisCone5ChgGenJet1500*ueSisCone5GenJet700*ueSisCone5ChgGenJet700*ueSisCone5GenJet1100*ueSisCone5ChgGenJet1100)
UEAnalysisJetsOnlyReco = cms.Sequence(ueSisCone5PFJet500)

UEAnalysisJets = cms.Sequence(UEAnalysisJetsOnlyMC*UEAnalysisJetsOnlyReco)

