#pragma once
#include <leagueapi/https.hpp>

namespace leagueapi::op {
  /**/
  static https::Result<std::map<std::string, std::string>> GetPatcherV1ProductsByProductIdPaths (const https::Info& _info_,
      const std::string& product_id /**/ )
  { 
    return { https::Do(_info_, "get", "/patcher/v1/products/"+to_string(product_id)+"/paths?", { 
    }, { 
    }) };
  }
} 