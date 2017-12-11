#pragma once
#include <leagueapi/https.hpp>
#include <leagueapi/definitions/RecofrienderContactResource.hpp>

namespace leagueapi::op {
  /**/
  static https::Result<std::vector<RecofrienderContactResource>> GetRecofrienderV2Dismissed (const https::Info& _info_ )
  { 
    return { https::Do(_info_, "get", "/recofriender/v2/dismissed?", { 
    }, { 
    },"") };
  }
} 