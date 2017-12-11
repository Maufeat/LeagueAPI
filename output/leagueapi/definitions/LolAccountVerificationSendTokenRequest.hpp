#pragma once
#include <leagueapi/base.hpp>

namespace leagueapi {
  struct LolAccountVerificationSendTokenRequest { /**/ 
    std::string mediator;/**/
    std::string locale;/**/
    std::string device;/**/
  };
  static void to_json(json& j, const LolAccountVerificationSendTokenRequest& v) { 
    j["mediator"] = v.mediator;
    j["locale"] = v.locale;
    j["device"] = v.device;
  }
  static void from_json(const json& j, LolAccountVerificationSendTokenRequest& v) { 
    v.mediator = j.at("mediator").get<std::string>(); 
    v.locale = j.at("locale").get<std::string>(); 
    v.device = j.at("device").get<std::string>(); 
  }
} 