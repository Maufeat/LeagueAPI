#pragma once
#include <leagueapi/https.hpp>

namespace leagueapi::op {
  /**/
  static https::Result<json> DeletePatcherV1ProductsByProductIdByComponentIdHttpHeaders (const https::Info& _info_,
      const std::string& product_id /**/,
      const std::string& component_id /**/ )
  { 
    return { https::Do(_info_, "delete", "/patcher/v1/products/"+to_string(product_id)+"/"+to_string(component_id)+"/http-headers?", { 
    }, { 
    }) };
  }
} 