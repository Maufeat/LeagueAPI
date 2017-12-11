#pragma once
#include <leagueapi/https.hpp>

namespace leagueapi::op {
  /**/
  static https::Result<json> PostPatcherV1ProductsByProductIdSignalStartPatchingDelayed (const https::Info& _info_,
      const std::string& product_id /**/ )
  { 
    return { https::Do(_info_, "post", "/patcher/v1/products/"+to_string(product_id)+"/signal-start-patching-delayed?", { 
    }, { 
    }) };
  }
} 