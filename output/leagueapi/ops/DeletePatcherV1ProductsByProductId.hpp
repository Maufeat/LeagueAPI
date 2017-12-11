#pragma once
#include <leagueapi/https.hpp>

namespace leagueapi::op {
  /**/
  static https::Result<json> DeletePatcherV1ProductsByProductId (const https::Info& _info_,
      const std::string& product_id /**/ )
  { 
    return { https::Do(_info_, "delete", "/patcher/v1/products/"+to_string(product_id)+"?", { 
    }, { 
    },"") };
  }
} 