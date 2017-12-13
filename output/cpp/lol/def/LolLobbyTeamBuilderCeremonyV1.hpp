#pragma once
#include<lol/base_def.hpp> 
namespace lol {
  struct LolLobbyTeamBuilderCeremonyV1 { 
    std::string name;
    int64_t duration; 
  };
  void to_json(json& j, const LolLobbyTeamBuilderCeremonyV1& v) {
    j["name"] = v.name; 
    j["duration"] = v.duration; 
  }
  void from_json(const json& j, LolLobbyTeamBuilderCeremonyV1& v) {
    v.name = j.at("name").get<std::string>(); 
    v.duration = j.at("duration").get<int64_t>(); 
  }
}