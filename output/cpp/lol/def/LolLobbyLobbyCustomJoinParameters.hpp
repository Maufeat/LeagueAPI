#pragma once
#include<lol/base_def.hpp> 
namespace lol {
  struct LolLobbyLobbyCustomJoinParameters { 
    std::optional<std::string> password;
    std::optional<bool> asSpectator; 
  };
  void to_json(json& j, const LolLobbyLobbyCustomJoinParameters& v) {
    if(v.password)
      j["password"] = *v.password;
    if(v.asSpectator)
      j["asSpectator"] = *v.asSpectator;
  }
  void from_json(const json& j, LolLobbyLobbyCustomJoinParameters& v) {
    if(auto it = j.find("password"); it != j.end() && !it->is_null())
      v.password = it->get<std::optional<std::string>>(); 
    if(auto it = j.find("asSpectator"); it != j.end() && !it->is_null())
      v.asSpectator = it->get<std::optional<bool>>(); 
  }
}