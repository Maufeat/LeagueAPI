#pragma once
#include <leagueapi/https.hpp>
#include <leagueapi/definitions/LolHonorV2ApiHonorPlayerServerRequest.hpp>

namespace leagueapi::op {
  /**/
  static https::Result<std::string> PostLolHonorV2V1HonorPlayer (const https::Info& _info_,
      const LolHonorV2ApiHonorPlayerServerRequest& honorPlayerRequest /**/ )
  { 
    return { https::Do(_info_, "post", "/lol-honor-v2/v1/honor-player?", { 
    }, { 
    },honorPlayerRequest) };
  }
} 