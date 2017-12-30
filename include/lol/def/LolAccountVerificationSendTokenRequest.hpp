#pragma once
#include "../base_def.hpp" 
namespace lol {
  struct LolAccountVerificationSendTokenRequest { 
    std::string locale;
    std::string mediator;
    std::string device; 
  };
  inline void to_json(json& j, const LolAccountVerificationSendTokenRequest& v) {
    j["locale"] = v.locale; 
    j["mediator"] = v.mediator; 
    j["device"] = v.device; 
  }
  inline void from_json(const json& j, LolAccountVerificationSendTokenRequest& v) {
    v.locale = j.at("locale").get<std::string>(); 
    v.mediator = j.at("mediator").get<std::string>(); 
    v.device = j.at("device").get<std::string>(); 
  }
}