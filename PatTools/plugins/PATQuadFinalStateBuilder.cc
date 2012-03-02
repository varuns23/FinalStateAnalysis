#include "FinalStateAnalysis/PatTools/plugins/PATQuadFinalStateBuilderT.h"
#include "FinalStateAnalysis/DataFormats/interface/PATQuadLeptonFinalStates.h"

typedef PATQuadFinalStateBuilderT<PATElecElecElecElecFinalState> PATElecElecElecElecFinalStateProducer;
typedef PATQuadFinalStateBuilderT<PATElecElecElecMuFinalState> PATElecElecElecMuFinalStateProducer;
typedef PATQuadFinalStateBuilderT<PATElecElecElecTauFinalState> PATElecElecElecTauFinalStateProducer;
typedef PATQuadFinalStateBuilderT<PATElecElecMuMuFinalState> PATElecElecMuMuFinalStateProducer;
typedef PATQuadFinalStateBuilderT<PATElecElecMuTauFinalState> PATElecElecMuTauFinalStateProducer;
typedef PATQuadFinalStateBuilderT<PATElecElecTauTauFinalState> PATElecElecTauTauFinalStateProducer;
typedef PATQuadFinalStateBuilderT<PATElecMuMuMuFinalState> PATElecMuMuMuFinalStateProducer;
typedef PATQuadFinalStateBuilderT<PATElecMuMuTauFinalState> PATElecMuMuTauFinalStateProducer;
typedef PATQuadFinalStateBuilderT<PATElecMuTauTauFinalState> PATElecMuTauTauFinalStateProducer;
typedef PATQuadFinalStateBuilderT<PATElecTauTauTauFinalState> PATElecTauTauTauFinalStateProducer;
typedef PATQuadFinalStateBuilderT<PATMuMuMuMuFinalState> PATMuMuMuMuFinalStateProducer;
typedef PATQuadFinalStateBuilderT<PATMuMuMuTauFinalState> PATMuMuMuTauFinalStateProducer;
typedef PATQuadFinalStateBuilderT<PATMuMuTauTauFinalState> PATMuMuTauTauFinalStateProducer;
typedef PATQuadFinalStateBuilderT<PATMuTauTauTauFinalState> PATMuTauTauTauFinalStateProducer;
typedef PATQuadFinalStateBuilderT<PATTauTauTauTauFinalState> PATTauTauTauTauFinalStateProducer;

#include "FWCore/Framework/interface/MakerMacros.h"

DEFINE_FWK_MODULE(PATElecElecElecElecFinalStateProducer);
DEFINE_FWK_MODULE(PATElecElecElecMuFinalStateProducer);
DEFINE_FWK_MODULE(PATElecElecElecTauFinalStateProducer);
DEFINE_FWK_MODULE(PATElecElecMuMuFinalStateProducer);
DEFINE_FWK_MODULE(PATElecElecMuTauFinalStateProducer);
DEFINE_FWK_MODULE(PATElecElecTauTauFinalStateProducer);
DEFINE_FWK_MODULE(PATElecMuMuMuFinalStateProducer);
DEFINE_FWK_MODULE(PATElecMuMuTauFinalStateProducer);
DEFINE_FWK_MODULE(PATElecMuTauTauFinalStateProducer);
DEFINE_FWK_MODULE(PATElecTauTauTauFinalStateProducer);
DEFINE_FWK_MODULE(PATMuMuMuMuFinalStateProducer);
DEFINE_FWK_MODULE(PATMuMuMuTauFinalStateProducer);
DEFINE_FWK_MODULE(PATMuMuTauTauFinalStateProducer);
DEFINE_FWK_MODULE(PATMuTauTauTauFinalStateProducer);
DEFINE_FWK_MODULE(PATTauTauTauTauFinalStateProducer);
