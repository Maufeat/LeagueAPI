#pragma once
#include <leagueapi/https.hpp>
#include <leagueapi/definitions/RecofrienderDebugConfig.hpp>

namespace leagueapi::op {
  /**/
  static https::Result<RecofrienderDebugConfig> PutRecofrienderV1Debug (const https::Info& _info_,
      const RecofrienderDebugConfig& debugConfiguration /**/ )
  { 
    return { https::Do(_info_, "put", "/recofriender/v1/debug?", { 
    }, { 
    },debugConfiguration) };
  }
} 