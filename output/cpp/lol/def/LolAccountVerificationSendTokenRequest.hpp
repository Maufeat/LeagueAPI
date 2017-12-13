#pragma once
#include<lol/base_def.hpp> 
namespace lol {
  struct LolAccountVerificationSendTokenRequest { 
    std::string mediator;
    std::string locale;
    std::string device; 
  };
  void to_json(json& j, const LolAccountVerificationSendTokenRequest& v) {
  j["mediator"] = v.mediator; 
  j["locale"] = v.locale; 
  j["device"] = v.device; 
  }
  void from_json(const json& j, LolAccountVerificationSendTokenRequest& v) {
  v.mediator = j.at("mediator").get<std::string>(); 
  v.locale = j.at("locale").get<std::string>(); 
  v.device = j.at("device").get<std::string>(); 
  }
}