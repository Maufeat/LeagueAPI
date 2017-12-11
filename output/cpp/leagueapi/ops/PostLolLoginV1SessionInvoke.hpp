#pragma once
#include <leagueapi/https.hpp>
#include <leagueapi/definitions/LolLoginLcdsResponse.hpp>

namespace leagueapi::op {
  /**/
  static https::Result<LolLoginLcdsResponse> PostLolLoginV1SessionInvoke (const https::Info& _info_,
      const std::string& destination /**/,
      const std::string& method /**/,
      const std::vector<json>& args /**/ )
  { 
    return { https::Do(_info_, "post", "/lol-login/v1/session/invoke?", { 
      { "destination", to_string(destination) },
      { "method", to_string(method) },
    }, { 
    }, { 
      { "args", to_string(args) },
    }, true ) };
  }
} 