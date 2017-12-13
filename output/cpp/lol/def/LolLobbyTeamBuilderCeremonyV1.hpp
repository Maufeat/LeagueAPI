#pragma once
#include<lol/base_def.hpp> 
namespace lol {
  struct LolLobbyTeamBuilderCeremonyV1 { 
    int64_t duration;
    std::string name; 
  };
  void to_json(json& j, const LolLobbyTeamBuilderCeremonyV1& v) {
  j["duration"] = v.duration; 
  j["name"] = v.name; 
  }
  void from_json(const json& j, LolLobbyTeamBuilderCeremonyV1& v) {
  v.duration = j.at("duration").get<int64_t>(); 
  v.name = j.at("name").get<std::string>(); 
  }
}