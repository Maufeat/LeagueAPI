#pragma once
#include <leagueapi/base.hpp>

namespace leagueapi {
  struct LolLoginIdToken { /**/ 
    uint64_t expiry;/**/
    std::string token;/**/
  };
  static void to_json(json& j, const LolLoginIdToken& v) { 
    j["expiry"] = v.expiry;
    j["token"] = v.token;
  }
  static void from_json(const json& j, LolLoginIdToken& v) { 
    v.expiry = j.at("expiry").get<uint64_t>(); 
    v.token = j.at("token").get<std::string>(); 
  }
} 