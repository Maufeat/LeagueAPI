#pragma once
#include<lol/base_def.hpp> 
namespace lol {
  struct LolEndOfGameLobbyInvitation { 
    std::string state; 
  };
  inline void to_json(json& j, const LolEndOfGameLobbyInvitation& v) {
    j["state"] = v.state; 
  }
  inline void from_json(const json& j, LolEndOfGameLobbyInvitation& v) {
    v.state = j.at("state").get<std::string>(); 
  }
}