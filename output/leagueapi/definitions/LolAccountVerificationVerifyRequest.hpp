#pragma once
#include <leagueapi/base.hpp>

namespace leagueapi {
  struct LolAccountVerificationVerifyRequest { /**/ 
    std::string mediator;/**/
    std::string token;/**/
  };
  static void to_json(json& j, const LolAccountVerificationVerifyRequest& v) { 
    j["mediator"] = v.mediator;
    j["token"] = v.token;
  }
  static void from_json(const json& j, LolAccountVerificationVerifyRequest& v) { 
    v.mediator = j.at("mediator").get<std::string>(); 
    v.token = j.at("token").get<std::string>(); 
  }
} 