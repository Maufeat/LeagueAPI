#pragma once
#include<lol/base_def.hpp> 
namespace lol {
  struct LolClubsPublicSessionResource { 
    uint32_t sessionExpire;
    std::string sessionState; 
  };
  void to_json(json& j, const LolClubsPublicSessionResource& v) {
    j["sessionExpire"] = v.sessionExpire; 
    j["sessionState"] = v.sessionState; 
  }
  void from_json(const json& j, LolClubsPublicSessionResource& v) {
    v.sessionExpire = j.at("sessionExpire").get<uint32_t>(); 
    v.sessionState = j.at("sessionState").get<std::string>(); 
  }
}