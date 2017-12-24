#pragma once
#include "../base_def.hpp" 
namespace lol {
  struct LolClubsPublicSessionResource { 
    std::string sessionState;
    uint32_t sessionExpire; 
  };
  inline void to_json(json& j, const LolClubsPublicSessionResource& v) {
    j["sessionState"] = v.sessionState; 
    j["sessionExpire"] = v.sessionExpire; 
  }
  inline void from_json(const json& j, LolClubsPublicSessionResource& v) {
    v.sessionState = j.at("sessionState").get<std::string>(); 
    v.sessionExpire = j.at("sessionExpire").get<uint32_t>(); 
  }
}