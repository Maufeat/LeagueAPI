#pragma once
#include <leagueapi/https.hpp>
#include <leagueapi/definitions/RecofrienderNetworkConfig.hpp>

namespace leagueapi::op {
  /**/
  static https::Result<RecofrienderNetworkConfig> GetRecofrienderV1ConfigByNetwork (const https::Info& _info_,
      const std::string& network /**/ )
  { 
    return { https::Do(_info_, "get", "/recofriender/v1/config/"+to_string(network)+"?", { 
    }, { 
    },"") };
  }
} 