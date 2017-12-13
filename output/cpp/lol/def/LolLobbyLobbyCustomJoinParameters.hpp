#pragma once
#include<lol/base_def.hpp> 
namespace lol {
  struct LolLobbyLobbyCustomJoinParameters { 
    std::optional<std::string> password;
    std::optional<bool> asSpectator; 
  };
  void to_json(json& j, const LolLobbyLobbyCustomJoinParameters& v) {
  j["password"] = v.password; 
  j["asSpectator"] = v.asSpectator; 
  }
  void from_json(const json& j, LolLobbyLobbyCustomJoinParameters& v) {
  v.password = j.at("password").get<std::optional<std::string>>(); 
  v.asSpectator = j.at("asSpectator").get<std::optional<bool>>(); 
  }
}