#pragma once
#include <leagueapi/https.hpp>
#include <leagueapi/definitions/PatcherProductResource.hpp>

namespace leagueapi::op {
  /**/
  static https::Result<json> PutPatcherV1ProductsByProductId (const https::Info& _info_,
      const std::string& product_id /**/,
      const PatcherProductResource& data /**/ )
  { 
    return { https::Do(_info_, "put", "/patcher/v1/products/"+to_string(product_id)+"?", { 
    }, { 
    },data) };
  }
} 