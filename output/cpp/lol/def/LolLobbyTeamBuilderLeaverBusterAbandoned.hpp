#pragma once
#include<lol/base_def.hpp> 
namespace lol {
  struct LolLobbyTeamBuilderLeaverBusterAbandoned { 
    std::string abandonerName; 
  };
  void to_json(json& j, const LolLobbyTeamBuilderLeaverBusterAbandoned& v) {
    j["abandonerName"] = v.abandonerName; 
  }
  void from_json(const json& j, LolLobbyTeamBuilderLeaverBusterAbandoned& v) {
    v.abandonerName = j.at("abandonerName").get<std::string>(); 
  }
}