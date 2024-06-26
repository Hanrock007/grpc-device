
//---------------------------------------------------------------------
// This file is automatically generated. All manual edits will be lost.
//---------------------------------------------------------------------
// Service registrar implementation for the NI-Digital Pattern Driver Metadata
//---------------------------------------------------------------------
#include "nidigitalpattern_library.h"

#include <grpcpp/server_builder.h>

#include "nidigitalpattern_service.h"
#include "nidigitalpattern_service_registrar.h"

namespace nidigitalpattern_grpc {

std::shared_ptr<void> register_service(
  grpc::ServerBuilder& builder,
  const std::shared_ptr<nidevice_grpc::SessionResourceRepository<ViSession>>& resource_repository,
  const nidevice_grpc::FeatureToggles& feature_toggles)
{
  auto toggles = NiDigitalFeatureToggles(feature_toggles);

  if (toggles.is_enabled)
  {
    auto library = std::make_shared<NiDigitalLibrary>();
    auto service = std::make_shared<NiDigitalService>(
      library,
      resource_repository,
      toggles);
    builder.RegisterService(service.get());
    return service;
  }

  return {};
}

} // nidigitalpattern_grpc
