#pragma once
#include <leagueapi/https.hpp>
#include <leagueapi/definitions/PatcherHeaderEntry.hpp>

namespace leagueapi::op {
  /**/
  static https::Result<json> PutPatcherV1ProductsByProductIdByComponentIdHttpHeaders (const https::Info& _info_,
      const std::string& product_id /**/,
      const std::string& component_id /**/,
      const std::vector<PatcherHeaderEntry>& headers /**/ )
  { 
    return { https::Do(_info_, "put", "/patcher/v1/products/"+to_string(product_id)+"/"+to_string(component_id)+"/http-headers?", { 
    }, { 
    },headers) };
  }
} 