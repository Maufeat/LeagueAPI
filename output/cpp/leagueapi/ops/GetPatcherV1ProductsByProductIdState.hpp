#pragma once
#include <leagueapi/https.hpp>
#include <leagueapi/definitions/PatcherProductState.hpp>

namespace leagueapi::op {
  /**/
  static https::Result<PatcherProductState> GetPatcherV1ProductsByProductIdState (const https::Info& _info_,
      const std::string& product_id /**/ )
  { 
    return { https::Do(_info_, "get", "/patcher/v1/products/"+to_string(product_id)+"/state?", { 
    }, { 
    }) };
  }
} 