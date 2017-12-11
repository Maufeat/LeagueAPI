#pragma once
#include <leagueapi/https.hpp>
#include <leagueapi/definitions/PatcherInjectedPatcherError.hpp>

namespace leagueapi::op {
  /**/
  static https::Result<void> PostPatcherV1ProductsByProductIdInjectError (const https::Info& _info_,
      const std::string& product_id /**/,
      const std::string& component_id /**/,
      const PatcherInjectedPatcherError& error /**/ )
  { 
    return { https::Do(_info_, "post", "/patcher/v1/products/"+to_string(product_id)+"/inject-error?", { 
      { "component-id", to_string(component_id) },
      { "error", to_string(error) },
    }, { 
    }) };
  }
} 