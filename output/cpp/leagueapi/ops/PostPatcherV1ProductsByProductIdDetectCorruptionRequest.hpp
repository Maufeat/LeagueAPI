#pragma once
#include <leagueapi/https.hpp>
#include <leagueapi/definitions/PatcherProductState.hpp>

namespace leagueapi::op {
  /**/
  static https::Result<PatcherProductState> PostPatcherV1ProductsByProductIdDetectCorruptionRequest (const https::Info& _info_,
      const std::string& product_id /**/ )
  { 
    return { https::Do(_info_, "post", "/patcher/v1/products/"+to_string(product_id)+"/detect-corruption-request?", { 
    }, { 
    }) };
  }
} 