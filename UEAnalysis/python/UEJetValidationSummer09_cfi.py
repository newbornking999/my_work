import FWCore.ParameterSet.Config as cms

UEJetValidationParameters = cms.PSet(
    CaloJetCollectionName = cms.InputTag("sisCone5CaloJets"),
    triggerEvent   = cms.InputTag("hltTriggerSummaryAOD"),
    triggerResults = cms.InputTag("TriggerResults","","HLT"),
    eventScaleMin           = cms.double( 0. ), 
    eventScaleMax           = cms.double( 4000.  ), 
    etaLimit                = cms.double( 2 ),
   
    dRLimitForMatching      = cms.double( 0.5   ),
    pTratioRangeForMatching = cms.double( 0.1   ),
    genEventScale             = cms.InputTag("generator"),
    selectedHLTBits = cms.vstring(                                  
                                   'HLT_ZeroBias'
                                 )                                    
    )

UEJetValidation900 = cms.EDProducer("UEJetValidation",
                                    UEJetValidationParameters,
                                    ChgGenJetCollectionName = cms.InputTag("ueSisCone5ChgGenJet"),
                                    TracksJetCollectionName = cms.InputTag("ueSisCone5TracksJet"),
                                    pTThreshold = cms.double(0.9)
                                    )
UECorrectedJetValidation900 = cms.EDProducer("UEJetValidation",
                                            UEJetValidationParameters,
                                     ChgGenJetCollectionName = cms.InputTag("ueSisCone5ChgGenJe"),
                                     TracksJetCollectionName = cms.InputTag("ueSisCone5TracksJet"),
                                             pTThreshold = cms.double(0.9)
                                             )
UECorrectedJetValidation900.CaloJetCollectionName = 'L2L3CorJetSC5Calo'

UEJetValidation500 = cms.EDProducer("UEJetValidation",
                                    UEJetValidationParameters,
                                    ChgGenJetCollectionName = cms.InputTag("ueSisCone5ChgGenJet500"),
                                    TracksJetCollectionName = cms.InputTag("ueSisCone5TracksJet500"),
                                    pTThreshold = cms.double(0.5)
                                    )
UECorrectedJetValidation500 = cms.EDProducer("UEJetValidation",
                                             UEJetValidationParameters,
                                             ChgGenJetCollectionName = cms.InputTag("ueSisCone5ChgGenJet500"),
                                             TracksJetCollectionName = cms.InputTag("ueSisCone5TracksJet500"),
                                             pTThreshold = cms.double(0.5)
                                             )
UECorrectedJetValidation500.CaloJetCollectionName = 'L2L3CorJetSC5Calo'

UEJetValidation1500 = cms.EDProducer("UEJetValidation",
                                     UEJetValidationParameters,
                                     ChgGenJetCollectionName = cms.InputTag("ueSisCone5ChgGenJet1500"),
                                     TracksJetCollectionName = cms.InputTag("ueSisCone5TracksJet1500"),
                                     pTThreshold = cms.double(1.5)
                                     )
UECorrectedJetValidation1500 = cms.EDProducer("UEJetValidation",
                                              UEJetValidationParameters,
                                              ChgGenJetCollectionName = cms.InputTag("ueSisCone5ChgGenJet1500"),
                                              TracksJetCollectionName = cms.InputTag("ueSisCone5TracksJet1500"),
                                              pTThreshold = cms.double(1.5)
                                              )
UECorrectedJetValidation1500.CaloJetCollectionName = 'L2L3CorJetSC5Calo'

UEJetValidation = cms.Sequence(UEJetValidation900*UECorrectedJetValidation900*UEJetValidation500*UECorrectedJetValidation500*UEJetValidation1500*UECorrectedJetValidation1500)
#UEJetValidation = cms.Sequence(UEJetValidation500)
