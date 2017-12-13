#pragma once
#include<lol/base_def.hpp> 
namespace lol {
  struct LolLobbyLobbyCustomJoinParameters { 
    std::optional<bool> asSpectator;
    std::optional<std::string> password; 
  };
  void to_json(json& j, const LolLobbyLobbyCustomJoinParameters& v) {
  j["asSpectator"] = v.asSpectator; 
  j["password"] = v.password; 
  }
  void from_json(const json& j, LolLobbyLobbyCustomJoinParameters& v) {
  v.asSpectator = j.at("asSpectator").get<std::optional<bool>>(); 
  v.password = j.at("password").get<std::optional<std::string>>(); 
  }
}