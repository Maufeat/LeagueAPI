#pragma once
#include<lol/base_def.hpp> 
namespace lol {
  struct LolAccountVerificationVerifyRequest { 
    std::string mediator;
    std::string token; 
  };
  void to_json(json& j, const LolAccountVerificationVerifyRequest& v) {
  j["mediator"] = v.mediator; 
  j["token"] = v.token; 
  }
  void from_json(const json& j, LolAccountVerificationVerifyRequest& v) {
  v.mediator = j.at("mediator").get<std::string>(); 
  v.token = j.at("token").get<std::string>(); 
  }
}