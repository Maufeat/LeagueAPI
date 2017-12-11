#pragma once
#include <leagueapi/https.hpp>

namespace leagueapi::op {
  /**/
  static https::Result<std::vector<std::string>> GetPatcherV1Products (const https::Info& _info_ )
  { 
    return { https::Do(_info_, "get", "/patcher/v1/products?", { 
    }, { 
    },"") };
  }
} 