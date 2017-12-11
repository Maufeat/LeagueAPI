#pragma once
#include <leagueapi/https.hpp>
#include <leagueapi/definitions/RecofrienderConfig.hpp>

namespace leagueapi::op {
  /**/
  static https::Result<RecofrienderConfig> GetRecofrienderV1Config (const https::Info& _info_ )
  { 
    return { https::Do(_info_, "get", "/recofriender/v1/config?", { 
    }, { 
    },"") };
  }
} 