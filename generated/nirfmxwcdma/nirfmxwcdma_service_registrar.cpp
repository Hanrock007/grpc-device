
//---------------------------------------------------------------------
// This file is automatically generated. All manual edits will be lost.
//---------------------------------------------------------------------
// Service registrar implementation for the NI-rfmxwcdma Metadata
//---------------------------------------------------------------------
#include "nirfmxwcdma_library.h"

#include <grpcpp/server_builder.h>

#include "nirfmxwcdma_service.h"
#include "nirfmxwcdma_service_registrar.h"

namespace nirfmxwcdma_grpc {

std::shared_ptr<void> register_service(
  grpc::ServerBuilder& builder,
  const std::shared_ptr<nidevice_grpc::SessionResourceRepository<niRFmxInstrHandle>>& resource_repository,
  const std::shared_ptr<nidevice_grpc::SessionResourceRepository<ViSession>>& vi_session_resource_repository,
  const nidevice_grpc::FeatureToggles& feature_toggles)
{
  auto toggles = NiRFmxWCDMAFeatureToggles(feature_toggles);

  if (toggles.is_enabled)
  {
    auto library = std::make_shared<NiRFmxWCDMALibrary>();
    auto service = std::make_shared<NiRFmxWCDMAService>(
      library,
      resource_repository,
      vi_session_resource_repository,
      toggles);
    builder.RegisterService(service.get());
    return service;
  }

  return {};
}

} // nirfmxwcdma_grpc
