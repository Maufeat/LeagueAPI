#pragma once
#include "../base_def.hpp" 
namespace lol {
  struct LolAccountVerificationSendTokenRequest { 
    std::string device;
    std::string mediator;
    std::string locale; 
  };
  inline void to_json(json& j, const LolAccountVerificationSendTokenRequest& v) {
    j["device"] = v.device; 
    j["mediator"] = v.mediator; 
    j["locale"] = v.locale; 
  }
  inline void from_json(const json& j, LolAccountVerificationSendTokenRequest& v) {
    v.device = j.at("device").get<std::string>(); 
    v.mediator = j.at("mediator").get<std::string>(); 
    v.locale = j.at("locale").get<std::string>(); 
  }
}